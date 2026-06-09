/*

TABLE 3.1. Variable Types.

TYPE. -> SIZE -> VALUES

bool -> 1byte -> True or False
unsigned short int -> 2bytes -> 0 to 65,535
short int -> 2bytes -> -32,768 to 32,767
unsigned long int -> 4bytes -> 0 to 4,294,967,295
long int -> 4 bytes -> -2147,483,648 to 2,147,483,647
int (16 bit) -> 2 bytes -> -32,768 to 32,767
int (32 bit) -> 4 bytes -> -2,147,483,648 to 2,147,483,647
unsigned int (16 bit) -> 2 bytes -> 
char -> 1 byte -> 256 character values
float -> 4 bytes -> 1.2-38 to 3.4e38
double -> 8 bytes -> 2.2e-308 to 1.8e308

C++ is case sensitive. In other words, uppercase and lowercase letters are considered to
be different. A variable named age is different from Age, which is different from AGE.

*/

#include<iostream>

int main() {

    unsigned short x=10;
    unsigned short y=11;

    unsigned short z=x*y;

    std::cout<<"Z= "<<z<<"\n";

    //Operator Size of
    std::cout<<"The size of an int is: \t\t: "<<sizeof(int)<<" bytes.\n";
    std::cout<<"The size of an short is: \t\t: "<<sizeof(short)<<" bytes.\n";
    std::cout<<"The size of an long is: \t\t: "<<sizeof(long)<<" bytes.\n";
    std::cout<<"The size of an char is: \t\t: "<<sizeof(char)<<" bytes.\n";
    std::cout<<"The size of an float is: \t\t: "<<sizeof(float)<<" bytes.\n";
    std::cout<<"The size of an double is: \t\t: "<<sizeof(double)<<" bytes.\n";
    std::cout<<"The size of an bool is: \t\t: "<<sizeof(bool)<<" bytes.\n";

    /*
OUTSIDE:

Z= 110
The size of an int is: 		: 4 bytes.
The size of an short is: 		: 2 bytes.
The size of an long is: 		: 8 bytes.
The size of an char is: 		: 1 bytes.
The size of an float is: 		: 4 bytes.
The size of an double is: 		: 8 bytes.
The size of an bool is: 		: 1 bytes.

    */

    s

    return 0;
}





