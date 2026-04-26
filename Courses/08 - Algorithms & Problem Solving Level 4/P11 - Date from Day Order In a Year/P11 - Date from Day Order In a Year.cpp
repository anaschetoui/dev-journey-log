/*
P11 - Convert Days to Date

Write a program to calculate the total number of days from the beginning of the year,
then convert the total number of days back to the corresponding date.

The program should ask the user to enter:
- A day
- A month
- A year

The program should:
1. Calculate the total number of days from the beginning of the year.
2. Convert that total number of days back into a date.

Example:

Enter a Day: 20
Enter a Month: 9
Enter a Year: 2022

Number of Days from the beginning of the year is 263

Date for [263] is: 20/9/2022
*/
#include <iostream>
#include <string>
using namespace std;

enum enMonths
{
	January = 1, February = 2, March = 3, April = 4, May = 5, June = 6,
	July = 7, August = 8, September = 9, October = 10, November = 11, December = 12
};

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
		cout << "Invalid Month, Enter a valid one: ";
		cin >> Month;

	}

	return Month;
}

bool isLeapYear(short Year)
{
	return (Year % 400 == 0) || (Year % 100 != 0 && Year % 4 == 0);
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

	cout << "Enter a   Day: ";
	cin >> Day;

	while (Day < 1 || Day > GetDaysInMonth(enMonths(Month), Year))
	{
		cout << "Invalid day, Enter a Valid Day: ";
		cin >> Day;
	}

	return Day;
}

short GetDaysFromBeginningofYear(short Year, short Month, short Day)
{
	short TotalDays = 0;

	for (short i = 1; i < Month; i++)
	{
		TotalDays += GetDaysInMonth(enMonths(i), Year);
	}

	return TotalDays + Day;
}

string GetDate(short Year, short Month, short Day)
{
	return (to_string(Day) + '/' + to_string(Month) + '/' + to_string(Year));
}

string GetDateFromDayOfYear(short Year, short Days)
{
	short RemainingDays = Days;
	short Month = 1;

	short DaysInMonth;
	while (RemainingDays > (DaysInMonth = GetDaysInMonth(enMonths(Month), Year)))
	{
	RemainingDays -= DaysInMonth;
	Month++;
	}
	

	return GetDate(Year, Month, RemainingDays);
}

int main()
{
	short Year = ReadYear(), Month = ReadMonth(), Day = ReadDay(Year, Month);

	short TotalDays = GetDaysFromBeginningofYear(Year, Month, Day);
	cout << "\n\nNumber of Days from the beginning of the year is " << TotalDays;
	cout << "\n\nDate for [" << TotalDays << "] is: " <<GetDateFromDayOfYear(Year,TotalDays);

	system("PAUSE > 0");
	return 0;
}