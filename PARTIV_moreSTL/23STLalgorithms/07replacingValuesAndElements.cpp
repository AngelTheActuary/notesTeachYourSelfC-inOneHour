//616
//REPLACING VALUES AND REPLACING ELEMENT GIVEN A CONDITION.

#include <cstddef>
#include<iostream>
#include<algorithm>
#include<vector>
#include<random>

using namespace std;

bool IsEven (const int & nNum) {
    return ((nNum%2)==0);
}

int main() {
    //Initialize a sample vector with 6 elements
    vector<int> vecIntegers(6);

    //Fill first 3 elements with value 8
    fill(vecIntegers.begin(),vecIntegers.begin()+3,8);

    //Fill last 3 elements with value 5
    fill_n(vecIntegers.begin()+3,3,5);

    //shuffle the container
    random_device rd;
    mt19937 generator(rd());
    shuffle(vecIntegers.begin(), vecIntegers.end(), generator);

    cout<<"The initial contents of the vector are: "<<endl;
    for(size_t nIndex=0; nIndex<vecIntegers.size(); nIndex++) {
        cout<<"Element ["<<nIndex<<"] = ";
        cout<<vecIntegers[nIndex]<<endl;
    }

    cout<<endl<<"Using 'std::replace' to replace value 5 by 8 "<<endl;
    replace(vecIntegers.begin(), vecIntegers.end(), 5, 8);

    cout<<"Using 'std::replace_if' to replace even by -1"<<endl;
    replace_if(vecIntegers.begin(),vecIntegers.end(),IsEven,-1);

    cout<<endl<<"Contents of the vector after replacements:"<<endl;
    for(size_t nIndex=0; nIndex<vecIntegers.size(); nIndex++) {
        cout<<"Element ["<<nIndex<<"] = ";
        cout<<vecIntegers[nIndex]<<endl;
    }

    return 0;
}