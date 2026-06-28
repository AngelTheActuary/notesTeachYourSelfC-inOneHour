/*
Demonstrates declaration of a class and definition of an object of the class
pag 302
*/

#include<iostream>
using namespace std;

class Cat
{
    public:
        int itsAge;
        int itsWeight;
};

int main()
{
    Cat Urus;
    Urus.itsAge=5;
    cout<<"Urus is a cat who is ";
    cout<<Urus.itsAge<<" years old"<<endl;
    return 0;
}

