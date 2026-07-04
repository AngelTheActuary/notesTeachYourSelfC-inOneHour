#include<iostream>
using namespace std;

int main()
{   
    long long n,m;
    cin>>n;
    cin>>m;

    long long clicks=0;

    while(m>n) {
        if(m%2==0) {
            m=m/2;
        } else {
            m++;
        }
        clicks++;

        
    }
    clicks=clicks+(n-m);
    cout<<clicks<<endl;
    return 0;
}