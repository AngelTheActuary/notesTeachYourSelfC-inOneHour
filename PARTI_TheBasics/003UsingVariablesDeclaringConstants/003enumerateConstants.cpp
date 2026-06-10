/*

Enumerated constnats enable you to create new types and then to
define variables of those types whose values are restricted to a
set of possible values.
For example, you could create an enumeration to store colors.
Specifically, you could declare COLOR to be an enumeration, and then you could define
five values for COLOR: RED, BLUE, GREEN, WHITE and BLACK.

The syntax for creating enumerated constants is to writr the keyword enum,
followed by the new type name, an opening brace, each of the legal values separated
by a comma,
and finally, a closing brace and a semicolon. Here's an example:

enum COLOR {RED,BLUE,GREEN,WHITE,BLACK}

This statement perform two tasks:
* It makes COLOR the name of an enumeration; that is, a new type.
* It makes RED a symbolic constant with the value 0, BLUE a symbolic constant with the value 1,
  GREEN a symbolic constant with the value 2, and so forth.

Every enumerated constant has an integer value.
If you don't specify otherwise, the first constant has the value 0,
and the rest count up from there.

Any one of the constants can be initialized a particular value,
however, and those are not initialized count upward from the ones before them.
Thus, if you write

enum Color {RED=100,BLUE,GREEN=500,WHITE,BLACK=700}

RED hast the value 100; BLUE, the value 101; GREEN, the value 500; WHITE, the value 501; and BLACK, the value 700

You can defune variables of type COLOR, but they can be assigned only one of the enumerated values 
(in this case, RED, BLUE, GREEN, WHITE or BLACK).
You can assign any color value to your COLOR variable.

It is important to realize that enumerator variables are generally of type unsigned int,
and that the enumerated constants equate to integer variables.
It is, however, very convenient to be able to name these values when working with
information such as colors, days of the week or similar sets of values.

*/

#include<iostream>

int main(){
    enum Days {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    Days today;
    today=Sunday;
    if(today==Sunday || today==Saturday) {
        std::cout<<"\nCholbee' love the weekedns!\n";
    } else {
        std::cout<<"\nOmega back to work\n";
    }    
    return 0;
}