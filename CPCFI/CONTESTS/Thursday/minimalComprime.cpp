#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long l,r;
        cin>>l;
        cin>>r;
        if(l==1&&r==1) {
            cout<<1<<endl;
        } else {
            cout<<r-1<<endl;
        }
    }

    return 0;
}