#include "Cat.h"

//Constructor
Cat::Cat(int initialAge)
{
    itsAge=initialAge;
}

Cat::~Cat()
{
    //Destructor, takes no action
}

/*
Create a cat, set its age, have iut
meow, tell us iots age, then meow again.
*/

int main()
{
    Cat Michi(5);
    Michi.Meow();
    cout<<"Michi is a cat who is "<<Michi.GetAge()<<" years old.\n";
    Michi.Meow();
    Michi.SetAge(7);
    cout<<"Now Michi is "<<Michi.GetAge()<<" yearts old\n";
    return 0;
}

