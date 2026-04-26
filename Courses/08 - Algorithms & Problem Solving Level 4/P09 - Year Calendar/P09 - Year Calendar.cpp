/*
P09 - Print Year Calendar

Write a program to print the calendar of a specific year.

The program should ask the user to enter:
- A year

The program should display the calendar for all 12 months of that year.

Example:

Enter a year: 2022

			Calendar - 2022

------------------- Jan -------------------

Sun  Mon  Tue  Wed  Thu  Fri  Sat
						 1
 2    3    4    5    6    7    8
 9   10   11   12   13   14   15
16   17   18   19   20   21   22
23   24   25   26   27   28   29
30   31

------------------- Feb -------------------

Sun  Mon  Tue  Wed  Thu  Fri  Sat
		  1    2    3    4    5
 6    7    8    9   10   11   12
13   14   15   16   17   18   19
20   21   22   23   24   25   26
27   28

...

Continue printing all months until December.
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
	cout << "Enter a year: ";
	short Year = 0;
	cin >> Year;

	return Year;
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
	return  Months[MonthNumber - 1];
}

void PrintMonthCalandar(short Year, short Month)
{
	short DayOrder = GetDayOrder(Year, Month, 1);
	short DaysInMonth = GetDaysInMonth(enMonths(Month), Year);

	cout << "__________________" << GetMonthName(Month) << "__________________\n" << '\n';
	cout << "Sun   Mon   Tue   Wed   Thu   Fri   Sat\n";

	for (short i = 0; i < DayOrder; i++)
		cout << setw(6) << "";

	for (short j = 1; j <= DaysInMonth; j++)
	{
		cout << right << setw(3) << j << "   ";
		DayOrder++;

		if (DayOrder == 7)
		{
			cout << endl;
			DayOrder = 0;
		}
	}

	cout << "\n---------------------------------------\n" << '\n';

}

void PrintYearCalendar(short Year)
{

	cout << "             Calendar - " << Year << "\n\n";

	for (short i = January; i <= December; i++)
	{
		PrintMonthCalandar(Year, i);

		cout << "\n\n";
	}
}

int main()
{
	short Year = ReadYear();

	PrintYearCalendar(Year);


	return 0;
}
