#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> a(n), b(n);

    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    for(int i=0; i<n; i++) {
        cin>>b[i];
    }

    //Ordenamiento local de cafda par
    for(int i=0; i<n; i++) {
        if(a[i]>b[i]) {
            swap(a[i],b[i]);
        }
    }

    long long min_sum=0;

    //Calcvulare las diferencias absolutas
    for(int i=0; i<n-1; i++) {
        min_sum+=abs(a[i]-a[i+1])+abs(b[i]-b[i+1]);
    }

    cout<<min_sum<<"\n";
}

int main()
{

    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}


