//UNARY PREDICATE IsMultiple
//587

#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;

template<typename numberType>
struct IsMultiple {
    numberType m_Divisor;

    //divisorialize the divisor
    IsMultiple(const numberType& divisor) {
        m_Divisor=divisor;
    }

    //The comparator of type: bool f(x)
    bool operator() (const numberType& element) const {
        //Check if the dividen is a multiple of the divisor
        return ((element % m_Divisor)==0);
    }
};

int main() {
    vector<int> vecIntegers;

    cout<<"The vector contains the following sample values: ";

    //Insert sample values:
    for(int nCount=25; nCount<32; nCount++){
        vecIntegers.push_back(nCount);
        cout<<nCount<<" ";
    }
    cout<<endl;

    //Find the first element that is a multiple of 4 in the collection
    vector<int>::iterator iElement;
    iElement=find_if(
        vecIntegers.begin(),
         vecIntegers.end(),
         IsMultiple<int>(4));
    
    if(iElement!=vecIntegers.end()) {
        cout<<"The first element in the vector divisible by 4 is: ";
        cout<<*iElement<<endl;
    }

    return 0;
}
