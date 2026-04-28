/*
P22 - Increase Date By X Weeks

Write a program to read a date and a number of weeks,
then increase the date by the specified number of weeks.

The program should ask the user to enter:
- A day
- A month
- A year
- Number of weeks to add

The program should display the new date after adding the specified number of weeks.

Example:

Enter a Day: 31
Enter a Month: 12
Enter a Year: 2022

How many weeks to add? 10

Date After:
Adding [10] weeks is: 11/3/2023
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

stDate IncreaseDateByOneDay(stDate Date)
{
	if (isLastDayInMonth(Date))
	{
		if (isLastMonthInYear(Date.Month))
		{
			Date.Year++;
			Date.Month = 1;
			Date.Day = 1;
		}
		else
		{
			Date.Month++;
			Date.Day = 1;
		}
	}
	else
		Date.Day++;

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

stDate IncreaseDateByXDay(stDate Date, int HowManyDays)
{
	for (int i = 0; i < HowManyDays; i++)
		Date = IncreaseDateByOneDay(Date);

	return Date;
}

stDate IncreaseDateByOneWeek(stDate Date)
{
	return IncreaseDateByXDay(Date, 7);
}

stDate IncreaseDateByXWeeks(stDate Date, short NumberOfWeeks)
{
	/*for (int i = 0; i < NumberOfWeek; i++)
		Date = IncreaseDateByOneWeek(Date);
	return Date;*/

	return IncreaseDateByXDay(Date, NumberOfWeeks * 7);
}

int main()
{
	stDate Date = ReadDate();
	short NumberOfWeeks = ReadNumber("Enter How many Week To Add: ");

	cout << "Date after adding ["<<NumberOfWeeks<<"] Week is: " << GetDate(IncreaseDateByXWeeks(Date, NumberOfWeeks)) << endl;

	return 0;
}