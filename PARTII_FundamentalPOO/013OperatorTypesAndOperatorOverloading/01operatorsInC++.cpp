/*
WHAT ARE OPERATORS IN C++

On a syntactical level, there is very litlle that diferentiates an operator from a function,
save for the usage of the keyword operator.

An operator declaration looks quite like a function declaration:

return_type operator operator_symbol(...parameter list...);

The operator_symbol in this case could be any of the several operator-types
that the programmers can define.
It could be + (addition), or && (loogical AND), and so on.
The operands help the compiler distinguish one operator from another.
So, why does C++ provide operators when functions are also supported?

Imagine that you are using a string class called CUsefulString.
Now, you have two string objects too this class:

CUsefulString string1 ("Hello");
CUsefulString string2 ("World!");

Now, if you wanted to cancatened the two, what wouold be morre convenient
if not also intuitive?

Option1:
CUsefulString stringSum;
stringSum=string1+string2; //Hello World!

Option2:
CUsefulString stringSum;
stringSum=string1.Concatenate(string2); //Hello world!

UNARY OPERATORS

As the name suggest, operators that function on a singlke operand are called
unary operators.
The typocal definition of a unary operator implemented as a global fucntion or a 
static member function is

return_type operator operator_type(parameter_type)
{
    Implementation
}

A unary operator that is the member of a class is defined as

returned_type operator operator_type()
{
    Implementation
}

TYPPES OF UNARY OPERATORS

++: Increment.
--: Decremebt.
*: Pointer dereference.
->: Member selection
!: Logical NOT
&: Addres-of
~: One's complement
+: UNary plus
-: Unary negation
Conversion operators: Conversion operators

*/

#include<iostream>
using namespace std;

class CDate
{
    private:
        int m_nDay;
        int m_nMonth;
        int m_nYear;

        void AddDays(int nDaysToAdd) {
            m_nDay+=nDaysToAdd;
            if(m_nDay>30) {
                AddMonths(m_nDay/30);
                m_nDay%=30;
            }
        }

        void AddMonths(int nMonthsToAdd) {
            m_nMonth+=nMonthsToAdd;
            if(m_nMonth>12) {
                AddYears(m_nMonth/12);
                m_nMonth%=12;
            }
        }

        void AddYears(int nYearsToAdd) {
            m_nYear+=nYearsToAdd;
        }
    public:
        //Constructor that initializes the object to a day, month and year
        CDate(int nDay, int nMonth, int nYear): m_nDay(nDay), m_nMonth(nMonth), m_nYear(nYear) {};
        //Unary increment operator (prefix)
        CDate& operator ++ ()
        {
            AddDays(1);
            return *this;
        }
        //postfix operator: differs from prefix in return-type and parameters
        CDate operator ++ (int)
        {
            //Create a copy of the current object, before incrementing day
            CDate mReturnDate(m_nDay,m_nMonth,m_nYear);
            
            AddDays(1);

            //Return the state before incrementin was perfoormed
            return mReturnDate;
        }

        void DisplayDate()
        {
            cout<<m_nDay<<" / "<<m_nMonth<<" / "<<m_nYear;
        }
};

int main()
{
    //Instance and initialize a date object to 25 May 2008
    CDate mDate(25,6,2008);
    cout<<"The date object is initialized to: ";

    //Display initial date
    mDate.DisplayDate();
    cout<<""<<endl;

    //Applying the prefix increment operator
    ++ mDate;

    cout<<"Date after prefix-increment is: ";

    mDate.DisplayDate();
    cout<<""<<endl;

    return 0;
}

