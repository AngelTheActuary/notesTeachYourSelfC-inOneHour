#include<iostream>
using namespace std;

int padre[200005];
int a[200005];
long long vertices[200005];
long long aristas[200005];

int encontrar(int x) {
    while(padre[x]!=x) {
        padre[x]=padre[padre[x]];
        x=padre[x];
    }
    return x;
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        for(int i=1; i<=n; i++) {
            cin>>a[i];
            padre[i]=i;
            vertices[i]=1;
            aristas[i]=0;
        }

        for(int i=1; i<=n; i++) {
            if(a[a[i]]==i&&i>a[i]) {
                continue;
            }
            int rx=encontrar(i);
            int ry=encontrar(a[i]);

            if(rx==ry) {
                aristas[rx]++;
            } else {
                padre[ry]=rx;
                vertices[rx]+=vertices[ry];
                aristas[rx]+=aristas[ry]+1;
            }
        }

        int ciclos=0;
        int cadenas=0;
        for(int i=1; i<=n; i++) {
            if(encontrar(i)==i) {
                if(aristas[i]==vertices[i]) {
                    ciclos++;
                } else {
                    cadenas++;
                }
            }
        }

        int maximo=ciclos+cadenas;
        int minimo=ciclos;
        if(cadenas>0) {
            minimo++;
        }

        cout<<minimo<<" "<<maximo<<endl;

    }
    return 0;
}
