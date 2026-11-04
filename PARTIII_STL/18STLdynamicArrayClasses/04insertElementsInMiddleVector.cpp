/* pag 505
INSERT ELEMENTS IN THE MIDDLE
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> vecIntegers (4,90);

    cout<<"The initial contents of the vectors are: ";

    vector<int>::iterator iElement;
    for(
        iElement = vecIntegers.begin(); //initial
        iElement != vecIntegers.end(); //conditional
        iElement++
    ) {
        cout<<*iElement<<" ";
    }
    cout<<endl;

    //Insert 25 at the beginnning
    vecIntegers.insert(vecIntegers.begin(),25);

    cout<<"The vector after inserting an element at the beginning: ";
    for (
        iElement = vecIntegers.begin();
        iElement != vecIntegers.end();
        iElement++
    ) {
        cout<<*iElement<<" ";
    }
    cout<<endl;

    //Insert 2 numbers of value 45 at the end
    vecIntegers.insert(vecIntegers.end(),2,45);

    cout<<"The vector after inserting two elements at the end: ";
    for(
        iElement = vecIntegers.begin();
        iElement != vecIntegers.end();
        iElement++
    ) {
        cout<<*iElement<<" ";
    }
    cout<<endl;

    //Another vector containing elements from another container in position [1]
    vector<int> vecAnother (2,30);

    //Insert two elements from another container in position [1]
    vecIntegers.insert(vecIntegers.begin() + 1,
                        vecAnother.begin(), vecAnother.end());
    
    cout<<"The vector after inserting contents from another ";
    cout<<"in the middle: "<<endl;

    for(
        iElement = vecIntegers.begin();
        iElement != vecIntegers.end();
        iElement++
    ) {
        cout<<*iElement<<" ";
    }

    cout<<endl;

    return 0;
}






