/*
P19 - Difference Between Two Dates (Positive / Negative)

Write a program to read two dates and create a function to calculate the difference in days.

The program should ask the user to enter:

Date1:
- Day
- Month
- Year

Date2:
- Day
- Month
- Year

The program should display:
- The difference in days.
- The difference in days including the end day.

Notes:
- If Date1 is less than Date2, the difference should be positive.
- If Date2 is less than Date1, the difference should be negative.

Example :

Enter Date1:
Day: 1
Month: 1
Year: 2022

Enter Date2:
Day: 1
Month: 1
Year: 2000

Difference is: -8036 Day(s).
Difference (Including End Day) is: -8037 Day(s).
*/

#include <iostream>
#include <string>
using namespace std;

enum enMonths
{
	January = 1, February = 2, March = 3, April = 4, May = 5, June = 6,
	July = 7, August = 8, September = 9, October = 10, November = 11, December = 12
};

struct stDate
{
	short Year = 0, Month = 0, Day = 0;

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

short GetDaysFromBeginningofYear(stDate Date)
{
	short TotalDays = 0;

	for (short i = 1; i < Date.Month; i++)
	{
		TotalDays += GetDaysInMonth(enMonths(i), Date.Year);
	}

	return TotalDays + Date.Day;
}

stDate ReadDate()
{
	stDate Date;

	Date.Year = ReadYear();
	Date.Month = ReadMonth();
	Date.Day = ReadDay(Date.Year, Date.Month);

	return Date;
}

bool IsDate1LessThanDate2(stDate Date1, stDate Date2)
{
	if (Date1.Year < Date2.Year)
		return true;

	if (Date1.Year > Date2.Year)
		return false;

	return (GetDaysFromBeginningofYear(Date1) < GetDaysFromBeginningofYear(Date2));

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


void SwapDates(stDate& Date1, stDate& Date2)
{
	stDate Temp;
	Temp.Day = Date1.Day;
	Temp.Month = Date1.Month;
	Temp.Year = Date1.Year;

	Date1.Day = Date2.Day;
	Date1.Month = Date2.Month;
	Date1.Year = Date2.Year;

	Date2.Day = Temp.Day;
	Date2.Month= Temp.Month;
	Date2.Year = Temp.Year;

}
int GetDiffrenceInDays(stDate Date1, stDate Date2, bool IncludeDay = false)
{
	int Days = 0;
	short ValueFlag = 1;

	while (!IsDate1LessThanDate2(Date1, Date2))
	{
		SwapDates(Date1, Date2);
		ValueFlag = -1;
	}
	
	while (IsDate1LessThanDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}


	return IncludeDay ? (Days + 1) * ValueFlag : Days * ValueFlag;
}



int main()
{
	stDate Date1, Date2;

	cout << "Date1:\n";
	Date1 = ReadDate();

	cout << "\nDate2:\n";
	Date2 = ReadDate();

	cout << "\nDifference is " << GetDiffrenceInDays(Date1, Date2) << " Day(s).\n";
	cout << "Difference (Including End Day) is " << GetDiffrenceInDays(Date1, Date2, true) << " Day(s).\n";

	return 0;
}