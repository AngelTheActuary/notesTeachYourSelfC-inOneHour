#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t>0){
        int n;
        cin>>n;

        int inicio=1;

        if(n%2!=0) {
            cout<<1<<" "<<1<<" "<<2<<" "<<1<<" "<<2<<" "<<3<<" "<<" ";
            cout << 1 << " " << 3 << " " << 2 << " " << 2 << " " << 3 << " " << 3 << " ";
            inicio=4;
        }

        for(int a=inicio; a<=n; a=a+2) {
            int b=a+1;
            cout << b << " " << a << " " << a << " " << b << " ";
            cout << a << " " << b << " " << b << " " << a << " ";
        }

        cout<<endl;

        t=t-1;
    }

    return 0;
}

