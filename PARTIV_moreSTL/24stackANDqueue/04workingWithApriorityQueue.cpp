//639
//WORKING WITH A PRIORITY_QUEUE
#include<queue>
#include<iostream>
using namespace std;

int main() {
    priority_queue<int> pqIntegers;
    cout<<"Inserting {10,5,-1,20} into the priority_queue"<<endl;

    //elements get push-ed into the p-queue
    pqIntegers.push(10);
    pqIntegers.push(5);
    pqIntegers.push(-1);
    pqIntegers.push(20);

    cout<<"The queue contains "<<pqIntegers.size()<<" elements";
    cout<<endl;
    cout<<"Element et the top: "<<pqIntegers.top()<<endl;

    while(!pqIntegers.empty()) {
        cout<<"Deleting the topmost element: "<<pqIntegers.top();
        cout<<endl;

        pqIntegers.pop();
    }

    return 0;
}


