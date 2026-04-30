/*
P62 - Validate Date

Write a program to read a date,
then create a function to determine
whether the entered date is valid or not.

The program should ask the user to enter:

- Day
- Month
- Year

A valid date must satisfy:
- Month is between 1 and 12.
- Day is between 1 and the number of days
  in the given month.
- February has 28 days, or 29 days
  in a leap year.

The program should display whether
the entered date is valid or not.

Examples:

Example 1:

Enter a Day: 35
Enter a Month: 1
Enter a Year: 2022

No, Date is NOT a valid date.


Example 2:

Enter a Day: 29
Enter a Month: 2
Enter a Year: 2022

No, Date is NOT a valid date.


Example 3:

Enter a Day: 29
Enter a Month: 2
Enter a Year: 2000

Yes, Date is a valid date.


Example 4:

Enter a Day: 31
Enter a Month: 4
Enter a Year: 2022

No, Date is NOT a valid date.


Example 5:

Enter a Day: 25
Enter a Month: 15
Enter a Year: 2022

No, Date is NOT a valid date.
*/

#include <iostream>
using namespace std;


short ReadDay()
{
	short Day = 0;
	cout << "Enter a Day: ";
	cin >> Day;

	return Day;
}

short ReadMonth()
{
	short Month = 0;
	cout << "Enter a Month: ";
	cin >> Month;

	return Month;
}

short ReadYear()
{
	short Year = 0;
	cout << "Enter a Year: ";
	cin >> Year;

	return Year;
}

struct stDate
{
	short Day;
	short Month;
	short Year;
};

stDate ReadDate()
{
	stDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
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

bool IsValidDate(stDate Date)
{
	if (Date.Month < 1 || Date.Month > 12)
		return false;

	short DaysInCurrentMonth = GetDaysInMonth(enMonths(Date.Month), Date.Year);
	if (Date.Day > DaysInCurrentMonth || Date.Day <= 0)
		return false;

	return true;
}

int main()
{
	stDate Date = ReadDate();

	IsValidDate(Date) ? cout << "\nYes, Date is a valid date.\n" : cout << "\nNo, Date is NOT a valid date.\n";

	return 0;
}