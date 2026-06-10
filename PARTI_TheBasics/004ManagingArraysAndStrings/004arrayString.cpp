/*
char Greeting[] =
{ ‘H’, ‘e’, ‘l’, ‘l’, ‘o’, ‘ ‘, ‘W’,’o’,’r’,’l’,’d’,’\0’ };

char Greeting[] = “Hello World”;

Cada caracter ocupa 1byte de memoria
*/

#include<iostream>
using namespace std;

int main() {
    char Greeting[] = "Hello World";
    for(int i=0; i<11; i++) {
        cout<<Greeting[i];
    }
    cout<<endl;
    /*
    You should note two things about this syntax:
    - Intead of single-quoted characters separated by commas and surrounded by braces,
      you have a double-quoted C-style string, no commas, and no braces.
    - You don´t need to add the null character because the compiler adds it for you.
    */

    char buffer[80]={'\0'};
    cout<<"Enter the string: ";
    //cin>>buffer; Se corta en la línea.
    //cin>>buffer;
    cin.getline(buffer,80);
    cout<<"Here's the buffer: "<<buffer<<"\n";
    return 0;
}
