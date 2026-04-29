/*
P47 - Overload Day Of Week Order

Write a program to overload the DayOfWeekOrder function
so it can accept a date structure (stDate) instead of
separate day, month, and year parameters.

The program should ask the user to enter:
- A day
- A month
- A year

The program should display the day order of the entered date.

Example:

Enter a Day: 23
Enter a Month: 9
Enter a Year: 2022

Day Order is: 5
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


short GetDayOrder(short Year, short Month, short Day)
{
	short a = (14 - Month) / 12,
		y = Year - a,
		m = Month + (12 * a) - 2,
		d = ((Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7);

	return d;
}

short GetDayOrder(stDate Date)
{
	return GetDayOrder(Date.Year, Date.Month, Date.Day);
}



int main()
{
	stDate Date = ReadDate();

	cout << "\nDay Order is: " << GetDayOrder(Date) << endl;
	
	return 0;
}