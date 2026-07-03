#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;

        int contador=0;

        for(long long y=x+1; y<=x+100; y++) {
            long long copia=y;
            long long sumaDigitos=0;
            while(copia>0) {
                sumaDigitos=sumaDigitos + copia%10;
                copia=copia/10;
            }
            if(y-sumaDigitos==x) {
                contador++;
            }
        }
        cout<<contador<<endl;
    }
    return 0;
}