#include<iostream>
using namespace std;


//Fuicnón para 5revisar si desde una pla de tamaño n se puedfe llegar a m
bool puedo(int n, int m)
{
    if(n==m) {
        return true;
    }

    if(n%3!=0) {
        return false;
    }

    if(puedo(n/3,m)) {
        return true;
    }
    if(puedo(2*n/3, m)) {
        return true;
    }

    return false;
}

int main()
{
    int t;
    cin>>t;

    while(t>0) {
        int n,m;
        cin>>n;
        cin>>m;
        if(puedo(n,m)) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
        t=t-1;
    }

    return 0;
}
