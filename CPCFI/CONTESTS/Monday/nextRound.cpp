#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    cin>>k;

    //Máximo 50m particiones
    int puntajes[50];

    //Lectira de puntajes uno por uno
    for(int i=0; i<n; i++) {
        cin>>puntajes[i];
    }

    //ERl puntaje del lugar k es pyntajes[k-1] porque el arreglo empieza en 0
    int puntajeCorte=puntajes[k-1];

    int cuentan=0;

    //Revisar particiones poor participante
    for(int i=0; i<n; i++) {
        if(puntajes[i]>=puntajeCorte&&puntajes[i]>0) {
            cuentan++;
        }
    }

    cout<<cuentan<<endl;

    return 0;
}

