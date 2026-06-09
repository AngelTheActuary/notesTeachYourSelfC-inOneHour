/*
A signed integer is different from an unsigned integer, in that half of the values you can
represent are negative. Instead of picturing a traditional car odometer, you might picture
a clock much like the one shown in Figure 3.2, in which the numbers count upward mov-
ing clockwise and downward moving counterclockwise. They cross at the bottom of the
clock face (traditional 6 o’clock).

One number from 0 is either 1 (clockwise) or –1 (counterclockwise). When you run out
of positive numbers, you run right into the largest negative numbers and then count back
down to 0. Listing 3.5 shows what happens when you add 1 to the maximum positive
number in a short integer
*/

#include<iostream>

int main() {
    short int smallNumber;
    smallNumber=32767;
    std::cout<<"Small number: "<<smallNumber<<std::endl; //32767
    smallNumber++;
    std::cout<<"Small number: "<<smallNumber<<std::endl; //-32768
    smallNumber++;
    std::cout<<"Small number: "<<smallNumber<<std::endl; //-32767
    smallNumber++;
    std::cout<<"Small number: "<<smallNumber<<std::endl; //-32766
    for(int i=1; i<=255; i++) {
        //255, 256, 257 (Jugar con esos tres números)
        smallNumber+=i;
    }
    std::cout<<"Small number: "<<smallNumber<<std::endl;
    return 0;
}


