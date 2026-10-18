#include<iostream>
using namespace std;

class CDate
{
    private:
        int m_nDay;
        int m_nMonth;
        int m_nYear;
    public:
        //Constructor that initializes the object to a day, month and year
        CDate(int nDay, int nMonth, int nYear)
                :m_nDay(nDay), m_nMonth(nMonth), m_nYear(nYear){}
        
        //Convert date object into an integer.
        operator int() {
            return ( (m_nYear*10000)+(m_nMonth*100)+m_nDay );
        }

        void DisplayDate() {
            cout<<"m_nDay: "<<m_nDay << " / "<<m_nMonth<<" / "<<m_nYear<<endl;
        }

};

int main() {
    //Initialize and initialize a date object to 25 May 2008
    CDate mDate(25,6,2008);

    cout<<"The date object is initialized to: ";

    //Display initial Date
    mDate.DisplayDate();

    //Get the integer equivalent of the date
    int nDate = mDate;

    cout<<"The integer equivalent of the date is: "<<nDate<<endl;

    return 0;
}
