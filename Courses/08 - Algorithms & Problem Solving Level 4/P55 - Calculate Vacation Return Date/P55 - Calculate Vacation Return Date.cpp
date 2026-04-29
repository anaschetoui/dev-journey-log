/*
P55 - Calculate Vacation Return Date

Write a program to read a vacation start date
and the number of vacation days.

Create a function to calculate the vacation
return date.

The program should ask the user to enter:

Vacation Starts:
- Day
- Month
- Year

Vacation Days:
- Number of vacation days

The weekend in my country is:
- Saturday
- Sunday

Vacation days are counted only on business days.

The program should display the return date.

Example:

Vacation Starts:
Enter a Day: 1
Enter a Month: 1
Enter a Year: 2022

Please enter vacation days: 23

Return Date: Thu, 3/2/2022
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

string GetDayName(short DayOrder)
{
	string Days[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return  Days[DayOrder];
}

short GetDayOrder(stDate Date)
{
	return GetDayOrder(Date.Year, Date.Month, Date.Day);
}

bool isWeekend(stDate Date)
{
	short DayOrder = GetDayOrder(Date);
	return DayOrder == 0 || DayOrder == 6;
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

bool IsBusinessDay(stDate Date)
{
	return !isWeekend(Date);
}

short CalculateActualVacation(stDate StartDate, stDate EndDate)
{
	short Count = 0;
	while (IsDate1LessThanDate2(StartDate, EndDate))
	{
		if (IsBusinessDay(StartDate))
			Count++;

		StartDate = IncreaseDateByOneDay(StartDate);
	}
	return Count;
}

stDate CalculateVacationReturnDate(stDate StartDate, short VactionDays)
{
	short VacationDaysCount = 0;

	while (isWeekend(StartDate)) // case if we start with weekend day
	{
		StartDate = IncreaseDateByOneDay(StartDate);
	}

	while (VacationDaysCount < VactionDays)
	{
		if (IsBusinessDay(StartDate))
			VacationDaysCount++;
		StartDate = IncreaseDateByOneDay(StartDate);
	}

	while (isWeekend(StartDate)) // case if return date is a weekend
	{
		StartDate = IncreaseDateByOneDay(StartDate);
	}

	return StartDate;
}

int ReadNumber(string Message)
{
	int HowManyDays = 0;
	cout << Message;
	cin >> HowManyDays;

	return HowManyDays;

}


int main()
{
	cout << "Vacation Starts:\n";
	stDate StartDate = ReadDate();

	short VactionsDays = ReadNumber("Please enter vacation days: ");

	stDate EndDate = CalculateVacationReturnDate(StartDate, VactionsDays);

	cout << "\n\nReturn Date: " << GetDayName(GetDayOrder(EndDate)) << ", " << GetDate(EndDate) << endl;
	

	return 0;
}