/*
DEREFENCING WITH THE INDIRECTION OPERATOR.

The indirection operator(*) is also called the derefernce operator.
When a pointer is derefenced, the value at the address stored by the pointer is retrieved.

Normal variables provide direct access to their own values.
If you create a new variable of type unsigned short int called yourAge, and you want to assign the value in howOld to that new variable, you write.

unsigned short int yourAge;
yourAge=howOld;

A pointer provides indirect access to the value of the variable whose address it stores.
To assign the value in howOld to the new variable yourAge by way of the pointer pAge, you write
unsigned short int yourAge;
yourAge=*pAge;

The indirection operator (*) in front of the pointer variable pAge means "the value stored at".
This assignment says, "Take the value stored at the address in pAge and assign it to yourAge".
If you didn't include the indirection operator, as in the following line:

yourAge=pAge; //bad!!

you would be attempting to assign the value in pAge, a memory address, to yourAge.
Your compiler would most likely give you a warning than you are making a mistake.

POINTERS AND ARRAY NAMES

In C++, an array name is a constant pointer to the first element of the array. Therefore, in the declaration.

int Numbers[5];

Number is a pointer to &Numbers[0], which is the address of the first element of the array Numbers.

It is legal to use array names as constant pointers and vice versa.
Therefore, Numbers + 4 is a legitimate way of accessing the integer at Numbers [4].

The compiler does all the arithmetic when you add to, increment, and decrement pointers.
The address accessed when you write Numbers + 4 isn't four bytes past the address of Numbers,
it is four objects; that is, four integers. Because an integer is typically four bytes long,
Numbers+4 us 16 byttes past the start of the array. This relationship between pointers and
arrays will be ilustrated in this code: 

*/

#include<iostream>
const int ARRAY_LENGTH=5;

int main() {
    using namespace std;

    //An array of 5 integers initialized to 5 values
    int Numbers[ARRAY_LENGTH]={0,100,200,300,400};

    //pInt points to the first element
    const int *pInt=Numbers;

    cout<<"Using a pointer to print the contents of the array: "<<endl;

    for(int nIndex=0; nIndex<ARRAY_LENGTH; ++ nIndex) {
        cout<<"Element ["<<nIndex<<"] = "<<*(pInt + nIndex)<<endl;
    }

    return 0;
}



