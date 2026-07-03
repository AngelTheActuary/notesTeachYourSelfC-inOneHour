#include<iostream>
using namespace std;

int main()
{
    int q;
    cin>>q;

    while(q>0) {
        int n;
        cin>>n;

        long long suma=0;
        for(int i=0; i<n; i++) {
            long long x;
            cin>>x;
            if(x<=2048) {
                suma+=x;
            }
        }

        if(suma>=2048) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
        q=q-1;

    }
    return 0;
}
