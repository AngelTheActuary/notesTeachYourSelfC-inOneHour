#include<iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    cout<<"Please enter a string for case-conversion: "<<endl;
    cout<<"> ";

    string strInput;
    getline(cin, strInput);
    cout<<endl;

    transform(
        strInput.begin(), strInput.end(), strInput.begin(),
        [](unsigned char c) {return static_cast<char>(tolower(c));}
    );

    cout<<"The string converted to upper case is: "<<endl;
    cout<<strInput<<endl<<endl;

    transform(
        strInput.begin(),strInput.end(),strInput.begin(),
        [](unsigned char c) {return static_cast<char>(tolower(c));}
    );

    cout<<"The string converted to lower case is: "<<endl;
    cout<<strInput<<endl<<endl;

    return 0;
}
