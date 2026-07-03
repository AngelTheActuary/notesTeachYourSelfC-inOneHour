#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t>0) {
        int n, c;
        cin>>n;
        cin>>c;

        int cont[101]; //Contador de planetas por orbita
        for(int i=0; i<=100; i++) {
            cont[i]=0;
        }
        for(int i=0; i<n; i++) {
            int a;
            cin>>a;
            cont[a]=cont[a]+1;
        }
        int total=0;
        for(int i=1; i<=100; i++) {
            if(cont[i]>0) {
                //
                if(cont[i]<c) {
                    total=total+cont[i];
                } else {
                    total=total+c;
                }
            }
        }

        cout<<total<<endl;
        t=t-1;
    }

    return 0;
}
