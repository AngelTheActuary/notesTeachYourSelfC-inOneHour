#include<iostream>
using namespace std;

int cabeza[100005];
int destino[200005];
int siguiente[200005];
int numAristas=0;

int gato[100005];

int pilaVertice[100005];
int pilaPadre[100005];
int pilaRacha[100005];

void agregarArista(int u, int v) {
    destino[numAristas]=v;
    siguiente[numAristas]=cabeza[u];
    cabeza[u]=numAristas;
    numAristas=numAristas+1;
}


int main()
{
    int n,m;
    cin>>n;
    cin>>m;

    for(int i=1;i<=n;i++) {
        cin>>gato[i];
        cabeza[i]=-1;
    }

    for(int e=0; e<n-1; e++) {
        int x,y;
        cin>>x;
        cin>>y;
        agregarArista(x,y);
        agregarArista(y,x);
    }

    int restaurantes=0;

    int tope=0;
    pilaVertice[tope]=1;
    pilaPadre[tope]=0;
    pilaRacha[tope]=gato[1];
    tope=tope+1;

    while(tope>0) {
        tope=tope-1;
        int v=pilaVertice[tope];
        int padre=pilaPadre[tope];
        int racha=pilaRacha[tope];

        if(racha>m) {
            continue;
        }

        int hijos=0;
        for(int e=cabeza[v]; e!=-1; e=siguiente[e]) {
            int w=destino[e];
            if(w!=padre) {
                hijos=hijos+1;
                int rachaHijo;
                if(gato[w]==1) {
                    rachaHijo=racha+1;
                } else {
                    rachaHijo=0;
                }
                pilaVertice[tope]=w;
                pilaPadre[tope]=v;
                pilaRacha[tope]=rachaHijo;
                tope=tope+1;
            }
        }

        if(hijos==0&&v!=1) {
            restaurantes=restaurantes+1;
        }

    }

    cout<<restaurantes<<endl;

    return 0;
}
