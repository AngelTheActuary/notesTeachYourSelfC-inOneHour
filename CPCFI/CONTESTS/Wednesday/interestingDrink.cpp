#include<iostream>
using namespace std;

int cuantos[100001];
long long acumulado[100001];

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        int precio;
        cin>>precio;
        cuantos[precio]=cuantos[precio]+1;
    }

    acumulado[0]=0;
    for(int p=1;p<=100000;p++) {
        acumulado[p]=acumulado[p-1]+cuantos[p];
    }

    int q;
    cin>>q;
    for(int i=0; i<q; i++) {
        long long dinero;
        cin>>dinero;

        //Si tiene más dinero que el precio máximo posible, le alcanzan todas
        if(dinero>100000) {
            dinero=100000;
        }

        cout<<acumulado[dinero]<<"\n";
    }

    return 0;
}

