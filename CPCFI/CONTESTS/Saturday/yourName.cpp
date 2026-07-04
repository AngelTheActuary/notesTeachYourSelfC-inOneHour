#include<iostream>
#include<string>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q>0) {
        int n;
        cin>>n;
        string s,t;
        cin>>s;
        cin>>t;

        int cuentaS[26]; //# veces que parece lka letra s
        int cuentaT[26]; //y en t

        for(int i=0; i<26;i++) {
            cuentaS[i]=0;
            cuentaT[i]=0;
        }

        //contar las letras: 'a' es la posiciópn 0, 'b' la 1, etc.
        for(int i=0; i<n; i++) {
            cuentaS[s[i]-'a']=cuentaS[s[i]-'a']+1;
            cuentaT[t[i]-'a']=cuentaT[t[i]-'a']+1;
        }

        //comparar los 26 contadores
        bool iguales=true;
        for(int i=0; i<26;i++) {
            if(cuentaS[i]!=cuentaT[i]) {
                iguales=false;
            }
        }

        if(iguales) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }

        q=q-1;
    }

    return 0;
}

