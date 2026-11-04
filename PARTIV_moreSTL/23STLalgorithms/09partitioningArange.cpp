//621
//PARTITIONING A RANGE

#include<algorithm>
#include <cstddef>
#include<vector>
#include<iostream>

using namespace std;

bool IsEven (const int& nNumber) {
    return ((nNumber%2)==0);
}

int main() {
    //a sample collecttion...
    vector<int> vecIntegers;

    //fill sample values 0-9 in that order
    for(int nNum=0; nNum<10; nNum++) {
        vecIntegers.push_back(nNum);
    }

    //a copy of the sample vector
    vector<int> vecCopy(vecIntegers);

    //Separate even values from the odd ones - even comes first.
    partition(vecIntegers.begin(), vecIntegers.end(), IsEven);

    //display contents
    cout<<"The content of the vector after using 'partition' are: ";
    cout<<endl<<"{";

    for(size_t nItem=0; nItem<vecIntegers.size(); nItem++) {
        cout<<vecIntegers[nItem]<<" ";
    }
    cout<<"}"<<endl<<endl;

    //Now use stable_partition on the vecCopy - maintains relative order
    stable_partition(vecCopy.begin(),vecCopy.end(),IsEven);

    //display contents of vecCopy
    cout<<"The effect of using 'stable partition' is:"<<endl;

    cout<<"{";
    for(size_t nItem=0; nItem<vecCopy.size(); nItem++) {
        cout<<vecCopy[nItem]<<" ";
    }
    cout<<"}"<<endl<<endl;

    return 0;
}







