/*
TRUNCATING AN STL string

The STL string features a function called erase that can erase:
* A number of characters when given an offset position and count.
* A character when supplied with an iterator pointing to it
* A number of characters given a range supplied by two iterayt

The sample that follows in Listing 17.5 demonstrates different applications loaded versions
of string::erase() function.

*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string strSample("Hello String! Wake up to a beautiful day! ");
    cout<<"The original sample string is: "<<endl;
    cout<<strSample<<endl<<endl;

    //Delete characters from the string given position and count
    cout<<"Truncating the second sentence: "<<endl;
    strSample.erase(13,28);
    cout<<strSample<<endl;

    //Find a character 'S' in the string using STL find algortihm
    string::iterator iCharS = find( strSample.begin(), strSample.end(), 'S');
    
    //If character found, 'erase' to deletes a character
    cout<<"Erasing character 'S'  from the sample string: "<<endl;
    if(iCharS != strSample.end())
        strSample.erase(iCharS);

    cout<<"Erasing a range between begin() and end(): "<<endl;
    strSample.erase(strSample.begin(),strSample.end());

    //Verify the length after the erase() operation operation above
    if(strSample.length() == 0) {
        cout<<"The string is empty"<<endl;
    }

    return 0;
}

