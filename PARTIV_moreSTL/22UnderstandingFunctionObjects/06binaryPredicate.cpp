/* 592
BINARY PREDICATE
*/

#include<set>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class CCompareStringNoCase
{
    public:
        bool operator() (const string& str1, const string&  str2) const {
            string str1LowerCase;
            //Assign space
            str1LowerCase.resize(str1.size());
            //Convert every character to lower case
            transform(
                str1.begin(),
                str1.end(),
                str1LowerCase.begin(),
                ::tolower
            );

            string str2LowerCase;
            str2LowerCase.resize(str2.size());
            transform(
                str2.begin(),
                str2.end(),
                str2LowerCase.begin(),
                ::tolower
            );

            return (str1LowerCase < str2LowerCase);
        }
};

int main() {
    typedef set<string, CCompareStringNoCase> SET_NAMES;
    
    //Define a set of string to hold names
    SET_NAMES setNames;

    //Insert names into the set
    setNames.insert("Raquel");
    setNames.insert("angel");
    setNames.insert("OSMARA");
    setNames.insert("fabian");
    setNames.insert("RAqUel");
    setNames.insert("RAQUEL");
    setNames.insert("AnGEL");

    cout<<"The sample names in the set are: "<<endl;

    //Display the names in the set
    SET_NAMES::const_iterator iNameLocator;
    for(
        iNameLocator = setNames.begin();
        iNameLocator != setNames.end();
        iNameLocator++
    ){
        cout<<*iNameLocator<<endl;
    }

    cout<<"Enter a name you wish to search the set for: ";
    string strUserInput;
    cin>>strUserInput;

    SET_NAMES::const_iterator iNameFound=setNames.find(strUserInput);

    if(iNameFound!=setNames.end()) {
        cout<<"'"<<*iNameFound<<"' was found in the set."<<endl;
    } else {
        cout<<"'"<<strUserInput<<"' was not found in the set."<<endl;
    }

    return 0;
}



