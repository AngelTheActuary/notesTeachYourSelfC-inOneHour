#include<iostream>
using namespace std;

//MCD
long long mcd(long long x, long long y) {
    while(y!=0) {
        long long temp=y;
        y=x%y;
        x=temp;
    }
    return x;
}

//mcm
long long mcm(long long x, long long y){
    return (x/mcd(x,y))*y;
}


int main()
{
    int t;
    cin>>t;
    while(t>0) {
        long long a,b,c,m;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>m;

        //#de veces que se visitda a cada uno
        long long A=m/a;
        long long B=m/b;
        long long C=m/c;

        //cuántas veces co8inciden de doz en dos
        long long AB=m/mcm(a,b);
        long long AC=m/mcm(a,c);
        long long BC=m/mcm(b,c);

        //#vreces que coincioden de 3 en tres
        long long ABC=m/mcm(mcm(a,b),c);
        
        long long aguaAlce=6*A-3*AB-3*AC+2*ABC;
        long long aguaBob=6*B-3*AB-3*BC+2*ABC;
        long long aguaCarol=6*C-3*AC-3*BC+2*ABC;

        cout<<aguaAlce<<" "<<aguaBob<<" "<<aguaCarol<<endl;

        t=t-1;
    }
    
    return 0;
}