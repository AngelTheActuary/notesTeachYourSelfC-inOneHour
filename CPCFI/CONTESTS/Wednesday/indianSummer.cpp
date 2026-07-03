#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string hojas[100];
    int cuantas=0;

    for(int i=0; i<n; i++) {
        string especie, color;
        cin>>especie;
        cin>>color;

        string hoja=especie+" "+color;

        //Revisar si ya se tiene
        bool repetida=false;
        for(int j=0; j<cuantas; j++) {
            if(hojas[j]==hoja) {
                repetida=true;
            }
        }

        //Si no está repetida se agrega
        if(repetida==false) {
            hojas[cuantas]=hoja;
            cuantas++;
        }
    }
    cout<<cuantas<<endl;
    return 0;
}