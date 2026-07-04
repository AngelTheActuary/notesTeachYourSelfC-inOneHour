#include<iostream>
using namespace std;

int padre[105];
int x[105];
int y[105];

int encontrar(int a) {
    while(padre[a]!=a) {
        padre[a]=padre[padre[a]];
        a=padre[a];
    }
    return a;
}

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>x[i];
        cin>>y[i];
        padre[i]=i;
    }

    for(int i=0; i<n; i++) {
        for(int j=i+1;j<n;j++){
            if(x[i]==x[j] || y[i]==y[j]) {
                int ri=encontrar(i);
                int rj=encontrar(j);
                if(ri!=rj) {
                    padre[rj]=ri;
                }
            }
        }
    }

    int componentes=0;
    for(int i=0; i<n; i++) {
        if(encontrar(i)==i) {
            componentes++;
        }
    }

    cout<<componentes-1<<endl;

    return 0;
}




