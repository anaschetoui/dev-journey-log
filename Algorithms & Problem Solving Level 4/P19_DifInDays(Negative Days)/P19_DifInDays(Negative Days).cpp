/*Problem 01:
Write a program to read a Date1, Date2 and make a function to calculate the difference in days.
Note: if date2 is less than date1 print the results in Minutes
					@anaschetoui
*/
#include <iostream>
#include <string>

int ReadYear(std::string Message = "Enter a Year : ")
{
	int Year = 0;

	std::cout << Message;
	std::cin >> Year;

	while ((std::cin.fail() || Year <= 0) || (std::to_string(Year).size() > 4) || Year > 2999)
	{
		system("CLS");
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Number/Year ,Enter a positive Number: ";
		std::cin >> Year;
	}
	return Year;
}

short ReadMonth(std::string Message = "Enter a Month : ")
{
	short Month = 0;

	std::cout << Message;
	std::cin >> Month;

	while (std::cin.fail() || (Month <= 0 || Month > 12))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Number/Month ,Enter a positive Number: ";
		std::cin >> Month;
	}
	return Month;
}

bool IsLeapYear(short Year)
{
	return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));
}

short ReadDay(short Year, short Month, std::string Message = "Enter a Day : ")
{
	short Day = 0;
	short DaysInMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (Month == 2 && IsLeapYear(Year))
	{
		DaysInMonth[2] = 29;
	}

	std::cout << Message;
	std::cin >> Day;

	while (std::cin.fail() || Day <= 0 || Day > DaysInMonth[Month])
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Day, Enter a valid day for this month/year:  ";
		std::cin >> Day;
	}
	return Day;
}

struct stDate
{
	short Year = 0;
	short Month = 0;
	short Day = 0;

};

stDate ReadDate()
{
	stDate date;
	date.Year = ReadYear();
	date.Month = ReadMonth();
	date.Day = ReadDay(date.Year, date.Month);
	return date;
}


short NumberOfDayInMonth(short Month, short Year)
{
	int DayInMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (IsLeapYear(Year))
	{
		DayInMonth[2] = 29;
	}
	return DayInMonth[Month];
}

short HowManyDaysInThisYear(short Day, short Month, short Year)
{
	short NumberDaysInYear = 0;
	for (short i = 1; i < Month; i++)
	{
		NumberDaysInYear += NumberOfDayInMonth(i, Year);
	}

	return NumberDaysInYear += Day;
}

stDate IncreaseDate(stDate& date)
{
	if (date.Day == NumberOfDayInMonth(date.Month, date.Year) && date.Month == 12)
	{
		date.Day = 1, date.Month = 1, date.Year++;
	}
	else if (date.Day == NumberOfDayInMonth(date.Month, date.Year))
	{
		date.Day = 1, date.Month++;
	}
	else
		date.Day++;

	return date;
}

bool IsDate1LessThanDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ||
		(Date1.Year == Date2.Year && Date1.Month < Date2.Month) ||
		(Date1.Year == Date2.Year && Date1.Month == Date2.Month && Date1.Day < Date2.Day);
}

void SwapDate(stDate &Date1, stDate &Date2)
{
	stDate TempDate;

	TempDate.Day = Date1.Day;
	TempDate.Month = Date1.Month;
	TempDate.Year = Date1.Year;

	Date1.Day = Date2.Day;
	Date1.Month = Date2.Month;
	Date1.Year = Date2.Year;

	Date2.Day = TempDate.Day;
	Date2.Month = TempDate.Month;
	Date2.Year = TempDate.Year;

	
}

int TatalDaysSupportMinis(stDate date1, stDate date2,bool includeEndDay = false)
{
	int days = 0;
	short EndDay = 1;
	if (!IsDate1LessThanDate2(date1, date2))
	{
		SwapDate(date1, date2);
		EndDay = -1;
	}

	while (IsDate1LessThanDate2(date1, date2))
	{
		days++;
		date1 = IncreaseDate(date1);
	}

	return includeEndDay ? ++days *EndDay  : days*EndDay;
}

int main()
{
	std::cout << "Date1\n";
	stDate date1 = ReadDate();
	std::cout << "Date2\n";
	stDate date2 = ReadDate();

	std::cout << "\nDiffrence is: " << TatalDaysSupportMinis(date1, date2) << " Day(s).\n";
	std::cout << "\nDifference (Including End Day) is: " << TatalDaysSupportMinis(date1, date2,true) << " Days(s)\n";
	return 0;
}