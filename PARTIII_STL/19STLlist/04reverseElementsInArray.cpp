/*

REVERSING AND SORTING ELEMENTS IN A LIST

list has a special property that iterators pointing to the elements
in a list remain valid in spite of rearrangement of the elements or insertion of new elements
and so on. To keep this important propertly intact, the list function features
sort and reverse as member methods even though the standard template library supplies these as algorithm
that will and do worl on the list class.

The member versions of these algorithms ensure that iterators
pointing to elements in the list are not invalidated when the relative
position of the elements is diturbed.

*/

#include<iostream>
#include<list>

using namespace std;

void PrintListContents (const list <int>& listInput);

int main() {
    list<int> listIntegers;

    //Insert elements at the beginning....
    listIntegers.push_front(4);
    listIntegers.push_front(3);
    listIntegers.push_front(2);

    listIntegers.push_front(1);
    listIntegers.push_front(0);

    //Insert an element at the end...
    listIntegers.push_back(5);

    cout<<"Initial contents of the list: "<<endl;
    PrintListContents(listIntegers);

    listIntegers.reverse();
    
    cout<<"Contents of the list after using reverse (): "<<endl;
    PrintListContents(listIntegers);

    return 0;
}

void PrintListContents (const list <int>& listInput) {
    if(listInput.size() > 0) {
        cout<<"{";
        list<int>::const_iterator iElementLocator;

        for(iElementLocator=listInput.begin(); iElementLocator!=listInput.end(); iElementLocator++) {
            cout<<*iElementLocator<<" ";
        }

        cout<<"} "<<endl<<endl;

    } else {
        cout<<"List is empty!"<<endl;
    }
}
