#include<iostream>
using namespace std;

int p[1005];
bool agujero[1005];

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++) {
        cin>>p[i];
    }

    for(int a=1; a<=n; a++) {
        //Limpio los gafetes para esta simulacio´on
        for (int i=1; i<=n; i++) {
            agujero[i]=false;
        }

        int actual=a;
        while(agujero[actual]==false) {
            agujero[actual]=true;
            actual=p[actual];
        }

        cout<<actual;

        if(a<n) {
            cout<<" ";
        }

    }
    cout<<endl;
    return 0;
}
