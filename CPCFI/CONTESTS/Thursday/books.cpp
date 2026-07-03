#include<iostream>
using namespace std;

int a[100005];

int main()
{
    int n;
    long long t;
    cin>>n;
    cin>>t;

    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    int izquierda=0;
    long long suma=0;
    int mejor=0;

    for(int derecha=0; derecha<n; derecha++) {
        suma=suma+a[derecha];

        while(suma>t) {
            suma=suma-a[izquierda];
            izquierda++;
        }

        //a
        int cantidad=derecha-izquierda+1;
        if(cantidad>mejor) {
            mejor=cantidad;
        }
    }
    cout<<mejor<<endl;

    return 0;
}
