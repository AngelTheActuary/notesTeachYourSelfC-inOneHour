/*
BINARY OPERATORS 

OPerators that function on two operands are called binary operators.
The definition of a binary operator implemented as a global
function or a static member function is as follows:

return_type operator_type (parameter1, parameter2);

The definition of a binary implemented as a class member is
return_type operator_type (parameter);

THe reason the class member version of a binary operator accepts only one parameter is
that the second parameter is usually derived from the attributes of the class itself.

TYPES OF BINARY OPERATORS

, Comma
!= Inequality
% Modulus
%= Modulus/ assignment
& Btwise AND
&& Logical AND
&= Bitwise AND/aasignment
* Multiplication
*= Multiplication/assignment
+ Addition
+= Addition/assignment
- Subtraction
-= Subtraction/assignment
->* Pointer to member selection
/ Division
/= Division/assignment
< Less than
<< Left shift
<<= Left shift/assignment
<= Less than or equal to
= Assignment
== Equality
> Greater than
>= Greater than or equal to
>> Right shift
>>= Right shift/assignment
^ Exclusive OR
^= Exclusive OR/assignment
| Bitwise inclusive OR
|= Bitwise inclusive OR/assignment
|| Logical OR
[] Subscript operator

*/

#include<iostream>
using namespace std;

class CDate{
    private:
        int m_nDay;
        int m_nMonth;
        int m_nYear;

        void AddDays(int nDaysToAdd){
            m_nDay += nDaysToAdd;
            if(m_nDay>30) {
                AddMonths(m_nDay/30);
                m_nDay = m_nDay%30;
            }
        }

        void AddMonths(int nMonthsToAdd){
            m_nMonth += nMonthsToAdd;
            if(m_nMonth>12) {
                AddYears(m_nMonth/12);
                m_nMonth = m_nMonth%12;
            }
        }

        void AddYears(int m_nYearsToAdd){
            m_nYear += m_nYearsToAdd;
        }
    
        public:
            //Constructor that initializes the object to a day, month and year
            CDate(int nDay, int nMonth, int nYear) : m_nDay(nDay), m_nMonth(nMonth), m_nYear(nYear){};

            CDate operator + (int nDaysToAdd){
                CDate newDate (m_nDay, m_nMonth, m_nYear);
                newDate.AddDays(nDaysToAdd);
                return newDate;
            }

            void displayDate(){
                cout<<m_nDay<<" / "<<m_nMonth<<" / "<<m_nYear<<endl;
            }

};

int main(){
    //Instantiate and initialize a date object to 25 May 2008
    CDate mDate(25,6,2008);

    cout<<"The date object is initialized to: ";
    //Display the date object
    mDate.displayDate();

    cout<<"Date after adding 10 days is: ";
    CDate datePlus10 (mDate + 10);
    datePlus10.displayDate();

    return 0;
}

