/*
Performance optimization is a difficult challenge, and most
programmers are not good at identifying the location of performance
problems in their programs without help.

The correct way to optimize performance is by studying 
the behavior of the application using profilers, which
can present a variety os statistics ranging from time
spent in a particular function to the number of times it was invoked.

These statistics help programmers focus their efforts on parts of the code
that really need attention rather than using intuition and spending
time on code artifacts that bring little gain.

For this reason, it is always better to write code that is clear
and understandable than write code that contains your guess about
what will run fast or slow, but is harder to understand.
It is often easier to make code run faster.
*/

#include<iostream>

inline int Double(int);

using namespace std;

int main() {
    int target;
    
    cout<<"Enter a number to work with: ";
    cin>>target;
    cout<<"\n";

    target=Double(target);
    cout<<"Target: "<<target<<endl;

    target=Double(target);
    cout<<"Target: "<<target<<endl;

    target=Double(target);
    cout<<"Target: "<<target<<endl;

    return 0;
}

int Double(int target) {
    return 2*target;
}





