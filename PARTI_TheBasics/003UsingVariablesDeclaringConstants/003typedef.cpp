/*
It can become tedious, repetitious, and, most important, error-prone to keep typing
unsigned short int. C++ enables you to create an alias for this phrase by using the
keyword typedef, which stands for type definition.
In effect, you are creating a synonym, and it is important to distinguish this from creating
a new type. typedef is used by writing the keyword typedef, followed by the existing
type, and then the new name, and ending with a semicolon. For example:
typedef unsigned short int USHORT;
creates the new name USHORT that you can use anywhere you might have written
unsigned short int. Listing 3.3 is a replay of Listing 3.2, using the type definition
USHORT rather than unsigned short int
*/

#include<iostream>
typedef unsigned short int USHORT; //typedef defined

int main() {
    using std::cout;
    using std::endl;

    USHORT Width=5;
    USHORT Length;

    Length=10;
    USHORT Area=Width*Length;
    cout<<"Width: "<<Width<<endl; //5
    cout<<"Length: "<<Length<<endl; //10
    cout<<"Area: "<<Area<<endl; //50

    return 0;
}

