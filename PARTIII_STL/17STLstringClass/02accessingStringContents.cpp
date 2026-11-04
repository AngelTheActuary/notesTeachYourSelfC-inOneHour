/* 488
ACCESSING A STRING AND ITS CONTENTS
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
    //Sample String 
    string strSTLString ("Hello String");
    //Access the contents of the string using array syntax
    cout<<"Displaying characters using array-syntax: "<<endl;
    for(size_t nCharCounter = 0; nCharCounter < strSTLString.length(); nCharCounter++) {
        cout<<"Character ["<<nCharCounter<<"] is: ";
        cout<<strSTLString[nCharCounter]<<endl;
    }
    cout<<endl;

    //Acces the contnets of a string using iterators
    cout<<"Display charactres using iterators: "<<endl;
    int nCharOffset=0;
    string::const_iterator iCharacterLocator;
    for(iCharacterLocator = strSTLString.begin(); iCharacterLocator != strSTLString.end(); iCharacterLocator++) {
        cout<<*iCharacterLocator<<endl;
    }
    cout<<endl;

    //Access the contents of a string as a C-style string
    cout<<"The char* representation of the string is: ";
    cout<<strSTLString.c_str()<<endl;

    return 0;
}
