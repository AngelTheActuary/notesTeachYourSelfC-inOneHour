#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int contador=0;
    for(int i=0; i<n;i++) {
        int p;
        int v;
        int t;
        cin>>p;
        cin>>v;
        cin>>t;

        //Si al menos doos están seguros, se resuelve el problema
        if(p+v+t>=2) {
            contador++;
        }
    }

    cout<<contador<<"\n";

    return 0;
}
