/*
Programming Loops
Many programming problems are solved by repeatedly acting on the same data. Two
ways to do this are recursion (discussed in Lesson 6, “Organizing Code with Functions”)
and iteration. Iteration means doing the same thing again and again. The principal
method of iteration is the loop.

The Roots of Looping: goto
In the primitive days of early computer science, programs were nasty, brutish, and short.
Loops consisted of a label, some statements, and a jump that went to the label.
In C++, a label is just a name followed by a colon (:). The label is placed to the left of a
legal C++ statement. A jump is accomplished by writing goto followed by the name of a
label. Listing 7.1 illustrates this primitive way of looping.

*/

//Looping with goto

#include<iostream>

using namespace std;

int main() {
    int counter=0;
    loop:
        counter++; //top of the loop
        cout<<"Counter: "<<counter<<endl;
        if(counter<5) //test the value
            goto loop;
        cout<<"Complete. Counter: "<<counter<<endl;
    return 0;
}

