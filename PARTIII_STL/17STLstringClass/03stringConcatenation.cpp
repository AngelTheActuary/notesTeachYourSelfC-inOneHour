/* 490
STRING CONCATENATION

*/

#include<string>
#include<iostream>
using namespace std;

int main() {
    string strSample1 ("Hello");
    string strSample2("String!");

    //HelloString!
    strSample1 += strSample2;
    cout<<strSample1<<endl<<endl;

    //HelloString! Fun is not needing to use pointers!
    string strSample3(" Fun is not needing to use pointers!");
    strSample1.append(strSample3);
    cout<<strSample1<<endl<<endl;

    //HelloString! Fun is not needing to use pointers!YOu however still can!
    const char* pszConstString = "YOu however still can!";
    strSample1.append(pszConstString);
    cout<<strSample1<<endl;

    return 0;
}