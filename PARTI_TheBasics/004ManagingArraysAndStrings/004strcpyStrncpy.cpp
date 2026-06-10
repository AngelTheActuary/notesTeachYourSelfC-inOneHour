/*
A number of existing functions are available in the C++ library for dealing with strings.
C++ inherits many of these functions for dealing with C-style strings from the C lan-
guage. Among the many functions provided are two for copying one string into another:
strcpy() and strncpy(). strcpy() copies the entire contents of one string into a desig-
nated buffer. The other, strncpy(), copies a number of characters from one string to
another. Listing 4.7 demonstrates the use of strcpy().

STRCPY:
This listing is relatively simple. It copies data from one string into another. The header
file string.h is included on line 3. This file contains the prototype of the strcpy()
function. strcpy() takes two character arrays—a destination followed by a source. On
line 11, this function is used to copy String1 into String2.

STRNCPY:
You have to be careful using the strcpy() function. If the source is larger than the desti-
nation, strcpy() overwrites past the end of the buffer. To protect against this, the stan-
dard library also includes strncpy(). This variation takes a maximum number of
characters to copy. strncpy() copies up to the first null character or the maximum num-
ber of characters specified into the destination buffer. Listing 4.8 illustrates the use of
strncpy()

*/

#include<iostream>
#include<string.h>
using namespace std;

int main() {
    char String1[]="I want to work in Google";
    char String2[80]={'\0'};
    strcpy(String2,String1);
    cout<<"STRING 1: "<<String1<<endl;
    cout<<"STRING 2: "<<String2<<endl; //I want to work in Google

    //PROOF strcncpy()
    const int MaxLength=9;
    char String3[MaxLength+1]={'\0'};

    strncpy(String3, String1, MaxLength); //safer than strcpy()

    cout<<"String 1: "<<String1<<endl;
    cout<<"String 3: "<<String3<<endl; //I want to

    return 0;
}
