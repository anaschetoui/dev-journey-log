/*
P06 - Number of Days in a Month

Write a program to print the number of days in a certain month.

The program should ask the user to enter:
- A year
- A month

Note:
Use one-line logic.

Then replace the solution with two lines of code.

Examples:

Enter a year to check: 2000
Enter a month to check: 2

Number of Days in Month [2] is 29


Enter a year to check: 1971
Enter a month to check: 2

Number of Days in Month [2] is 28
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

	cout << "Enter a Year  to check: ";
	cin >> Year;

	return Year;
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


bool isLeapYear(short Year)
{
	return (Year % 400 == 0) || (Year % 100 != 0 && Year % 4 == 0);
}

short GetDaysInMonth(enMonths Month, short Year)
{
	return Month == enMonths::February ? (isLeapYear(Year) ? 29 : 28) :
		((Month == enMonths::April || Month == enMonths::June || Month == enMonths::September || Month == enMonths::November) ? 30 : 31);
}

int main()
{
	short Year = ReadYear();
	enMonths Month = ReadMonth();

	short DaysInMonth = GetDaysInMonth(Month, Year);

	system("CLS");
	cout << "Number Of Days in Month [" << Month << "] is " << DaysInMonth;

	system("PAUSE > 0");
	return 0;
}