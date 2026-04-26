/*
P07 - Day of Week

Write a program to read a date and print the day name of the week.

The program should ask the user to enter:
- A year
- A month
- A day

Use the Gregorian calendar formula:

a = (14 - month) / 12

y = year - a

m = month + (12 * a) - 2

d = (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7

Day order:

--------------------------------
| Day Order | Day Name         |
--------------------------------
|     0     | Sunday           |
|     1     | Monday           |
|     2     | Tuesday          |
|     3     | Wednesday        |
|     4     | Thursday         |
|     5     | Friday           |
|     6     | Saturday         |
--------------------------------

Example:

Enter a year: 2022
Enter a month: 9
Enter a day: 20

Date      : 20/9/2022
Day Order : 2
Day Name  : Tue
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

	while (Day < 1 || Day > GetDaysInMonth(enMonths(Month),Year))
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

short GetDayOrder(short Year, short Month, short Day)
{
	short a = (14 - Month) / 12,
		y = Year - a,
		m = Month + (12 * a) - 2,
		d = ((Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7);

	return d;
}

string GetDayName(short DayOrder)
{
	string Days[7] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return  Days[DayOrder];
}

int main()
{
	short Year = ReadYear(), Month = ReadMonth(), Day = ReadDay(Year, Month);

	string Date = GetDate(Year, Month, Day);
	short DayOrder = GetDayOrder(Year, Month, Day);
	string DayName = GetDayName(DayOrder);

	cout << "\n\n";
	cout << "Date      : " << Date << '\n';
	cout << "Day Order : " << DayOrder << '\n';
	cout << "Day Name  : " << DayName;

	system("PAUSE > 0");
	return 0;
}