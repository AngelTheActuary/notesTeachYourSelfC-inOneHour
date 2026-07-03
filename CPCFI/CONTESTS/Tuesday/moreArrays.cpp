#include<iostream>
#include<vector>

using namespace std;

void resolver()
{
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    if(n==0) {
        cout<<0<<endl;
        return;
    }

    int capacidad_arreglos=1;
    int ultimo_guardado=a[0];

    for(int i=1; i<n; i++) {
        if(a[i]>ultimo_guardado+1) {
            capacidad_arreglos++;
            ultimo_guardado=a[i];
        }
    }

    cout<<capacidad_arreglos<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        resolver();
    }
    return 0;
}
