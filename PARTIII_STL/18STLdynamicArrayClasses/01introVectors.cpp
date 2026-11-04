/* pag 502
STL DYNAMIC ARRAY CLASSES.
*/

#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> vecDynamicIntegerArray;

    //Instantiate a vector with 10 elements (it can grow larger)
    vector<int> vecArrayWithTenElements (10);

    //Instantiate a vector with 10 elements, each initialized to 90
    vector<int> vecArrayWithTenInitializedElements (10,90);

    //Instantiate one vector and initialize it to the contents of another
    vector<int> vecSomeElementCopied(vecArrayWithTenElements.begin(), vecArrayWithTenElements.begin() + 5);

    return 0;
}

