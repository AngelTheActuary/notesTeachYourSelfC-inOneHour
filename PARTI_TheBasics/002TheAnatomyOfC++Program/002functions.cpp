/*
# The preprocessor each time you start you compiler, the preprocessor is run first.

The statement #include<iostream> causes the iostream file to be added to your source code.
This is required if you use cout and its related functions.

The program starts with the simplest use of cout by printing a string; that is,
a series of characters. The symbol \n is a special formatting character.

It tells cout to print a newline character to the screen; it is pronounced
"slash-n" or "new line".

Three values are passed to cout in this line:
std::cout<<"Here is 5: "<<5<<"\n";

*/ 

#include<iostream>

void DemonstrationFunction(){
    std::cout<<"IN Demonstration Funnction\n";
}

int Add(int first, int second) {
    std::cout<<"Add() received "<<first<<" and "<<second<<"\n";

    return (first + second);
}

int main() {
    std::cout<<"In main\n";
    DemonstrationFunction();
    std::cout<<"Back in Main\n";

    int a,b,c;
    std::cout<<"Enter two numbers: \n";
    std::cin>>a;
    std::cin>>b;
    c=Add(a,b);
    std::cout<<"Result = "<<c<<"\n";
    return 0;
}









