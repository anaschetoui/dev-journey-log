/*
P12 - Add Days to a Date

Write a program to read a date and the number of days to add to it,
then print the resulting date.

The program should ask the user to enter:
- A day
- A month
- A year
- Number of days to add

The program should display the new date after adding the specified number of days.

Example:

Enter a Day: 10
Enter a Month: 10
Enter a Year: 2022

How many days to add: 2500

Date after adding [2500] days is: 14/8/2029
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

string GetDate(short Year, short Month, short Day)
{
	return (to_string(Day) + '/' + to_string(Month) + '/' + to_string(Year));
}
struct stDate
{
	short Year = 0, Month = 0, Day = 0;

};

short GetDaysFromBeginningofYear(short Year, short Month, short Day)
{
	short TotalDays = 0;

	for (short i = 1; i < Month; i++)
	{
		TotalDays += GetDaysInMonth(enMonths(i), Year);
	}

	return TotalDays + Day;
}


stDate ReadDate()
{
	stDate Date;

	Date.Year = ReadYear();
	Date.Month = ReadMonth();
	Date.Day = ReadDay(Date.Year,Date.Month);

	return Date;
}


stDate AddDaysToDate(stDate Date, short DaysToAdd)
{
	short ReminingDays = DaysToAdd + GetDaysFromBeginningofYear(Date.Year, Date.Month, Date.Day);
	short DaysInMonth = 0;

	Date.Month = 1;

	while (ReminingDays > (DaysInMonth = GetDaysInMonth(enMonths(Date.Month),Date.Year)))
	{
		ReminingDays -= DaysInMonth;
		Date.Month++;

		if (Date.Month > December)
		{
			Date.Month = January;
			Date.Year++;
		}
		
	}

	Date.Day = ReminingDays;

	return Date;
	
}

short ReadNumber(string Message)
{
	short Number = 0;
	cout << Message;
	cin >> Number;

	return Number;
}

int main()
{
	stDate Date = ReadDate();
	short HowManyDays = ReadNumber("How many days to add: ");

	Date = AddDaysToDate(Date, HowManyDays);
	cout << "\nDate after adding [" << HowManyDays << "] days is: " << GetDate(Date.Year, Date.Month, Date.Day) << endl;

	return 0;
}