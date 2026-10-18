/* pag 436
SUBSCRIPT OPERATORS

OPerators that allow array-style [] access to a class are called subscript operators.
The typical syntax of a subscript operator is:
    return_type& operator[] (subscript_type& subscript);

So, when writting a dynamic array class (CMyArray) for integers,
which should allow array-like access to internal elements,
you would typically program the subscript operator like this:

class CMyArray
{
    //Other class members
    public:
        int& operator[] (int nIndex) {
            //return the integer at position nIndex
        }
};

*/

#include<iostream>
using namespace std;

class CMyArray
{
    private:
        int* m_pnInternalArray;
        int m_nNumElements;
    public:
        CMyArray(int nNumElements);
        ~CMyArray();

        //declare a subscript operator
        int& operator[] (int nIndex);
};

//SUBSCRIPT OPERATOR: allows direct access to an element given an index
int& CMyArray::operator [] (int nIndex)
{
    return m_pnInternalArray[nIndex];
}

CMyArray::CMyArray(int nNumElements)
{
    m_pnInternalArray = new int[nNumElements];
    m_nNumElements = nNumElements;
}

CMyArray::~CMyArray()
{
    delete[] m_pnInternalArray;
}

int main() {
    //Instantiate a dynamic array with 5 elements
    CMyArray mArray(5);

    //Write into the array using the subscript operator
    mArray [0] = 25;
    mArray [1] = 20;
    mArray [2] = 15;
    mArray [3] = 10;
    mArray [4] = 5;

    cout<<"The contents of the array are: { ";

    for(int i=0; i<5; i++) {
        if(i==5-1) {
            cout<<mArray[i]<<" }"<<endl;
        } else {
            cout<<mArray[i]<<", ";
        }
    }

    return 0;
}
 