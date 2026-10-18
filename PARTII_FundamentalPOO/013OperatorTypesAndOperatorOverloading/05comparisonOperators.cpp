/* pag 428
OVERLOADING COMPARISON OPERATORS

*/

#include<iostream>
using namespace std;

class CDate
{
    private:
        int m_nDay;
        int m_nMonth;
        int m_nYear;

        void AddDays(int nDaysToAdd);
        void AddMonths(int nMonthsToAdd);
        void AddYears(int nYearsToAdd);
    
    public:
        //Constructor that initializes the object to a day, month and a year
        CDate(int nDay, int nMonth, int nYear):m_nDay(nDay), m_nMonth(nMonth), m_nYear(nYear)
        {
            cout << "Constructor called" << endl;
        };

        void DisplayDate() {
            cout<<m_nDay<<"/"<<m_nMonth<<"/"<<m_nYear<<endl;
        }

        //integer conversion operator
        operator int();

        //Equality operator that helps with: if (mDate1==mDate2)....
        bool operator==(const CDate& mDateObj);

        //overloaded equality operator that helps with: if (mDate==nInteger)
        bool operator==(int nDateNUmber);

        //inequality operator
        bool operator!=(const CDate& mDateObj);

        //overloaded inequality operator for integer types
        bool operator != (int nDateNumber);
};

CDate::operator int()
{
    return (m_nYear*10000 + m_nMonth*100 + m_nDay);
}

//equality operator that heps with if (mDate1==mDate2)......
bool CDate::operator==(const CDate& mDateObj)
{
    return (
        (mDateObj.m_nYear==m_nYear) &&
        (mDateObj.m_nMonth==m_nMonth) &&
        (mDateObj.m_nDay==m_nDay)
    );
}

bool CDate::operator==(int nDateNumber)
{
    return (nDateNumber==int(*this));
}

//Inequality operator
bool CDate::operator!=(const CDate&mDateObj)
{
    return !(this->operator==(mDateObj));
}

//Inequality int operator
bool CDate::operator!=(int nDateNumber)
{
    return !(nDateNumber==int(*this));
}

void CDate::AddDays(int nDaysToAdd)
{
    m_nDay+=nDaysToAdd;
    if (m_nDay>30)
    {
        m_nDay-=30;
        AddMonths(m_nDay/30);
        m_nDay%=30;
    }
}

void CDate::AddMonths(int nMonthsToAdd)
{
    m_nMonth+=nMonthsToAdd;
    if (m_nMonth>12)
    {
        m_nMonth-=12;
        AddYears(m_nMonth/12);
        m_nMonth%=12;
    }
}

void CDate::AddYears(int nYearsToAdd)
{
    m_nYear+=nYearsToAdd;
}

int main() {
    //Instantiate and initialize a date object to 25 May 2008
    CDate mDate1(25,6,2008);

    cout<<"mDate1 contains: ";
    //Display initial date
    mDate1.DisplayDate();
    cout<<endl;

    CDate mDate2(23,5,2009);
    cout<<"mDate2 contains: ";
    mDate2.DisplayDate();
    cout<<endl;

    cout<<"USING THE INEQUALITY OPERATOR"<<endl;
    if (mDate1!=mDate2)
        cout<<"The two dates are not equals... As expected!"<<endl;

    CDate mDate3(23,5,2009);
    cout<<"mDate3 contains: ";
    mDate3.DisplayDate();
    cout<<endl;

    //Use the inequality operator
    if(mDate2==mDate3)
        cout<<"The two dates are equals."<<endl;

    //Get the integer equivalent of mDate3 using operator int()
    int nIntegerDate3=mDate3;

    cout<<"The integer equivalent of mDate3 is: "<<nIntegerDate3<<endl;

    //Use overloadedd operator== (for int comparisson)
    if(mDate3==nIntegerDate3)
        cout<<"The integer and mDate3 are equivalent "<<endl;

    //Use overloaded operator != that accepts integers
    if(mDate3!=nIntegerDate3)
        cout<<"The mDate3 is inequal to nIntegerDate3"<<endl;

    return 0;
}



