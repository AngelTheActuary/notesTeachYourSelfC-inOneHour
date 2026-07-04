#include<iostream>
#include<algorithm>
using namespace std;

int a[200005];


int main()
{
    int t;
    cin>>t;
    while (t>0) {
        int n;
        cin>>n;
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        //ordenar para que los igualke queden jhuntos
        sort(a,a+n);

        //buscar el bloque más largo de numeros iguale
        int f=1;
        int actual=1;
        for(int i=1; i<n; i++) {
            if(a[i]==a[i-1]) {
                actual=actual+1;
            } else {
                actual=1;
            }

            if(actual>f) {
                f=actual;
            }
        }

        //Formulka
        int respuesta=2*f-n;
        if(respuesta<0) {
            respuesta=0;
        }
        if(respuesta==0&&n%2==1) {
            respuesta=1;
        }

        cout<<respuesta<<endl;
        t=t-1;

    }
    return 0;
}
