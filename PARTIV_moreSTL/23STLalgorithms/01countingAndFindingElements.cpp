//pag 600
//COUNTING AND FINDING ELEMENTS.

#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;

//A unary predicate for the *_if functions.
template<typename elementType>
bool IsEven(const elementType& number) {
    //return true if the number is even.
    return ((number%2)==0);
}

int main(){
    //A sample container - vector of integers.
    vector<int> vecIntegers;

    //Inserting sample values
    for(int nNum=-9;nNum<10;nNum++) {
        vecIntegers.push_back(nNum);
    }

    //Display all elements in the collection.
    cout<<"Elements in our sample collection are: "<<endl;
    vector<int>::const_iterator iElementLocator;

    for(iElementLocator=vecIntegers.begin();iElementLocator!=vecIntegers.end();iElementLocator++) {
        cout<<*iElementLocator<<" ";
    }
    cout<<endl;

    //Determine the total number of elements in the collection.
    cout<<"The colection contains "<<vecIntegers.size()<<" elements."<<endl;

    //Use the count_if algorithm with the unary predicate IsEven:
    size_t nNumEvenElements=count_if(vecIntegers.begin(),vecIntegers.end(),IsEven<int>);

    cout<<"Number of even elements: "<<nNumEvenElements<<endl;
    cout<<"Number of odd elements: "<<vecIntegers.size()-nNumEvenElements<<endl;

    //Use count to determine the number of '0's in the vector
    size_t nNumZeroes=count(vecIntegers.begin(),vecIntegers.end(),0);
    cout<<"Number of zeroes: "<<nNumZeroes<<endl;

    cout<<"Searching for an element of value 3 using find: "<<endl;

    //Find a sample integer '3' in the vector using the find algorithm 
    vector<int>::iterator iElementFound;
    iElementFound=find(
        vecIntegers.begin(), //start of the range
        vecIntegers.end(), //end of the range
        3 //element to find
    );

    //Check if the find succeeded
    if(iElementFound!=vecIntegers.end()) {
        cout<<"Element found: "<<*iElementFound<<endl;
    } else {
        cout<<"Element not found."<<endl;
    }

    cout<<"Finding the first even number using find_if: "<<endl;

    //Find the first even number in the collection
    vector<int>::iterator iEvenNumber;
    iEvenNumber=find_if(
        vecIntegers.begin(), //start of the range
        vecIntegers.end(), //end of the range
        IsEven<int> //unary predicate to find an even number
    );

    if(iEvenNumber!=vecIntegers.end()) {
        cout<<"Number "<<*iEvenNumber<<" found at position [";
        cout<<distance(vecIntegers.begin(),iEvenNumber)<<"]"<<endl;
    }

    return 0;
}


