/*
STORING A VARIABLE'S ADDRESS IN A POINTER.

Every variable has an address. Even without knowing the specific address,
you can store a variable's address in a pointer.

Suppose, for example, that howOld is an integer.
To declare a pointer called pAge to hold its address, you write

int *pAge=0;

This declares pAge to be a pointer to an int.
That is, pAge is declared to hold the address of an integer.

Note that pAge is a Variable.
When you declare an integer variable (type int), the computer
sets aside enough memory to hold an integer. 
When you declare a pointer variable such as pAge, the compiler sets 
aside enough memory to hold an address (on most computers, four bytes).
A pointer, and ths pAge, is just a dufferent type of variable.

POINTER NAMES

Because pointers are just another variable, you can use any name that is
legal for other variables. The same naming rules and suggestions apply. Many programmers follow the convention
of naming all pointers with an initial p, as in pAge or pNumber.

In the example,

int *pAge=0;

pAge is initialized to zero. A pointer whose value is zero is called a null pointer.
All pointers, when they are created, should be initialized to something.
If you don't know what you want to assign to the pointer, assign 0.
A pointer that is not initialized is called a wild pointer because you have no idea what it is pointing to
and it could be pointing to anything! Wild pointers are very dangerous.

*/

#include<iostream>
using namespace std;

int main() {
    unsigned short int howOld=50; //make a variable
    unsigned short int * pAge=0; //make a pointer

    cout<<"howOld: "<<&howOld<<endl;
    cout<<"pAge: "<<&pAge<<endl;

    pAge=&howOld; //put howOld's address in pAge.

    cout<<"pAge: "<<&pAge<<endl;

    /*
    The first line creates a variable named howOld-whose type is unsigned short int-
    and initializes it with value 50.
    The second line declares pAge to be a pointer to type unsigned short int and initializes it to zero.
    You know that pAge to be a pointer to type unsigned short int
    and initializes it to zero.
    You know that pAge to be a pointer to type unsigned short int and
    initializes it to zero.
    You know that pAge is a pointer because of the asterisk (*) after the variable type and before the variable name.

    The third and final line assigns the address of hoOld to the pointer pAge.
    You can tell that the address fo howOld is being assigned because of the address-of operator (&).
    If the address-of operator had not been used, the value of howOld would have been assigned.

    That might not have been a valid address.

    At this point, pAge has as its value the address of howOld, in turn, has the value 50.
    YOu could have accomplished this with one fewer step, as in.

    unsigned short int howOld=50; //make a variable
    unsigned short int * pAge=&howOld; //make pointer to howOld

    */

    return 0;
}




