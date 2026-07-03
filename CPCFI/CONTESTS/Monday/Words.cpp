#include<iostream>
#include <iterator>
#include<string>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n;i++) {
        string palabra;
        cin>>palabra;

        int largo=palabra.length();

        if(largo>10) {
            //Primera letra+número de letras de en medio+última letra
            cout<<palabra[0]<<largo-2<<palabra[largo-1]<<"\n"; 
        }else {
            cout<<palabra<<endl;
        }
    }

    return 0;
}




