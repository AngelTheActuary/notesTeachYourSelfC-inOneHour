/* 544
FINDING ELEMENTS IN AN STL set OR multiset
*/

#include<set>
#include<iostream>

using namespace std;
typedef set <int> SETINT;

int main() {
    SETINT setIntegers;

    //insert some random values
    setIntegers.insert(43);
    setIntegers.insert(78);
    setIntegers.insert(-1);
    setIntegers.insert(124);

    SETINT::const_iterator iElement;

    //Write contents of the set to the screen
    for(iElement=setIntegers.begin(); iElement!=setIntegers.end(); iElement++) {
        cout<<*iElement<<endl;
    }

    //Try finding an element
    SETINT::iterator iElementFound = setIntegers.find(-1);

    //Check if found
    if(iElementFound!=setIntegers.end()) {
        cout<<"Element "<<*iElementFound<<" found!"<<endl;
    } else {
        cout<<"Element not found in set!"<<endl;
    }

    //Try finding another element
    SETINT::iterator iAnotherFind=setIntegers.find(12345);

    //Check if found...
    if(iAnotherFind!=setIntegers.end()) {
        cout<<"Element "<<*iAnotherFind<<" found!"<<endl;
    } else {
        cout<<"Element 12345 not found in set! "<<endl;
    }

    return 0;
}


