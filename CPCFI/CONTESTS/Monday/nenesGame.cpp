#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t>0) {
        int k,q;
        cin>>k;
        cin>>q;

        int primero;
        cin>>primero;

        //lectiura de la secyuencia
        for(int i=1; i<k; i++) {
            int basura;
            cin>>basura;
        }

        for(int i=0; i<q;i++) {
            int n;
            cin>>n;
            if(n<primero-1) {
                cout<<n<<" ";
            } else {
                cout<<primero-1<<" ";
            }
        }

        cout<<"\n";

        t=t-1;

    }

    return 0;
}
