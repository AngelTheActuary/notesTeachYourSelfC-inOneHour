#include<iostream>
using namespace std;

int w[200005];

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        for(int i=0; i<n; i++) {
            cin>>w[i];
        }

        int izquierda=0;
        int derecha=n-1;
        long long sumaAlice=0;
        long long sumaBob=0;
        int mejorRespuesta=0;

        while(izquierda<=derecha) {
            if(sumaAlice<sumaBob) {
                sumaAlice=sumaAlice+w[izquierda];
                izquierda++;
            } else if(sumaBob<sumaAlice) {
                sumaBob=sumaBob+w[derecha];
                derecha--;
            } else {
                mejorRespuesta=izquierda+(n-1-derecha);
                sumaAlice=sumaAlice+w[izquierda];
                izquierda++;
                if(izquierda<=derecha) {
                    sumaBob=sumaBob+w[derecha];
                    derecha--;
                }
            }
        }

        if(sumaAlice==sumaBob) {
            mejorRespuesta=izquierda+(n-1-derecha);
        }
        cout<<mejorRespuesta<<endl;

    }

    return 0;
}