//IMPLEMENTING CLASS METHOD.

//Demonstrates declaration of a class and definition of class methods

#include<iostream>

using namespace std;

//Begin declaration oof the class
class Cat
{
    public:
        int GetAge();
        void SetAge(int age);
        void Meow();
    private:
        int itsAge;
};

int Cat::GetAge()
{
    return itsAge;
}

/*
Definition of SetAge, public
Accessor function
sets itsAge member
*/

void Cat::SetAge(int age)
{
    //Set member variable itsAge too value passed in by parameter age
    itsAge=age;
}

//Definition of Meow method
//returns: void
//parameters: None
//action: Prints "meow" to screen
void Cat::Meow()
{
    cout<<"Meow"<<endl;
}

//Create a cat, set its age, have it
//meow, tell us its age, then meow again.

int main()
{
    Cat Urus;
    Urus.SetAge(5);
    Urus.Meow();
    cout<<"Urus is a cat who is "<<Urus.GetAge()<<" years old"<<endl;
    Urus.Meow();
    return 0;
}










