/* pag 503
Inserting Elements in a vector.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> vecDynamicIntegerArray;

    //Insert sample integers into the vector:
    vecDynamicIntegerArray.push_back(50);
    vecDynamicIntegerArray.push_back(50);
    vecDynamicIntegerArray.push_back(987);
    vecDynamicIntegerArray.push_back(1001);

    cout<<"The vector contains: ";
    cout<<vecDynamicIntegerArray.size()<<" ELEMENTS"<<endl;

    return 0;
}






