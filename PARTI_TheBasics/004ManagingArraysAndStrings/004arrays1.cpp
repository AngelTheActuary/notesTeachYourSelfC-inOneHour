/*
LongArray[indice] para refeirce a un array:
LongArray[0], LongArray[1], LongArray[2], ...... , LongArray[n-1]

FENCE POST ERRORS.

It is so common to write to one past the end of an array that this bug has its own name.
It is called a fence post error.
This refers to the problem in counting how many fence posts you need
for a 10-foot fence if you need one post for every foot.
Most people answer 10, but of course you need 11.
*/

#include<iostream>

using namespace std;

int main() {
    long LongArray[25]; //Array of 25 long arrays (4 bytes * 25arrays = 100bytes)
    //Initializing arrays
    int IntegerArray[5]={0};
    for(int i=0; i<5; i++) {
        cout<<IntegerArray[i];
    }
    cout<<'\n';
    int IntegerArray2[5]={10,20,30,40,50};
    for(int i=0; i<5; i++) {
        if(i==5-1) {
            cout<<IntegerArray2[i];
        } else {
            cout<<IntegerArray2[i]<<", ";
        }
    }
    cout<<'\n';
    //Array with size no specify
    int IntegerArray3[] = {100,200,300,400,500,600,700,800};
    for (int i=0; i<8; i++) {
        if(i==8-1) {
            cout<<IntegerArray3[i];
        } else {
            cout<<IntegerArray3[i]<<", ";
        }
    }
    cout<<"\n";
    int IntegerArray4[5]={10,20};
    for(int i=0; i<5; i++) {
        if(i==5-1) {
            cout<<IntegerArray4[i];
        } else {
            cout<<IntegerArray4[i]<<", ";
        }
    }
    cout<<"\n";

    enum WeekDays {Sun,Mon,Tue,Wed,Thu,Fri,Sat,DaysInWeek};
    int ArrayWeek[DaysInWeek]={10,20,30,40,50,60,70};

    cout<<"The value at Tuesday is: "<<ArrayWeek[Tue]<<"\n";

    return 0;
}

