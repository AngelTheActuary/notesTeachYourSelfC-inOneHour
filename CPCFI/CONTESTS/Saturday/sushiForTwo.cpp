#include<iostream>
using namespace std;

int tipo[100005];
int largo[100005];

int main()
{
    int n;
    cin>>n;

    int numBloques=0;
    int anterior=-1;

    for(int i=0; i<n; i++) {
        int t;
        cin>>t;
        if(t==anterior) {
            largo[numBloques-1]=largo[numBloques-1]+1;
        } else {
            tipo[numBloques]=t;
            largo[numBloques]=1;
            numBloques=numBloques+1;
            anterior=t;
        }
    }

    //Revisar caeda pareja de bloques vecinos
    int mejor=0;
    for(int i=0; i+1<numBloques; i++) {
        int chico=largo[i];
        if(largo[i+1]<chico) {
            chico=largo[i+1];
        }
        if(2*chico>mejor) {
            mejor=2*chico;
        }
    }

    cout<<mejor<<endl;

    return 0;
}



