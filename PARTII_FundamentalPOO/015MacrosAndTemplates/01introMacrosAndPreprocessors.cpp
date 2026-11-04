/*pag 455
PREPROCESSOR DIRECTIVE.

You can create substitutions using the #define command.
For example, if you write

#define BIG 512

you have instructed the precompiler to substitute the string 512 whereever it sees the string BIG.
This is not a string in the C++ sense.
The characters "512" are substituted in your source code wherever the world "BIG" is seen.
Thus, if you write

#define BIG 512
int myArray[512];

As you can see, the preprocessor has performed a text re[lacement of BIG by 512.

MACRO FUNCTIONS

The #define directive cal also be used to create macro functions.
A macro function is a symbol created using #define that takes an argument, much like a function does.
The preprocessor substitutes the substitution string for whatever argument it is givenn.
For example, you can define the macro TWICE as

#define TWICE(x) ( (x) *2)

and then in your code you write

TWICE(4)

TH entire string TWICE(4) is removed and the value ( (4) * 2) is substituted.
When the compiler sees the 4, it substitutes ((4)*2), which then evaluates to 4x2, or 8.

A macro can have more than one paremeter, and each parameter can be usedd repeatedly
in the replacement text. Two common macros are MAX and MIN:

#define MAX(x,y) ( (x)>(y) ? (x) : (y) )
#define MIN(x,y) ( (x)<(y) ? (x) : (y) )

Note that, in a macro function definition, the opening paranthesis for the parameter list must immediately follow the macro name with no spaces.
The preprocessor is not as forgiving of whitespace as is the compiler.
If there is a space, a standard substitution is used, such as you saw earlier in this lesson.

For example, if you write
#define MAX (x,y) ((x) > (y) ? (x) : (y))

and then try to use MAX  like this:
int x=5, y=7, z;
z = MAX(x,y);

the intermediate code is 

int x=5, y=7, z;
z=(x,y) ( (x)>(y) ? (x):(y) )(x,y)

A simple text substitution is done, rather than the macro function being invoiked.
Thus, the token MAX has substotuted for it (x,y) ( (x)>(y) ? (x):(y) ), and that is followed by the (x,y), which follows MAX.

By removing the space between MAX and (x,y), however, the intermediate code becomes

int x=5, y=7, z;
a=( (5) > (7) ? (5) : (7) )

This, of course, evaluates to 7.

*/

#include<iostream>
using namespace std;

#define CUBE(a) ( (a) * (a) * (a) )
#define THREE(a) a*a*a

int main() {
    long x=5;
    long y = CUBE(x);
    long z = THREE(x);

    cout<<"y: "<<y<<endl;
    cout<<"z: "<<z<<endl;

    long a=5,b=7;
    y=CUBE(a+b);
    z=THREE(a+b);

    cout<<"y: "<<y<<endl; // 12*12*12 = 1728
    cout<<"z: "<<z<<endl; // 5+7*5+7*5+7 = 82

    return 0;
}

