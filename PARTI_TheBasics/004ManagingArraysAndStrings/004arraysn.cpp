/*
You can initialize multidimencional arrays.
You assign the list of values to array elements in order,
with the last array subscript (the one farthest to the right)
changing while each of the former steady. Therefore, if you have an array

int theArray[5][3];

the first three elements go into theArray[0]; the next three into theArray[1];
and so forth.

You initialize this array by writting.

int theArray[5][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
*/

#include<iostream>
using namespace std;

int main() {
    //The compiler ignores the inner braces, but they do make it easier to understand
    //how the numbers are distributed.
    int theArray[5][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12},
        {13,14,15}
    };
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++) {
            if(j!=3-1) {
                cout<<theArray[i][j]<<", ";
            } else {
                cout<<theArray[i][j]<<"\n";
            }
        }
    }
    int theArray2[5][3]={0};
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++) {
            if(j!=3-1) {
                cout<<theArray2[i][j]<<", ";
            } else {
                cout<<theArray2[i][j]<<"\n";
            }
        }
    }
    return 0;
}