#include<iostream>
using namespace std;

class Mammal
{
    public:
        void Move() const {cout<<"Mammañ move one step\n";}
        void Move(int distance) const
        {
            cout<<"Mammal move "<<distance<<" steps."<<endl;
        }
    protected:
        int itsAge;
        int itsWeight;
};

class Dog:public Mammal
{
    public:
        void Move() const;
};

void Dog::Move() const
{
    cout<<"In dog move..\n";
    Mammal::Move(3);
}

int main()
{
    Mammal bigAnimal;
    Dog Solobino;
    bigAnimal.Move(2);
    Solobino.Mammal::Move(6);
    return 0;
}
