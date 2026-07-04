#include<iostream>
using namespace std;

bool ady[205][205];
int grado[205];

int main()
{
    int t;
    cin>>t;

    while(t>0) {
        int n,m;
        cin>>n;
        cin>>m;

        //limpieza
        for(int i=1; i<=n; i++) {
            grado[i]=0;
            for(int j=1; j<=n; j++) {
                ady[i][j]=false;
            }
        }

        //leer las aristas
        for(int k=0; k<m; k++) {
            int u,v;
            cin>>u;
            cin>>v;
            ady[u][v]=true;
            ady[v][u]=true;
            grado[u]=grado[u]+1;
            grado[v]=grado[v]+1;
        }

        int centro=1;
        for(int i=1; i<=n; i++) {
            if(grado[i]>=2) {
                bool tieneHoja=false;
                for(int j=1; j<=n; j++) {
                    if(ady[i][j]&&grado[j]==1) {
                        tieneHoja=true;
                    }
                }
                if(!tieneHoja) {
                    centro=i;
                }
            }
        }

        int x=grado[centro];
        int y=(n-1-x)/x;

        cout<<x<<" "<<y<<endl;

        t=t-1;

    }

    return 0;
}
