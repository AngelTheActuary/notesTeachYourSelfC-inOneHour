//pag 582
//Displaying the contenst of a Collection on the Screen Using a Unary Functiom

#include<algorithm>
#include<iostream>
#include<vector>
#include<list>
using namespace std;

//Struct that behaves as a unary function
template<typename elementType>
struct DisplayElement {
    void operator()(const elementType& element) const {
        cout<<element<<' ';
    }
};

int main() {
    vector<int> vecIntegers;
    for(int nCount=0; nCount<10; nCount++) {
        vecIntegers.push_back(nCount);
    }

    list<char>listChars;
    for(char nChar='a'; nChar<'k'; nChar++) {
        listChars.push_back(nChar);
    }

    cout<<"Displaying thye vector of integers: "<<endl;

    //Display the array of integers
    //for_each(vecIntegers.begin(),vecIntegers.end(),DisplayElement<int>());
    for_each(vecIntegers.begin(), //start of the range
              vecIntegers.end(), //end of the range
                 DisplayElement<int>()); //unary function object
    
    cout<<endl;

    return 0;
}






