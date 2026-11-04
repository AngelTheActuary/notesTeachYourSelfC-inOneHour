//648
//PERFORMING LOGICAL OPERATIONS USING A BITSET

#include<bitset>
#include<string>
#include<iostream>

using namespace std;

int main() {
    
    //A bitset to hold 8-bits
    bitset<8> eightBits;
    cout<<"Enter a 8-bit sequence: ";

    //Store user-supplied sequence into the bitset
    cin>>eightBits;
    cout<<endl;

    //Supply info on number of 1s and 0s in it:
    cout<<"The number of 1s in the input sequence: ";
    cout<<eightBits.count()<<endl;
    cout<<"The number of 0s in the input sequence: ";
    cout<<eightBits.size() - eightBits.count()<<endl;

    //Create a copy
    bitset<8> flipInput(eightBits);

    //Flip the bits
    flipInput.flip();
    cout<<"The flipped version of the input sequence is: ";
    cout<<flipInput<<endl<<endl;

    //another 8-bit sequence to perform bitwise-ops against the first
    bitset<8> eightMoreBits;
    cout<<"Enter another 8-bit sequence: ";
    cin>>eightBits;
    cout<<endl;

    cout<<"Result of AND, OR nad XOR between the two sequences: "<<endl;
    
    cout<<eightBits<<" & "<<eightMoreBits<<" = ";
    cout<<"= "<<(eightBits & eightMoreBits)<<endl; //bitwise AND

    cout<<eightBits<<" | "<<eightMoreBits<<" = ";
    cout<<(eightBits | eightMoreBits)<<endl; //bitwise or

    cout<<eightBits<<" ^ "<<eightMoreBits<<" = ";
    cout<<(eightBits ^ eightMoreBits)<<endl;
    
    return 0;
}


