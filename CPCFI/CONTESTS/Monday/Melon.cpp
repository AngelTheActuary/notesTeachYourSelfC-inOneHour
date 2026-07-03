#include<iostream>
using namespace std;

int main()
{
    int w;
    cin>>w;

    //Prueba de todas las formas a partir de la sandía.
    int se_puede=0;

    for(int parte1=1; parte1<w; parte1++) {
        int parte2=w-parte1;
        //Revisar si las dos partes son pares
        if(parte1%2==0 && parte2%2==0) {
            se_puede=1;
        }
    }

    if(se_puede==1) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}