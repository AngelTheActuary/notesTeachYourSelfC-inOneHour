#include<iostream>
using namespace std;

int jefe[2005];

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++) {
        cin>>jefe[i];
    }
    
    int respuesta=0;

    for(int i=1;i<=n; i++) {
        int profundidad=1;
        int actual=i;

        while(jefe[actual]!=-1) {
            actual=jefe[actual];
            profundidad++;
        }

        if(profundidad>respuesta) {
            respuesta=profundidad;
        }
    }

    cout<<respuesta<<endl;
    return 0;
}
