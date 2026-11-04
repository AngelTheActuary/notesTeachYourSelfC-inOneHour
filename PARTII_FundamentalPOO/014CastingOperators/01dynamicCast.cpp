/*pag 442
CASTING OPERATORS
Operators that change the interpretation of an object are called casting operators.

Dynamic Cating That helps tell wheter an Aniumal Object is a Cat or a Dog

*/

#include<iostream>
using namespace std;

class CAnimal
{
    public:
        virtual void Speak () = 0;
};

class CDog : public CAnimal
{
    public:
        void WagTail() {cout<<"Dog: I wagged my tail!"<<endl;}
        void Speak() {cout<<"Dog: Bow-Wow!"<<endl;}
        

};

class CCat : public CAnimal
{
    public:
        void CatchMice () {cout<<"Cat: I caught a mouse! "<<endl;}
        
        void Speak() {cout<<"Cat: Meow!"<<endl;}
};

void DetermineType (CAnimal* pAnimal);

int main() {
    //pAnimal1 points to a Dog object
    CAnimal* pAnimal1=new CDog ();

    //pAnimal2 points to a Cat object
    CAnimal* pAnimal2 = new CCat();

    cout<<"Using dynamic_cast to determine type of Animal 1"<<endl;
    DetermineType(pAnimal1);

    cout<<"Using dynamic_cast to determine type of Animal 2"<<endl;
    DetermineType(pAnimal2);

    //Use the virtual function overriden by the subclasses to prove type
    cout<<"Verifying type: Asking Animal 1 to speak! "<<endl;
    pAnimal1->Speak();

    cout<<"Verifying type: Asking pAnimal 2 to speak!"<<endl;
    pAnimal2->Speak();

    return 0;
}

void DetermineType (CAnimal* pAnimal) {
    CDog* pDog = dynamic_cast <CDog*>(pAnimal);
    if(pDog) {
        cout<<"The animal is a dog!"<<endl;

        //Call the derived class Function
        pDog->WagTail();
    }

    CCat* pCat = dynamic_cast <CCat*>(pAnimal);
    if(pCat) {
        cout<<"The animal is a cat!"<<endl;

        pCat->CatchMice();
    }

}

/*pag 448
USING REINTERPRET_CAST

reinterpret_cast is the closest a C++ casting operator gets to the C-style cast.
It really does allow the programmer to cast one object type to another,
reardless of wheter or not the types are related;
that is, it forces a reinterpretation of type using
a syntax as seen in the following sample:

CBase * pBase = new CBase();
CUnrelated * pUnrelated = reinterpret_cast<CUnrelated*>(pBase);

*/

/*
CONST_cast

const_cast allows you to turn off the const access modifier to an object.
If you are wondering why this cast is necesary at all, you are probably right in doing so.
In an ideal situation where programmers write their classes correctly, they remember to use the
const keyword frequently and in the right places.
The practical world unfortunately is far from ideal.
Missing const qualifiers as seen in the following code are quite prevalent:

CSomeClass
{
    public:
        //...
        void DisplayMembers(); //ought to be a const member.
};

void DisplayAllData (const CSomeClass& mData) {
    mData.DisplayMembers (); //compile failure
    //reason for failure: call to a non-const member using a const reference.
}

you are evidently correct in passing the mData object as a const reference. After all, a display function should be read-only;
should not be allowed to call non-const member functions;
that is, should not be allowed to call a function that can change the
state of the object.

However, the implementation of DisplayMembers(), which also ought to be const,
unfortunately is not.

Now, so long as CSomeClass belong to you and the source code
is in your control, you can make corrective changes to DisplayMembers().

In many cases, however, it might belong to a third-party library and making changes to it is not possible.
In situations such as these, const_cast is your savior.

The syntax for invoking DisplayMembers() in such a scenario is

void DisplayAllData (const CSomeClass& mData) {
    CSomeClass& refData = const_cast <CSomeClass&>(mData);
    refData.DisplayMembers();
}

*/


