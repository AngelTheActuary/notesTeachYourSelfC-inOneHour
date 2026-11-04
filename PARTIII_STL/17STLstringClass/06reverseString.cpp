/*
STRING REVERSAL

Sometimes it is important to reverse the contents of a string.
Say you want to determine wheter the string input by the user is a plindrome.
STRL strings can be reversed easily using the std::reverse algorithm, as seen

*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string strSample("Hello String! We will reverse you!");
    cout<<"The original sample string is: "<<endl;
    cout<<strSample<<endl<<endl;

    reverse(strSample.begin(), strSample.end());

    cout<<"After applying the reverse algorithm: "<<endl;
    cout<<strSample<<endl;

    return 0;
}

