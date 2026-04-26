/*
P08 - Print Month Calendar

Write a program to print the calendar of a specific month.

The program should ask the user to enter:
- A year
- A month

The program should display the month's calendar in the following format:

Example:

Enter a year: 2022
Enter a month: 9

             
_______________Sep________________

Sun  Mon  Tue  Wed  Thu  Fri  Sat

                     1    2    3
 4    5    6    7    8    9   10
11   12   13   14   15   16   17
18   19   20   21   22   23   24
25   26   27   28   29   30
__________________________________
*/


#include <iostream>
#include <string> 
#include <iomanip>
using namespace std;

enum enMonths
{
    January = 1, February = 2, March = 3, April = 4, May = 5, June = 6,
    July = 7, August = 8, September = 9, October = 10, November = 11, December = 12
};

bool isLeapYear(short Year)
{
    return (Year % 400 == 0) || (Year % 100 != 0 && Year % 4 == 0);
}


short ReadYear()
{
    short Year = 0;

    cout << "Enter a  Year: ";
    cin >> Year;

    return Year;
}

short ReadMonth()
{
    short Month = 0;

    cout << "Enter a Month: ";
    cin >> Month;

    while (Month < 1 || Month > 12)
    {
        cout << "Enter a valid Month: ";
        cin >> Month;
    }

    return Month;
}

short GetDaysInMonth(enMonths Month, short Year)
{
    switch (Month)
    {
    case enMonths::February:
        return isLeapYear(Year) ? 29 : 28;

    case enMonths::April:
    case enMonths::June:
    case enMonths::September:
    case enMonths::November:
        return 30;

    default:
        return 31;
    }
}


short GetDayOrder(short Year, short Month, short Day)
{
    short a = (14 - Month) / 12,
        y = Year - a,
        m = Month + (12 * a) - 2,
        d = ((Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7);

    return d;
}


string GetMonthName(short MonthNumber)
{
    string Months[12] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
    return  Months[MonthNumber-1];
}

void PrintMonthCalendar(short Year, short Month)
{
   
    short DayOrder = GetDayOrder(Year, Month, 1);
    short DaysInMonth = GetDaysInMonth(enMonths(Month), Year);
    short NewWeek = DayOrder;

   
    cout << "__________________"<<GetMonthName(Month)<<"__________________\n" << '\n';
    cout << "Sun   Mon   Tue   Wed   Thu   Fri   Sat\n";

    for (short i = 0; i < DayOrder; i++)
    {
        cout << setw(6) << "";
    }

    for (short Day = 1; Day <= DaysInMonth; Day++)
    {
        cout << right << setw(3) << Day << "   ";

        NewWeek++;

        if (NewWeek == 7)
        {
            cout << endl;
            NewWeek = 0;
        }
    }
    cout << "\n---------------------------------------\n" << '\n';
}

int main()
{

   short Year = ReadYear(), Month = ReadMonth();
    PrintMonthCalendar(Year, Month);

    return 0;
}