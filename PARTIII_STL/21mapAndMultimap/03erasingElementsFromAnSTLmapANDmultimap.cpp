/* 567
ERASING ELEMENTS FROM AN STL map AND multimap.
*/

#include<map>
#include<iostream>
#include<string>

using namespace std;

//typedef the multimap definition for easy readibility
typedef multimap<int,string> MULTIMAP_INT_STRING;

int main() {
    MULTIMAP_INT_STRING mmapIntToString;

    //Insert key-value pairs into the multimap
    mmapIntToString.insert(MULTIMAP_INT_STRING::value_type(3,"Three"));
    mmapIntToString.insert(MULTIMAP_INT_STRING::value_type(45,"Forty-five"));
    mmapIntToString.insert(MULTIMAP_INT_STRING::value_type(-1,"Minus One"));
    mmapIntToString.insert(MULTIMAP_INT_STRING::value_type(1000,"One thousand"));

    //Insert duplicates into the multimap
    mmapIntToString.insert(MULTIMAP_INT_STRING::value_type(-1,"Minus One"));
    mmapIntToString.insert(MULTIMAP_INT_STRING::value_type(1000,"One thousand"));

    cout<<"The multimap contains "<<mmapIntToString.size();
    cout<<" key-value pairs. "<<"They are: "<<endl;

    //Print the comtents of the multimap to the screen
    MULTIMAP_INT_STRING::const_iterator iPairLocator;

    for(iPairLocator=mmapIntToString.begin(); iPairLocator!=mmapIntToString.end(); iPairLocator++) {
        cout<<"Key: "<<iPairLocator->first;
        cout<<", Value: "<<iPairLocator->second.c_str()<<endl;
    }
    cout<<endl;

    //Erasing an element with key as -1 from the multimap
    if(mmapIntToString.erase(-1)>0) {
        cout<<"Erased all pairs with -1 as key."<<endl;
    }

    //Erase an element given an iterator from the multimap
    MULTIMAP_INT_STRING::const_iterator iElementLocator = mmapIntToString.find(45);
    if(iElementLocator!=mmapIntToString.end()) {
        mmapIntToString.erase(iElementLocator);
        cout<<"Erased a pair with 45 as key using an iterator"<<endl;
    }

    //Erase a range from the multimap...
    cout<<"Erasing the range of pairs with 1000 as key."<<endl;
    mmapIntToString.erase(mmapIntToString.lower_bound(1000),mmapIntToString.upper_bound(1000));

    cout<<endl;
    cout<<"The multimap now contains "<<mmapIntToString.size();
    cout<<" key-value pair(s). "<<"They are: "<<endl;

    //Print the contents of the multimap to the screen
    for(iPairLocator=mmapIntToString.begin(); iPairLocator!=mmapIntToString.end(); iPairLocator++) {
        cout<<"Key: "<<iPairLocator->first;
        cout<<", Value: "<<iPairLocator->second.c_str()<<endl;
    }

    return 0;
}
