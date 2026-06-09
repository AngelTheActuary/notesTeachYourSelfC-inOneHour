#include<iostream>
int main() {
    for(int i=32; i<128; i++) {
        std::cout<<(char) i<<"\n";
    }
    return 0;
}

/*
OUTPUT:
”#$%&’()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmno
pqrstuvwxyz{|}~?
*/

/*
TABLE 3.3 The Escape Characters
Character -> What It Means
\a ----> Bell (alert)
\b ----> Backspace
\f ----> Form feed
\n ----> New line
\r ----> Carriage return
\t ----> Tab
\v ----> Vertical tab
\’ ----> Single quote
\” ----> Double quote
\? ----> Question mark
\\ ----> Backslash
\000 --> Octal notation
\xhhh -> Hexadecimal notation
*/