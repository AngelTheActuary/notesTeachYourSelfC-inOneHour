/*
POLIMORPHISM

Problemas with single inheritance:

Suppose that you've been working with your animal classes for a while,
and you've divided the class hierarchy into Bird and Mammal.
The Bird class includes the member function Fly().

The Mammal class has been divided into a number of types of Mammals,
including Horse.
The Horse class includes the member functions Whinny() and Gallop().

Suddenly, you realize you need a Pegasus object:
a cross between a Horse and a Bird. A Pegasus can Fly(),
it can Gallop(). With single inheritance, you've in quite a jam.

With single inheritance, you can only pull from one of these existing classes.
You can make Pegasus a Bird, but then it won't be able to Whinny() or Gallop().
You can make it a Horse, but then it won't be able to Fly().

You first solution is to copy the Fly() method into the Pegasus class
and derive Pegasus from Horse.
This works fine, at the cost of having the Fly() method in two places
(Bird and Pegasus).

If you change one, you must remember to change the other.
Of course, a developer who comes along months or years later to maintain your code must also know to fix both places.

Soon, however, you have a new problem.
You want to create a list of Horse objects and a list of Bird objects.
You'd like to be able to add your Pegasus objects to either list, but
if a Pegasus is a Horse, you can't add it to a list of Birds.

You have a couple of potential solutions.
YOu can rename the Horse method Gallop() to Move(),
and then override Move() in your Pegasus object to do the work of Fly().
You would then override Move() in your other horses to do the  work of Gallop().
Perhaps Pegasus could be claver enough to gallop short distances and fly longer distances,
as seen in the following sample:

Pegasus::Move(long distance)
{
    if(distance>veryFar){
        fly(distance);
    } else {
        gallop(distance); 
    }
}

This is a bit limiting. Perhaps one day Pegasus will want to fly a short distance or gallop
a long distance. Your next solution might be to move Fly() up into Horse, as illustrated
in Listing 12.1. The problem is that most horses can’t fly, so you have to make this
method do nothing unless it is a Pegasus

*/

#include<iostream>
using namespace std;

class Horse
{
    public:
        virtual ~Horse(){} //Obligatorio,, sin esto hay perdida de memoria
        void Gallop(){cout<<"Galloping...\n";}
        virtual void Fly(){cout<<"Horses can't fly.\n";}
    private:
        int itsAge;
};

class Pegasus:public Horse
{
    public:
        void Fly(){cout<<"I can fly! I can fly! I can fly!\n";}
};

const int NumberHorses=5;

int main()
{
    Horse* Ranch[NumberHorses];
    Horse* pHorse;
    int choice;
    for(int i=0; i<NumberHorses; i++)
    {
        cout<<"(1)Horse (2)Pegasus\n";
        cin>>choice;
        if (choice==2) {
            pHorse=new Pegasus;
        } else {
            pHorse=new Horse;
        }
        Ranch[i]=pHorse;
    }
    cout<<endl;
    for(int i=0; i<NumberHorses; i++) {
        Ranch[i]->Fly();
        delete Ranch[i];
    }
    return 0;
}


