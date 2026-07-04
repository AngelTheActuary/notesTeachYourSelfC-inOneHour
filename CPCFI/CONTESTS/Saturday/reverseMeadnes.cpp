#include<iostream>
#include<string>
using namespace std;

int L[200005];
int R[200005];
long long cnt[200005];

int main()
{
    int t;
    cin>>t;
    while(t>0) {
        int n,k;
        cin>>n;
        cin>>k;
        string s;
        cin>>s;
        /*
        Leer los bloques y anotar cada para posición, su 1 y su r
        así se va a encontrar el bloque de x sin buscar nada.
        */
        static int lArr[200005], rArr[200005];
        for(int i=0; i<k; i++) {
            cin>>lArr[i];
        }
        for(int i=0; i<k; i++) {
            cin>>rArr[i];
        }

        for(int i=0; i<k; i++) {
            for(int p=lArr[i]; p<=rArr[i]; p++) {
                L[p]=lArr[i];
                R[p]=rArr[i];
            }
        }

        //limpieza de contador
        for(int p=1; p<=n; p++) {
            cnt[p]=0;
        }

        int q;
        cin>>q;
        for(int j=0; j<q; j++) {
            int x;
            cin>>x;
            int espejo=L[x]+R[x]-x;
            int a=x;
            if(espejo<a) {
                a=espejo;
            }
            cnt[a]=cnt[a]+1;
        }

        for(int i=0; i<k; i++) {
            long long acumulado=0;
            int l=lArr[i], r=rArr[i];
            int p=l;
            int pe=r;
            while(p<pe) {
                acumulado=acumulado+cnt[p];
                if(acumulado%2==1) {
                    char temp=s[p-1];
                    s[p-1]=s[pe-1];
                    s[pe-1]=temp;
                }
                p++;
                pe=pe-1;
            }
        }

        cout<<s<<endl;
        t=t-1;

    }


    return 0;
}