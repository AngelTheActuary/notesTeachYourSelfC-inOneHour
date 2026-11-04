//639
//USING A STL PRIORITY_QUEUE

#include<queue>
#include<iostream>
using namespace std;

int main() {
    //A priority queue of integers sorted yusing std::less <> (default)
    priority_queue<int> pqIntegers;

    //A priority queue of doubles
    priority_queue<double> pqDoubles;

    //A priority queue of integers sorted using std::greater<>
    priority_queue<int,deque<int>,greater<int>> pqIntegers_Inverse;

    return 0;
}
