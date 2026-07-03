#include<iostream>
#include<algorithm>

using namespace std;

int a[200005];
int pares[200005];
int impares[200005];

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        int cantPares=0;
        int cantImpares=0;

        for(int i=0; i<n; i++) {
            cin>>a[i];
            if(a[i]%2==0) {
                pares[cantPares]=a[i];
                cantPares++;
            } else {
                impares[cantImpares]=a[i];
                cantImpares++;
            }
        }

        sort(pares,pares+cantPares);
        sort(impares,impares+cantImpares);

        int ip=0;
        int ii=0;

        bool ordenado=true;
        long long anterior=0;

        for(int i=0; i<n;i++) {
            long long actual;
            if(a[i]%2==0) {
                actual=pares[ip];
                ip++;
            } else {
                actual=impares[ii];
                ii++;
            }

            if(actual<anterior) {
                ordenado=false;
            }
            anterior=actual;
        }

        if(ordenado) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}


