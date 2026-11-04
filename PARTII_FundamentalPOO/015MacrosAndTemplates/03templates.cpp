/*
AN INTRODUCTION TO TEMPLATES.

template <typename objectType>
objectType & GetMax (const objectType & value1, const objectType & value2) {
    if (value1>value2)
        return value1;
    else
        return value2;
};

The keyword template marks the start of a template declaration
and is followed by the template parameter list.
This parameter list contains the typename keyword that defines the template parameter objectType,
making it placeholder for the type of the objectType, making it a placeholder for the type
of the object that the template is being instantiated for.
The template declarartion is what contains the typename keyword that defines
the template parameter objectType, making it a placeholder for the type of the object that the template is being instantiated for.
The template declaration is what contains the pattern that you want to implement.

Sample usage:
    int nInteger1 = 25;
    int nInteger2 = 40;
    int nMaxValue = GetMax <int> (nInteger1, nInteger2);
    double dDouble1 = 1.1;
    double dDouble2 = 1.001;
    double dMaxValue = GetMax <double> (nDouble1, nDouble2);

Note the detai;<int> used in the ca;l to GetMax.
It effectively defines the template parameter objectType as int.
The preceding code would lead to the compi;er generating two versions of the template function GetMax that can be visualized as the following

const int & GetMax (const int& value1, const int& value2)
{
    //...
}

const double & GetMax (const double& value1, const double& value2)
{
    //...
}

In reality, however, template functions don't necessarily need an accompanyinh type specifier.
So, the following call would work perfectly well:

int nMaxValue = GetMax (nInteger1, nInteger2);

Compilers in this case are intelligent enough to understand taht the template function is 
being onvoked for the integer type.
However, this is true only for template functions and not for classes.

A template declaration can be
* A declaration or definition of a function (as you saw earlier)
* A declaration or definition of a class
* A definition of a member function or a member class of a class template
* A definition of a static data member of a class template
* A definition of a static data member of a class nested within a class template
* A definition of a member template of a class or class template

TEMPLATE CLASSES.

Template classes are the templatized version of C++ classes that you've learned since Lesson 10, "Classes and objects".
A simple template class that features a single template parameter T can be written as as:

template<typename T>
class CMyFirstTemplateClass
{
    public:
        void SetVariable (T& newValue) { m_Value = newValue; };
        T& GetValue () {return m_Value;};
    private:
        T m_Value;
}

The class CMyFirstTemplate class has been designed to hold a variable of type T - the trype of which is assigned at the time the template is used.
So let's look at a sample usage of this template class:

CMyFirstTemplate <char*> mHoldString;
mHoldInteger.SetValue ("Sample string");
cout<<"The value sorted is: "<<mHoldINteger.GetValue ();

Thus, the class defines a pattern and gets reused for applying that same pattern it implements on different data types.

template<typename T>
class CTemplateClass
{
    T m_member;
};

When we use this template, we would write the code as
CTemplateClass <int> mIntTemplate;

The specific tyoe created as a result of this instantuiatios is called a specialization.

*/


// TEMPLATES WITH MULTIPLE PARAMETERS
/*
template <typename T1, typename T2>
class CHoldsPair
{
    private:
        T1 m_Value1;
        T2 m_Value2;
    public:
        //Constructor that initializes member variables
        CHoldsPair (const T1& value1, const T2& value2) {
            m_Value1 = value1;
            m_Value2 = value2;
        };
        //Other functions declarations
};

*/

//TEMPLATES WITH DEFAULT PARAMETERS
/*
template <typename T1=int, typename T2=int>
class CHoldsPair
{
    //Function declarations
};
*/

//A TEMPLATE SAMPLE
/*
It's time to develop further on the template version of CHoldsPair that we've discussed so far, as Listing 15.3 demonstrates.

Template class with default template parameters 

*/

#include<iostream>
using namespace std;

template<typename T1=int, typename T2=double>
class CHoldsPair {
    private:
        T1 m_Value1;
        T2 m_Value2;
    public:
        //Constructor that initializes member variables
        CHoldsPair (const T1& value1, const T2& value2) {
            m_Value1 = value1;
            m_Value2 = value2;
        };

        //Accessor functions
        const T1 & GetFirstValue () {
            return m_Value1;
        };

        const T2 & GetSecondValue () {
            return m_Value2;
        };
};

int main() {
    CHoldsPair <> mIntFloat(300, 10.09);
    CHoldsPair<short,char*>mShortStringPair(25,"Learn templates, love C++");

    //Output values contained in the first object....
    cout<<"The first object contains - "<<endl;
    cout<<"Value 1: "<<mIntFloatPair.GetFirstValue()<<endl;

    //Output values contained in the second in the second object...
    cout<<"The second object contains."<<endl;
    cout<<"Value 1: "<<mShortStringPair.GetPair.GetFirstValue()<<endl;
    cout<<"Value 2: "<<mShortStringPair.GetSecondValue();

    return 0;
}


