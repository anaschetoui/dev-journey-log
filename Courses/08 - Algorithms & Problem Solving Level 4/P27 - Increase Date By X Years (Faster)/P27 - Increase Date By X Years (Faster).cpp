/*
P27 - Increase Date By X Years (Faster)

Write a program to read a date and a number of years,
then increase the date by the specified number of years
using a faster approach (without increasing one year at a time).

The program should ask the user to enter:
- A day
- A month
- A year
- Number of years to add

The program should display the new date after adding the specified number of years.

Example:

Enter a Day: 29
Enter a Month: 2
Enter a Year: 2020

How many years to add? 5

Date After:
Adding [5] years is: 28/2/2025
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

string GetDate(stDate Date)
{
	return (to_string(Date.Day) + '/' + to_string(Date.Month) + '/' + to_string(Date.Year));
}

int ReadNumber(string Message)
{
	int HowManyDays = 0;
	cout << Message;
	cin >> HowManyDays;

	return HowManyDays;

}

stDate IncreaseDateByXYearsFaster(stDate Date, short HowManyYears)
{
	Date.Year += HowManyYears;	

	if (Date.Month == February)
	{
		short DaysInFebruary = GetDaysInMonth(February, Date.Year);

		if (Date.Day > DaysInFebruary)
			Date.Day = DaysInFebruary;
	}

	return Date;
}

int main()
{
	stDate Date = ReadDate();

	short  HowManyYears = ReadNumber("Enter How many Years To Add: ");

	cout << "Adding [" << HowManyYears << "] years is: " << GetDate(IncreaseDateByXYearsFaster(Date, HowManyYears));

	return 0;
}