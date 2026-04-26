/*
P15 - Last Day / Last Month

Write a program to read a date and check:

- If it is the last day in the month.
- If it is the last month in the year.

The program should ask the user to enter:
- A day
- A month
- A year

The program should determine:
- Whether the entered day is the last day of its month.
- Whether the entered month is the last month of the year.

Example:

Enter a Day: 31
Enter a Month: 12
Enter a Year: 2022

Yes, Day is Last Day in Month.
Yes, Month is Last Month in Year.
*/

#include <iostream>
#include <string>
using namespace std;

struct stDate
{
	short Year = 0, Month = 0, Day = 0;

};

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

short ReadMonth()
{
	short Month = 0;
	cout << "Enter Month: ";
	cin >> Month;

	while (Month < 1 || Month > 12)
	{
		cout << "Enter a valid Number: ";
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


short ReadDay(short Year, short Month)
{
	short Day = 0;

	cout << "Enter a Day: ";
	cin >> Day;

	while (Day < 1 || Day > GetDaysInMonth(enMonths(Month), Year))
	{
		cout << "Enter a Valid Day: ";
		cin >> Day;
	}

	return Day;

}

stDate ReadDate()
{
	stDate Date;

	Date.Year = ReadYear();
	Date.Month = ReadMonth();
	Date.Day = ReadDay(Date.Year, Date.Month);

	return Date;
}

bool isLastDayInMonth(stDate Date)
{
	return Date.Day == GetDaysInMonth(enMonths(Date.Month), Date.Year);
}

bool isLastMonthInYear(short Month)
{
	return Month == December;
}

int main()
{
	stDate Date = ReadDate();


	isLastDayInMonth(Date) ? cout << "\nYes, Day is Last Day in Month.\n" : cout << "\nNo, Day is Not Last Day in Month.\n";
	isLastMonthInYear(Date.Month) ? cout << "\nYes, Month is Last Month in Year.\n" : cout << "\nNo, Month is Not Last Month in Year.\n";

	cout << endl;
	return 0;
}


