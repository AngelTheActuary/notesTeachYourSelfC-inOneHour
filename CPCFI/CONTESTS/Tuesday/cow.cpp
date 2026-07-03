#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t>0) {
        int n,d;
        cin>>n;
        cin>>d;

        int a[105];
        for(int i=1; i<=n; i++) {
            cin>>a[i];
        }

        int total=a[1];

        //Recorrer la pila s de la mṕas cercana a la más lejhana
        for(int i=2; i<=n; i++) {
            int costo=i-1;

            for(int j=0; j<a[i]; j++) {
                if(d>=costo) {
                    d=d-costo;
                    total++;
                } else  {
                    break;
                }
            }
        }

        cout<<total<<endl;
        t=t-1;
    }

    

    return 0;
}
