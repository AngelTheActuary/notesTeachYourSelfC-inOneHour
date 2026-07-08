/*
TRYING TO ACCESS METHODS FROM A BASE CLASS

You have seen methods accessed in a derived class
from a base class using virtual functions.
What if there is a method in the derived class that 
isn't in the base calss?
Can you access it in the same way you have been  using 
the base class to access the virtual methods?
There shouldn't be a name conflict because only the derived
class has the method.

If the Dog object had a method, WagTail(),
which is not in Mammal, you could not use the pointer
to Mammal to access that method.

Because WagTail() is not a virtual function, and because
it is not in a Mammal object, you can't get there
without either a Dog object or a Dog pointer.

You could cast the Mammal to act as a Dog;
however, this is not safe if the Mammal is not a Dog.
Although this would transform the Mammal pointer into a Dog pointer,
a much better and safer way exists to call the WagTail() method.
Besides, C++ frowns on explicit casts because they are error-prone.

SLICING

Note that the virtual function operates only on pointers and refeences.
Passing an object by value does not enable the virtual functions to be invoked.

*/

#include<iostream>
using namespace std;

class Mammal
{
    public:
        Mammal():itsAge(1){}
        virtual ~Mammal(){}
        virtual void Speak() const {cout<<"Mammal speak!\n";}
    protected:
        int itsAge;
};

class Dog:public Mammal
{
    public:
        void Speak() const {cout<<"Woof!\n";}
};

class Cat:public Mammal
{
    public:
        void Speak() const{cout<<"Meow!\n";}
};

void ValueFunction (Mammal);
void PtrFunction (Mammal*);
void RefFunction (Mammal&);

int main()
{
    Mammal* ptr=0;
    int choice;
    while (1) {
        bool fQuit=false;
        cout<<"(1)dog (2)cat (0): "<<endl;
        cin>>choice;
        switch (choice) {
            case 0:
                fQuit=true;
                break;
            case 1:
                ptr=new Dog;
                break;
            case 2:
                ptr=new Cat;
                break;
            default:
                ptr=new Mammal;
                break;
        }
        if (fQuit==true) {
            break;
        }
        PtrFunction(ptr);
        RefFunction(*ptr);
        ValueFunction(*ptr);
    }
    return 0;
}

void ValueFunction (Mammal MammalValue)
{
    MammalValue.Speak();
}

void PtrFunction(Mammal * pMammal)
{
    pMammal->Speak();
}

void RefFunction (Mammal & rMammal)
{
    rMammal.Speak();
}


