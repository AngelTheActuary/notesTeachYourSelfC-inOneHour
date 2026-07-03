#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;

    char pila[100000];
    int tope=0;

    for(int i=0;i<s.size();i++) {
        if(tope>0&&pila[tope-1]==s[i]) {
            tope=tope-1;
        } else {
            pila[tope]=s[i];
            tope++;
        }
    }

    if(tope==0) {
        cout<<"Yes\n";
    } else {
        cout<<"No\n";
    }

    return 0;
}