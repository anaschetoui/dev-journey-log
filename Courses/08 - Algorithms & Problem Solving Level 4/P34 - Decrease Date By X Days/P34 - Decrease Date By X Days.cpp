/*
P34 - Decrease Date By X Days

Write a program to read a date
and a number of days to subtract from it.

The program should ask the user to enter:
- A day
- A month
- A year
- Number of days to subtract

The program should display the new date after subtracting the specified number of days.

Example:

Enter a Day: 31
Enter a Month: 12
Enter a Year: 2022

How many days to subtract? 10

Date After:
Subtracting [10] days is: 21/12/2022
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



stDate DecreaseDateByOneDay(stDate Date)
{
	if (Date.Day == 1)
	{
		if (Date.Month == January)
		{
			Date.Year--;
			Date.Month = December;
			Date.Day = 31;
		}
		else
		{
			Date.Month--;
			Date.Day = GetDaysInMonth(enMonths(Date.Month), Date.Year);
		}
	}
	else
		Date.Day--;

	return Date;
}

stDate DecreaseDateByXDays(stDate Date, short HowManyDays)
{
	for (short i = 0; i < HowManyDays; i++)
		Date = DecreaseDateByOneDay(Date);

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

int main()
{
	stDate Date = ReadDate();
	short HowManyDays = ReadNumber("How many days to subtract: ");

	cout << "Subtracting ["<<HowManyDays<<"] day is: " << GetDate(DecreaseDateByXDays(Date,HowManyDays)) << endl;

	return 0;
}