//651
//USING VECTOR<bool>

#include <cstddef>
#include<vector>
#include<iostream>

using namespace std;

int main() {
    //Instantiate a vector<bool> to hold 3 elements
    vector<bool> vecBool(3);

    //Assign 3 elements using the array operator[]
    vecBool[0]=true;
    vecBool[1]=true;
    vecBool[2]=false;

    //Insert a 4th element using push_back
    //this will cause the vector to resize the biffer
    vecBool.push_back(true);

    cout<<"The contents of the vector are: "<<endl<<"{";
    for(size_t nIndex=0; nIndex<vecBool.size(); nIndex++) {
        cout<<vecBool[nIndex]<<" ";
    }
    cout<<"}"<<endl<<endl;

    vecBool.flip();

    cout<<"The flipped contents of the vector are: "<<endl<<"{";
    for(size_t nIndex=0; nIndex<vecBool.size(); nIndex++) {
        cout<<vecBool[nIndex]<<" ";
    }
    cout<<"}"<<endl;

    return 0;
}



