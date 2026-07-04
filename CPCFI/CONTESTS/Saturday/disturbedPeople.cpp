#include<iostream>
using namespace std;

int a[105];

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    int k=0;

    for(int i=1; i+1<n; i++) {
        if(a[i-1]==1&&a[i]==0&&a[i+1]==1) {
            a[i+1]=0;
            k++;
        }
    }

    cout<<k<<endl;

    return 0;
}