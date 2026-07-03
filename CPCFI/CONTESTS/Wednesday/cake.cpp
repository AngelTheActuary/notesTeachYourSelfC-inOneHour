#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        long long suma=0;
        long long respuesta=4000000000LL;

        for(int i=1; i<=n; i++) {
            long long a;
            cin>>a;
            suma+=a;

            long long promedio=suma/i;

            if(promedio<respuesta) {
                respuesta=promedio;
            }

            cout<<respuesta;

            if(i<n) {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
