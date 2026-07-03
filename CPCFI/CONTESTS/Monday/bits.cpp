#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int x=0;

    for(int i=0; i<n;i++) {
        string s;
        cin>>s;

        //Si la instrucción tiene un '+' es ++, si no es --
        if(s[0]=='+'||s[1]=='+') {
            x=x+1;
        } else {
            x=x-1;
        }
    }

    cout<<x<<endl;

    return 0;
}

