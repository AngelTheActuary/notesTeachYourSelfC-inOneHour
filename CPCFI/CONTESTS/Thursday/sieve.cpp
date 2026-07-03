#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        bool encontre=false;

        for(int i=0; i<n; i++) {
            int x;
            cin>>x;
            if(x==67) {
                encontre=true;
            }
        }

        if(encontre) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
