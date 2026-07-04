#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0) {
        int n;
        cin>>n;

        long long suma=0;
        long long a1=0, a2=0;

        for(int i=1; i<=n; i++) {
            long long x;
            cin>>x;
            if(i==1) {
                a1=x;
            } else if(i==2) {
                a2=x;
            } else {
                //de la carta 3 en adelante tomo soloo las positivas
                if(x>0) {
                    suma+=x;
                }
            }
        }

        long long mejorTope=0;
        if(n>=1&&a1>mejorTope) {
            mejorTope=a1;
        }
        if(n>=2&&a1+a2>mejorTope) {
            mejorTope=a1+a2;
        }

        cout<<suma+mejorTope<<endl;
        t=t-1;

    }

    return 0;
}
