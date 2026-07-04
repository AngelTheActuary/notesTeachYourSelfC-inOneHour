//OVERRIDING CLASS FUNCTION
#include<iostream>
using namespace std;

enum BREED{GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
    public:
        //Constructors
        Mammal(){cout<<"Mammal construcrttor..."<<endl;}
        ~Mammal(){cout<<"Mammal destrustor..."<<endl;}

        //Other methods
        void Speak()const {cout<<"Mammal sound!\n";}
        void Sleep()const {cout<<"shh. I'm sleeping\n";}

    protected:
        int itsAge;
        int itsWeight;
};

class Dog:public Mammal
{
    public:
        //Constructors
        Dog(){cout<<"Dog constructor....\n";}
        ~Dog(){cout<<"Dog Destructor....\n";}

        //Other methods
        void WagTail() const {cout<<"Tail wagging\n";}
        void BegForFood() const {cout<<"Beggin for food...\n";}
        void Speak() const {cout<<"Woof!\n";}

    private:
        BREED itsBreed;
};

int main()
{
    Mammal bigAnimal;
    Dog Solobino;
    bigAnimal.Speak();
    Solobino.Speak();

    return 0;
}


