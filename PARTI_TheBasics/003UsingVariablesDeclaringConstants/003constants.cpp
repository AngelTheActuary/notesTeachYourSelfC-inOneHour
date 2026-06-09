/*
Defining Constants with #define
Because a number of existing programs use the preprocessor #define directive, it is
important for you to understand how it has been used. To define a constant in this obso-
lete manner, you would enter this:
#define studentsPerClass 15
Note that studentsPerClass is of no particular type (int, char, and so on). The pre-
processor does a simple text substitution. In this case, every time the preprocessor sees
the word studentsPerClass, it puts in the text 15.
Because the preprocessor runs before the compiler, your compiler never sees your con-
stant; it sees the number 15.

#define PI 3.1416;
*/

/*
Defining Constants with const
Although #define works, a much better way exists to define constants in C++:
const unsigned short int studentsPerClass = 15;
This example also declares a symbolic constant named studentsPerClass, but this time
studentsPerClass is typed as an unsigned short int

This method of declaring constants has several advantages in making your code easier to
maintain and in preventing bugs. The biggest difference is that this constant has a type,
and the compiler can enforce that it is used according to its type.
*/

#include<iostream>
using namespace std;

const float PI = 3.1416;

int main() {
    float areaCircle, perimeterCircle, ratio;
    cout<<"Enter the ratio of ther circle: ";
    cin>>ratio;
    areaCircle=PI*ratio*ratio;
    perimeterCircle=2*PI*ratio;
    cout<<"\nAREA = "<<areaCircle<<"\n";
    cout<<"\nPERIMETER = "<<perimeterCircle<<"\n";
    return 0;
}

