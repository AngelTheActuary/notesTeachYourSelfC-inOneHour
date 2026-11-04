/* 511
DEMONSTRATION OF size() AND capacity()
*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vecDynamicIntegerArray(5);
    cout<<"Vector of integers was intantiated with "<<endl;
    cout<<"Size: "<<vecDynamicIntegerArray.size();
    cout<<", Capacity: "<<vecDynamicIntegerArray.capacity()<<endl;

    //inserting another element
    vecDynamicIntegerArray.push_back(777);

    cout<<"After inserting yet another element... "<<endl;
    cout<<"Size: "<<vecDynamicIntegerArray.size();
    cout<<", Capacity: "<<vecDynamicIntegerArray.capacity()<<endl;
    

    return 0;
}

