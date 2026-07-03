#include<iostream>
#include <ostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int numeros[100];
    int pares=0;
    int impares=0;

    //Organizar pares e impares
    for(int i=0; i<n;i++) {
        cin>>numeros[i];
        if(numeros[i]%2==0) {
            pares++;
        } else {
            impares++;
        }
    }

    //Si solo hay un par, se busca, si solo hay un impar se bucará el impar
    if(pares==1) {
        for(int i=0; i<n; i++) {
            if(numeros[i]%2==0) {
                cout<<i+1<<endl;
            }
        }
    } else {
        for(int i=0; i<n; i++) {
            if(numeros[i]%2 !=0) {
                cout<<i+1<<endl;
            }
        }
    }

    return 0;
}
