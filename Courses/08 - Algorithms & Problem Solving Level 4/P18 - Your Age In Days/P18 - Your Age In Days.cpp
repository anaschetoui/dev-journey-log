/*
P18 - Your Age in Days

Write a program to calculate your age in days.

The program should ask the user to enter:
- Date of Birth:
  - Day
  - Month
  - Year

The program should calculate and display the age in days.

Example:

Please Enter Your Date of Birth:

Enter a Day: 6
Enter a Month: 11
Enter a Year: 1977

Your Age is: 16391 Day(s).
*/


#include <iostream>
#include <string>
#include <ctime>
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

int GetDiffrenceInDays(stDate Date1, stDate Date2, bool IncludeDay = false)
{
	int Days = 0;

	while (IsDate1LessThanDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}

	return IncludeDay ? Days + 1 : Days;
}

stDate CurrentDate()
{
	stDate Date;

	time_t t = time(0);
	tm now;
	localtime_s(&now, &t);   

	Date.Day = now.tm_mday;
	Date.Month = now.tm_mon + 1;   
	Date.Year = now.tm_year + 1900; 

	return Date;
}


int CalculateAgeInDays(stDate Birthday)
{
	stDate Today = CurrentDate();

	return GetDiffrenceInDays(Birthday, Today,true);
}

int main()
{
	stDate Birthday = ReadDate();

	cout << "Your Age In Days is " << CalculateAgeInDays(Birthday) << " Days.\n";


	return 0;
}