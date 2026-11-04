/* pag 504
Set Elements in a vector.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> vecDynamicIntegerArray(4);

    //Insert sample integers into the vector:
    vecDynamicIntegerArray[0]= 50;
    vecDynamicIntegerArray[1]= 1;
    vecDynamicIntegerArray[2]= 987;
    vecDynamicIntegerArray[3]= 1001;
    
    cout<<"The vector contains: ";
    cout<<vecDynamicIntegerArray.size()<<" ELEMENTS"<<endl;

    return 0;
}






