/*
P61 - Count Overlap Days Between Two Periods

Write a program to read two periods,
then calculate the number of overlapping days
between them.

A period consists of:
- Start Date
- End Date

The program should ask the user to enter:

Period 1:

Start Date:
- Day
- Month
- Year

End Date:
- Day
- Month
- Year

Period 2:

Start Date:
- Day
- Month
- Year

End Date:
- Day
- Month
- Year

The program should display the total number
of overlapping days between the two periods.

Example:

Enter Period 1:

Enter Start Date:
Enter a Day: 1
Enter a Month: 1
Enter a Year: 2022

Enter End Date:
Enter a Day: 10
Enter a Month: 1
Enter a Year: 2022

Enter Period 2:

Enter Start Date:
Enter a Day: 5
Enter a Month: 1
Enter a Year: 2022

Enter End Date:
Enter a Day: 30
Enter a Month: 12
Enter a Year: 2050

Overlap Days Count is: 5
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

bool IsDate1AfterDate2(stDate Date1, stDate Date2)
{
	return !IsDate1BeforeDate2(Date1, Date2) && !isDate1EqualtoDate2(Date1, Date2);
}


struct stPeriod
{
	stDate StartDate;
	stDate EndDate;
};

enum enCompare
{
	Before = -1, Equal = 0, After = 1
};

enCompare CompareTwoDates(stDate Date1, stDate Date2)
{
	return IsDate1BeforeDate2(Date1, Date2) ? Before : (IsDate1AfterDate2(Date1, Date2) ? After : Equal);

}

bool isOverlapPeriod(stPeriod Period1, stPeriod Period2)
{

	if (CompareTwoDates(Period1.EndDate, Period2.StartDate) == Before)
		return false;
	if (CompareTwoDates(Period2.EndDate, Period1.StartDate) == Before)
		return false;

	return true;
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

bool IsDateWithinPeriod(stPeriod Period, stDate DateToCheck)
{
	return !(CompareTwoDates(Period.StartDate, DateToCheck) == After || CompareTwoDates(Period.EndDate, DateToCheck) == Before);
}

short PeriodLengthInDays(stPeriod Period, bool IncludeEndDateDay = false)
{
	return GetDiffrenceInDays(Period.StartDate, Period.EndDate, IncludeEndDateDay);
}

short CountOverLapInTwoPeriods(stPeriod Period1, stPeriod Period2)
{
	short  Count = 0;
	int Period1Length = PeriodLengthInDays(Period1);
	int Period2Length = PeriodLengthInDays(Period2);

	while (!isOverlapPeriod(Period1, Period2))
		return 0;

	if (Period1Length < Period2Length)
		while (IsDate1BeforeDate2(Period1.StartDate, Period1.EndDate))
		{
			if (IsDateWithinPeriod(Period2, Period1.StartDate))
				Count++;

			Period1.StartDate = IncreaseDateByOneDay(Period1.StartDate);
		}

	else
		while (IsDate1BeforeDate2(Period2.StartDate, Period2.EndDate))
		{
			if (IsDateWithinPeriod(Period1, Period2.StartDate))
				Count++;

			Period2.StartDate = IncreaseDateByOneDay(Period2.StartDate);
		}

	return Count;
}


int main()
{
	stPeriod Period1, Period2;

	cout << "Enter Period 1: \n";
	cout << "\nEnter Start Date : \n";
	Period1.StartDate = ReadDate();

	cout << "\nEnter End Date: \n";
	Period1.EndDate = ReadDate();

	cout << "\nEnter Period 2: \n";
	cout << "\nEnter Start Date : \n";
	Period2.StartDate = ReadDate();

	cout << "\nEnter End Date: \n";
	Period2.EndDate = ReadDate();

	cout << "\nOverlap Days Count is: " << CountOverLapInTwoPeriods(Period1, Period2) << endl;

	return 0;

}