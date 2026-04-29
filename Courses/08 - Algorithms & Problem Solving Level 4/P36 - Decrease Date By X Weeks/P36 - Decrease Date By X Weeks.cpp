/*
P36 - Decrease Date By X Weeks

Write a program to read a date
and a number of weeks to subtract from it.

The program should ask the user to enter:
- A day
- A month
- A year
- Number of weeks to subtract

The program should display the new date after subtracting the specified number of weeks.

Example:

Enter a Day: 20
Enter a Month: 3
Enter a Year: 2023

How many weeks to subtract? 5

Date After:
Subtracting [5] weeks is: 13/2/2023
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


stDate DecreaseDateByXWeeks(stDate Date, short HowmanyWeeks)
{
	return DecreaseDateByXDays(Date, 7 * HowmanyWeeks);
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

	short NumberOfWeeks = ReadNumber("How many weeks to subtract:  ");

	cout << "Subtracting [" << NumberOfWeeks << "] Week is: " << GetDate(DecreaseDateByXWeeks(Date, NumberOfWeeks)) << endl;
	return 0;
}