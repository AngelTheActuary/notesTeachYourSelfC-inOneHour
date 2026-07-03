#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    double premio=0.0;

    //aquṕi para eleiminar de uno en uno con s oponentes ganar 1/s
    for(int s=1; s<=n; s++) {
        premio=premio+(1.0/s);
    }

    printf("%.10f\n",premio);

    return 0;
}
