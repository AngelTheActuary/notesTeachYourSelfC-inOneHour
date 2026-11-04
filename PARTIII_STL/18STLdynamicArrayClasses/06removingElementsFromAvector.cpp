/*
REMOVING ELEMENTS FROM A VECTOR.
*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vecDynamicIntegerArray;

    //Insert sample integers into the vector:
    vecDynamicIntegerArray.push_back(50);
    vecDynamicIntegerArray.push_back(1);
    vecDynamicIntegerArray.push_back(987);
    vecDynamicIntegerArray.push_back(1001);

    cout<<"The vector contains ";
    cout<<vecDynamicIntegerArray.size();
    cout<<" elements before calling pop_back "<<endl;

    //Erase one element at the end
    vecDynamicIntegerArray.pop_back();

    cout<<"The vector contains ";
    cout<<vecDynamicIntegerArray.size();
    cout<<" elements before calling pop_back"<<endl;

    cout<<"Enumerating items in the vector..."<<endl;

    unsigned int nElementIndex=0;
    while(nElementIndex<vecDynamicIntegerArray.size()) {
        cout<<"Element at position "<<nElementIndex<<" is: ";
        cout<<vecDynamicIntegerArray[nElementIndex]<<endl;
        nElementIndex++;
    }

    return 0;
}

