/*
P04 - Number of Days, Hours, Minutes and Seconds in a Month

Write a program to print the number of:

- Days
- Hours
- Minutes
- Seconds
in a certain month.

The program should ask the user to enter:
- A year
- A month

Examples:

Enter a year to check: 2000
Enter a month to check: 2

Number of Days    in Month [2] is 29
Number of Hours   in Month [2] is 696
Number of Minutes in Month [2] is 41760
Number of Seconds in Month [2] is 2505600


Enter a year to check: 1971
Enter a month to check: 2

Number of Days    in Month [2] is 28
Number of Hours   in Month [2] is 672
Number of Minutes in Month [2] is 40320
Number of Seconds in Month [2] is 2419200
*/

#include <iostream>
#include <string>
using namespace std;

short ReadYear()
{
	short Year = 0;

	cout << "Enter a Year  to check: ";
	cin >> Year;

	return Year;
}

enum enMonths
{
	January = 1, February = 2, March = 3, April = 4, May = 5, June = 6,
	July = 7, August = 8, September = 9, October = 10, November = 11, December = 12
};

bool isLeapYear(short Year)
{
	return (Year % 400 == 0) || (Year % 100 != 0 && Year % 4 == 0);
}

enMonths ReadMonth()
{
	short Month = 0;

	cout << "Enter a Month to check: ";
	cin >> Month;

	while (Month < 1 || Month > 12)
	{
		cout << "Invalid Month, Enter a valid one [1-12]: ";
		cin >> Month;
	}

	return enMonths(Month);
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

short GetHoursInMonth(enMonths Month, short Year)
{
	return GetDaysInMonth(Month, Year) * 24;
}

int GetMinutesInMonth(enMonths Month, short Year)
{
	return GetHoursInMonth(Month, Year) * 60;
}

int GetSecondsInMonth(enMonths Month, short Year)
{
	return GetMinutesInMonth(Month, Year) * 60;
}

int main()
{
	short Year = ReadYear();
	enMonths Month = ReadMonth();

	short DaysInMonth = GetDaysInMonth(Month, Year);
	short HoursInMonth = GetHoursInMonth(Month, Year);
	int MinutesInMonth = GetMinutesInMonth(Month, Year);
	int SecondsInMonth = GetSecondsInMonth(Month, Year);


	system("CLS");
	cout << "Number Of Days    in Month [" << Month << "] is " << DaysInMonth << '\n';
	cout << "Number Of Hours   in Month [" << Month << "] is " << HoursInMonth << '\n';
	cout << "Number Of Minutes in Month [" << Month << "] is " << MinutesInMonth << '\n';
	cout << "Number Of Seconds in Month [" << Month << "] is " << SecondsInMonth << '\n';


	system("PAUSE > 0");
	return 0;
}
