//VIRTUAL METHODS
#include<iostream>
using namespace std;

class Mammal
{
    public:
        Mammal():itsAge(1){cout<<"Mammal constructor...\n";}
        virtual ~Mammal() {cout<<"Mammal destrcutor...\n";}
        void Move() const {cout<<"Mammal move one step\n";}
        virtual void Speak() const {cout<<"Mamma! speak\n";}
    protected:
        int itsAge;
};

class Dog:public Mammal
{
    public:
        Dog() {cout<<"Dog Constructor\n";}
        virtual ~Dog() {cout<<"Dog Destructor...\n";}
        void WagTail(){cout<<"Wagging Tail...\n";}
        void Speak()const{cout<<"Woof!\n";}
        void Move()const{cout<<"Dog moves 5 steps...\n";}
};

int main()
{
    Mammal *pDog=new Dog;
    pDog->Move();
    pDog->Speak();
    
    return 0;
}



