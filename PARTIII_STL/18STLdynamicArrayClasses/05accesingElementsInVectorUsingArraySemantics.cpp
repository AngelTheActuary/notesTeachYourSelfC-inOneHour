/*pag 508

ACCESING ELEMENTS IN A VECTOR USING POINTER SEMANTIC

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

    //Access objects in a vector using iterators:
    vector<int>::iterator iElementLocator = vecDynamicIntegerArray.begin();

    while(iElementLocator!=vecDynamicIntegerArray.end()) {
        size_t nElementIndex = distance(vecDynamicIntegerArray.begin(),iElementLocator);
        
        cout<<"SIZE_t = "<<sizeof(size_t)<<endl;
        cout<<"Element at position ";
        cout<<nElementIndex<<" is: "<<*iElementLocator<<endl;

        //move to next element
        iElementLocator++;
    }

    return 0;
}

