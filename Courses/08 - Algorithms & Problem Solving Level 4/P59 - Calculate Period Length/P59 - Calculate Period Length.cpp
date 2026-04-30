/*
P59 - Calculate Period Length

Write a program to read a period,
then calculate its length in days.

A period consists of:
- Start Date
- End Date

The program should ask the user to enter:

Period:

Start Date:
- Day
- Month
- Year

End Date:
- Day
- Month
- Year

The program should display:

- Period length (excluding the end date).
- Period length (including the end date).

Example:

Enter Period:

Enter Start Date:
Enter a Day: 1
Enter a Month: 1
Enter a Year: 2022

Enter End Date:
Enter a Day: 5
Enter a Month: 1
Enter a Year: 2022

Period Length is: 4
Period Length (Including End Date) is: 5
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

struct stDate
{
	short Year = 0, Month = 0, Day = 0;

};

stDate ReadDate()
{
	stDate Date;

	Date.Year = ReadYear();
	Date.Month = ReadMonth();
	Date.Day = ReadDay(Date.Year, Date.Month);

	return Date;
}

bool isDate1EqualtoDate2(stDate Date1, stDate Date2)
{
	return Date1.Year == Date2.Year ? (Date1.Month == Date2.Month ?
		(Date1.Day == Date2.Day ? true : false) : false) : false;
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

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	if (Date1.Year < Date2.Year)
		return true;

	if (Date1.Year > Date2.Year)
		return false;

	return (GetDaysFromBeginningofYear(Date1) < GetDaysFromBeginningofYear(Date2));
}




struct stPeriod
{
	stDate StartDate;
	stDate EndDate;
};

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

int GetDiffrenceInDays(stDate Date1, stDate Date2, bool IncludeDay = false)
{
	int Days = 0;

	while (IsDate1BeforeDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}

	return IncludeDay ? Days + 1 : Days;
}

short PeriodLengthInDays(stPeriod Period, bool IncludeEndDateDay =false)
{
	return GetDiffrenceInDays(Period.StartDate, Period.EndDate, IncludeEndDateDay);
}

int main()
{
	stPeriod Period;

	cout << "Enter Period: \n";
	cout << "\nEnter Start Date : \n";
	Period.StartDate = ReadDate();

	cout << "\nEnter End Date: \n";
	Period.EndDate = ReadDate();


	cout << "\nPeriod Length is: " << PeriodLengthInDays(Period) << endl;
	cout << "Period Length (Including End Day) is: " << PeriodLengthInDays(Period, true) << endl;

	return 0;

}