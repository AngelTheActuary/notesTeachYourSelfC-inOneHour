/*
Demonstrates declaration of constructors and destructor for the Cat Class
Programmer created default constructor
*/
#include<iostream>
using namespace std;

//Declaration class
class Cat
{
    public:
        Cat(int initialAge);
        ~Cat();
        int GetAge();
        void SetAge(int age);
        void Meow();
    private:
        int itsAge;
};

//Constructor of Cat
Cat::Cat(int initialAge)
{
    itsAge=initialAge;
}

//Destructor, takes no actiuon
Cat::~Cat()
{
    //
}

//Get Age, Public accessor function
//returns value of itsAge member
int Cat::GetAge()
{
    return itsAge;
}

/*
Definition of SetAge, public
accessor function
*/
void Cat::SetAge(int age)
{
    itsAge=age;
}


/*
Definition of Meow method
returns void
parameters: None
action: Prints "meoe to screen"
*/

void Cat::Meow()
{
    cout<<"Meow\n";
}

/*
Create a cat, set its age, have it
meow, tell us its age, then meow again.
*/

int main()
{
    Cat Michi(5);
    Michi.Meow();
    cout<<"Michi is a cat who is "<<Michi.GetAge()<<" years old\n";
    Michi.Meow();
    Michi.SetAge(7);
    cout<<"Michi is "<<Michi.GetAge()<<" years old\n";

    return 0;
}









