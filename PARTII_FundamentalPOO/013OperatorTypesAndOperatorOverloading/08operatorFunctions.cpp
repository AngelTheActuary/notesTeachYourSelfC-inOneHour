/* pag 438
FUNCTIONS OPERATORS
*/

#include<iostream>
#include<string>
using namespace std;

class CDisplay
{
    public:
        void operator() (string strIn) const {
            cout<<strIn<<endl;
        }
};

int main() {
    CDisplay mDisplayFuncObject;

    //equivalent to mDisplayFuncObject.operator ()
    mDisplayFuncObject ("Display this string!");

    return 0;
}

/*
OPERATORS THAT CANNOT BE REDEFINED.

With all the flexibility that C++ giuves you, the programmer,
in customizing the behavior of the operators and making your classes
as easy to use, it still keeps some cards to itself
by not allowing you to change or alter the behavior of some
operators that are expected to perform consistently.
The operators that cannot be redefined are shown

. Member selection
.* Pointer-to-member selection
:: Scope resolution
? : Conditional ternary operator
sizeof Gets the size of an object/class type

*/

