/*
P35 - Decrease Date By One Week

Write a program to read a date,
then decrease it by one week (7 days).

The program should ask the user to enter:
- A day
- A month
- A year

The program should display the new date after subtracting one week.

Example:

Enter a Day: 5
Enter a Month: 1
Enter a Year: 2023

Date After:
Subtracting one week is: 29/12/2022
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


stDate DecreaseDateByOneWeek(stDate Date)
{
	return DecreaseDateByXDays(Date, 7);
}

int main()
{
	stDate Date = ReadDate();


	cout << "Subtracting One Week is: " << GetDate(DecreaseDateByOneWeek(Date)) << endl;

	return 0;
}