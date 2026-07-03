#include<iostream>
using namespace std;

int main()
{
    int n, m;

    cin>>n;
    cin>>m;

    int mejor=1;
    int maxRondas=0;

    for(int i=1; i<=n; i++) {
        int a;
        cin>>a;

        int rondas=a/m;
        if(a%m!=0) {
            rondas++;
        }

        if(rondas>=maxRondas) {
            maxRondas=rondas;
            mejor=i;
        }
    }

    cout<<mejor<<endl;

    return 0;
}
