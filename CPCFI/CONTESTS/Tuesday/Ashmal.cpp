#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0) {
        int n;
        cin>>n;
        string s="";
        for(int i=0; i<n; i++) {
            string a;
            cin>>a;
            if(s=="") {
                s=a; 
            } else {
                string opcion1=a+s; //Paraq insertar al inicio
                string opcion2=s+a; //Insertar al final
                if(opcion1<opcion2) {
                    s=opcion1;
                } else {
                    s=opcion2;
                }
            }
        }
        cout<<s<<endl;
        t--;
    }
    return 0;
}

