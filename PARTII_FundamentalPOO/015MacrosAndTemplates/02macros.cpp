/*
HOW MACROS AND POOR TYPE SAFETY GO HANDING-IN-HAND.

Let's get back our previous simple macro function:
#define MAX(x,y) ( (x) > (y) ? (x) : (y))

Evidently, this macro is designed to compare like types.

But because macros are only a text-replacement feature supplied by the preprocessor,
there is no level of type safety or type checks performed on the nature of text (or variables) being processed by the macro

In an ideal scenario, we would have liked to restrict a generic function in ways that it compares only like object.
In the pages to come, you'll see how templates help you do exactly that.

MACROS VERSUS FUNCTIONS AND TEMPLATES.

Macros suffer four problems in C++.
The first is that they can be confusing if they get large because all macros must be defined on one line.
You can extend that line by using the backslash character (\), but larger macros quickly become difficult to manage.

The second problem is that macros are expanded inline each time they are used.
This means that if a macro is used a dozen times, the substitution appears a dozen times in your program,
rather than appearing once, as a function call does.
On the other hand, they usually quicker than a function call because the overhead of a function call is avoided.

The fact that they are expanded inline leadsa to the third problem, which is that the ,acro does not appear in the intermediate source code used by the compiler;
therefore, it is unavailable in most debuggers. This makes debugging macros tricky.

The final problem, however, is the biggest:
Macros are not type safe.
Althought it is convenient that absolutely any argument can be used with a macro, this completely undermines the striong typing of C++ and so is anathema to C++ programmers.

INLINE FUNCTIONS.

*/

#include<iostream>
using namespace std;

//INLINE Functions
inline unsigned long Square(unsigned long a) {return a*a;}
inline unsigned long Cube(unsigned long a) {return a*a*a;}


int main() {
    unsigned long x=1;
    for(;;) {
        cout<<"Enter a number (0 to quit): ";
        cin>>x;
        if(x==0)
            break;
        cout<<"You entered: "<<x;
        cout<<". Square("<< x <<"): ";
        cout<<Square(x);
        cout<<". Cube("<<x<<"): ";
        cout<<Cube(x)<<". "<<endl;
    }
    return 0;
}


