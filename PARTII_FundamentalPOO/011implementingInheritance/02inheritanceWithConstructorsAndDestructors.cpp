//pag. 336

#include<iostream>
using namespace std;
enum BREED{GOLDEN,CAIRN,DANDIE,SHETLAND,DOBERMAN,LAB};

class Mammal
{
    public:
        //Constructors
        Mammal();
        ~Mammal();
        //Accessors
        int GetAge() const {return itsAge;}
        void SetAge(int age) {itsAge=age;}
        int GetWeight() const {return itsWeight;}
        void SetWeight(int weight) {itsWeight=weight;}
        //Other methods
        void Speak() const{cout<<"Mammal sound!\n";}
        void Sleep() const{cout<<"shh. I'm sleeping.\n";}

    protected:
        int itsAge;
        int itsWeight;
};

class Dog:public Mammal
{
    public:
        //Constructors
        Dog();
        ~Dog();

        //Accessors
        BREED GetBreed() const {return itsBreed;}
        void SetBreed(BREED breed){itsBreed=breed;}

        //Other methods
        void WagTail() const {cout<<"Tail wagging...\n";}
        void BegForFood() const {cout<<"Bagging for food...\n";}

    private:
        BREED itsBreed;
};

Mammal::Mammal():
itsAge(3),
itsWeight(5)
{
    cout<<"Mammal destrcutor..."<<endl;
}

Mammal::~Mammal()
{
    cout<<"Mammal destructor..."<<endl;
}

Dog::Dog():
itsBreed(GOLDEN)
{
    cout<<"Dog Constructor..."<<endl;
}

Dog::~Dog()
{
    cout<<"Dog destructor..."<<endl;
}

int main()
{
    Dog Bardock;
    Bardock.Speak();
    Bardock.WagTail();

    cout<<"Bardock is "<<Bardock.GetAge()<<" years old"<<endl;

    return 0;
}









