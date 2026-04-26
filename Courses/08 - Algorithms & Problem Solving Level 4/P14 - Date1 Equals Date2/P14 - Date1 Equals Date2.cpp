/*
P14 - Check if Two Dates are Equal

Write a program to read two dates and check if Date1 is equal to Date2.

The program should ask the user to enter:

Date1:
- Day
- Month
- Year

Date2:
- Day
- Month
- Year

The program should determine whether Date1 is equal to Date2.

Example:

Enter Date1:
Day: 1
Month: 1
Year: 2000

Enter Date2:
Day: 1
Month: 1
Year: 2000

Yes, Date1 is Equal To Date2.
*/

#include <iostream>
#include <string>
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

struct stDate
{
	short Year = 0, Month = 0, Day = 0;

};

stDate ReadDate()
{
	stDate Date;

	Date.Year = ReadYear();
	Date.Month = ReadMonth();
	Date.Day = ReadDay(Date.Year, Date.Month);

	return Date;
}

bool isDate1EqualtoDate2(stDate Date1, stDate Date2)
{
	return Date1.Year == Date2.Year ? (Date1.Month == Date2.Month ?
		(Date1.Day == Date2.Day ? true : false) : false) : false;
}

int main()
{
	cout << "Date1:\n";
	stDate Date1 = ReadDate();

	cout << "\nDate2\n";
	stDate Date2 = ReadDate();

	isDate1EqualtoDate2(Date1, Date2) ? cout << "\nYes, Date1 is Equal To Date2\n" : cout << "\nNo, Date1 is not Equal To Date2\n";

	return 0;

}