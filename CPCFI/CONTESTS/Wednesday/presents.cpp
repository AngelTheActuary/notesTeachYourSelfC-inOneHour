#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int regalo[101];
    int quien[101];

    for(int i=1; i<=n; i++) {
        cin>>regalo[i];
    }

    for(int i=1; i<=n; i++) {
        quien[regalo[i]]=i;
    }

    for(int i=1; i<=n; i++) {
        cout<<quien[i]<<" ";
    }
    cout<<endl;

    return 0;
}





