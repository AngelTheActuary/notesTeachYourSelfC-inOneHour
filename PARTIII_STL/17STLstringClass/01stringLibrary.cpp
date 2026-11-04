/* 487
STL String Instantiation and Copy Tecniques
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
    const char* pszConstString = "Hello String!";
    cout<<"Constant string is: "<<pszConstString<<endl;

    string strFromConst (pszConstString);
    cout<<"strFromConst is: "<<strFromConst<<endl;

    string str2 ("Hello String!");
    string str2Copy(str2);
    cout<<"str2Copy is: "<<str2Copy<<endl;

    //Initialize a string the first 5 characters of another
    string strPartialCopy (pszConstString,5);
    cout<<"strPartialCopy is: "<<strPartialCopy<<endl;

    //Initialize a string object to contain 10 a s
    string strRepeatChars(10,'a');
    cout<<"strRepeatChars is: "<<strRepeatChars<<endl;

    return 0;
}
