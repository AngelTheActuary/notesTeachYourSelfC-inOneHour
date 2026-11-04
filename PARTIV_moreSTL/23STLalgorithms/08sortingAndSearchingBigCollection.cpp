//618
//SORTING AND SEARCHING IN A SORTED COLLECTION AND ERASING DUPLCIATES

#include<algorithm>
#include <cstddef>
#include<vector>
#include<string>
#include<iostream>

using namespace std;

int main() {
    typedef vector<string> VECTOR_STRINGS;

    //A vector of strings
    VECTOR_STRINGS vecNames;

    //Insert sample values
    vecNames.push_back("John Doe");
    vecNames.push_back("Jack Nicholson");
    vecNames.push_back("Sean Penn");
    vecNames.push_back("Anna Hoover");

    //Insert a duplicate into the vector
    vecNames.push_back("Jack Nicholson");

    cout<<"The initial contents of the vector are:"<<endl;
    for(size_t nItem=0; nItem<vecNames.size(); nItem++) {
        cout<<"Name ["<<nItem<<"] = \"";
        cout<<vecNames[nItem]<<"\""<<endl;
    }
    cout<<endl;

    //sort the names using std::sort
    sort(vecNames.begin(),vecNames.end());

    cout<<"The sorted vector contains names in the order: "<<endl;
    for(size_t nItem=0; nItem<vecNames.size(); nItem++) {
        cout<<"Name ["<<nItem<<"] = \"";
        cout<<vecNames[nItem]<<"\""<<endl;
    }
    cout<<endl;

    cout<<"Searching for \"John Doe\" using 'binary_search': "<<endl;
    bool bElementFound=binary_search(vecNames.begin(),vecNames.end(),"John Doe");

    //Check if search found a match
    if(bElementFound) {
        cout<<"Result: \"John Doe\" was found in the vector!"<<endl;
    } else {
        cout<<"Elemen not found"<<endl;
    }

    VECTOR_STRINGS::iterator iNewEnd;

    //Erase adjacent duplicates
    iNewEnd = unique(vecNames.begin(), vecNames.end());
    vecNames.erase(iNewEnd,vecNames.end());

    cout<<"The contents of the vector after using 'unique': "<<endl;
    for(size_t nItem=0; nItem<vecNames.size(); nItem++) {
        cout<<"Name ["<<nItem<<"] = \"";
        cout<<vecNames[nItem]<<"\""<<endl;
    }

    return 0;
}



