/*
DECLARING A CLASS.

Declaring a class tells the compiler about the class.
To declare a class, use the class keyword followed by the class name,
an opening brace, and then a list of the data members and methods of that class.
End the declaration with a closing brace and a semicolon.

Here's the declaration of a class Cat
*/

class Cat
{
    unsigned int itsAge;
    unsigned int itsWeight;
    void Meow();
};

/*
DEFINING AN OBJECT.
After you declare a class, you can then use it as a new type to declare variables
of that type.
You declare an object of your new type the same as you declare
an integer variable:
*/

unsigned int GrossWeight;
Cat Urus;

//Accesing Class Members

Urus.itsWeight=50;
Urus.Meow();


