//HIDDING THE BASE CLASS METHOD

#include<iostream>
using namespace std;

class Mammal
{
    public:
        void Move() const {cout<<"Mammal love one step\n";}
        void Move(int distance) const
        {
            cout<<"Mammal love ";
            cout<<distance<<" steps.\n";
        }
    protected:
        int itsAge;
        int itsWeight;
};

class Dog:public Mammal
{
    public:
        //You might receive a warning that you are hidding a function!
        void Move() const {cout<<"Dog move 5 steps.\n";}
};

int main()
{
    Mammal bigAnimal;
    Dog Solobino;
    bigAnimal.Move();
    bigAnimal.Move(2);
    Solobino.Move();
    //This make a warning
    //Solobino.Move(10);
    return 0;
}


