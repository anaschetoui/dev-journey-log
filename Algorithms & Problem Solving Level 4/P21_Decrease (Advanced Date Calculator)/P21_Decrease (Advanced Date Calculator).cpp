/*Problem 21:
Write a program to read a date and make functions to increase date as follows:
decreaseDateByXDays | decreaseDateByOneWeek | decreaseDateByXWeeks | decreaseDateByOneMonth | decreaseDateByXMonths
decreaseDateByOneYear | decreaseDateByXYears | decreaseDateByXYearsFaster | decreaseDateByOneDecade
decreaseDateByXDecades | decreaseDateByXDecadesFaster | decreaseDateByOneCentury | decreaseDateByOneMillennium
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

stDate DecreaseDateByOneDay(stDate date)
{
	if (date.Month == 1 && date.Day == 1)
	{
		date.Month = 12;
		date.Day = NumberOfDayInMonth(date.Month, date.Year);
		date.Year--;
	}
	else if (date.Day == 1)
	{
		date.Month--;
		date.Day = NumberOfDayInMonth(date.Month, date.Year);
	}
	else
		date.Day--;
	

	return date;
}

stDate DecreaseDateByXDays(stDate date,short x)
{
	for (short i = 0; i < x; i++)
	{
		date=DecreaseDateByOneDay(date);
	}

	return date;
}

stDate DecreaseDateByOneWeek(stDate date)
{
	for (short i = 0; i < 7; i++)
		date=DecreaseDateByOneDay(date);

	return date;
}

stDate DecreaseDateByXWeeks(stDate date,short x)
{
	for (short i = 0; i < x; i++)
		date=DecreaseDateByOneWeek(date);

	return date;
}

stDate DecreaseDateByOneMonth(stDate date)
{
	(date.Month == 1)?date.Month = 12:	date.Month--;
	short DaysInCurrentMonth = NumberOfDayInMonth(date.Month, date.Year);
	if(date.Day > DaysInCurrentMonth)
		date.Day = DaysInCurrentMonth;

	return date;
}

stDate DecreaseDateByXMonths(stDate date, short x)
{
	for (short i = 0; i < x; i++)
	{
		date = DecreaseDateByOneMonth(date);
	}
	return date;
}

stDate DecreaseDateByOneYear(stDate date)
{
	date.Year--;
	return date;
}

stDate DecreaseDateByXYears(stDate date,short x)
{
	for (short i = 0; i < x; i++)
		date = DecreaseDateByOneYear(date);

	return date;	
}

stDate DecreaseDateByXYearsFaster(stDate date, short x)
{
	date.Year -= x;
	return date;
}

stDate DecreaseDateByOneDecade(stDate date)
{
	date = DecreaseDateByXYears(date, 10);
	return date;
}

stDate DecreaseDateByXDecades(stDate date, short x)
{
	for (short i = 0; i < x; i++)
		date=DecreaseDateByOneDecade(date);

	return date;
}

stDate DecreaseDateByXDecadesFaster(stDate date, short x)
{
	date.Year -= x * 10;

	return date;
}

stDate DecreaseDateByOneCentury(stDate date)
{
	date.Year -= 100;

	return date;
}

stDate DecreaseDateByOneMillennium(stDate date)
{
	date.Year -= 1000;

	return date;
}


int main()
{
	stDate Date1 = ReadDate();

	std::cout << "\n\nDay After: \n\n";

	Date1 = DecreaseDateByOneDay(Date1);
	std::cout << "01-After Decrease One day: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << std::endl;

	Date1 = DecreaseDateByXDays(Date1, 10);
	std::cout << "02-After Decrease 10 day: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << std::endl;

	Date1 = DecreaseDateByOneWeek(Date1);
    std::cout << "03-After Decrease One week: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << std::endl;

	Date1 = DecreaseDateByXWeeks(Date1, 10);
    std::cout << "04-After Decrease 10 weeks: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << std::endl;

	Date1 = DecreaseDateByOneMonth(Date1);
	std::cout << "05-After Decrease One Month: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << std::endl;

    Date1 = DecreaseDateByXMonths(Date1, 5);
    std::cout << "06-After Decrease 5 Months: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << std::endl;

    Date1 = DecreaseDateByOneYear(Date1);
    std::cout << "07-After Decrease One Year: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << std::endl;

    Date1 = DecreaseDateByXYears(Date1, 10);
    std::cout << "08-After Decrease 10 Years: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << std::endl;

    Date1 = DecreaseDateByXYearsFaster(Date1, 10);
    std::cout << "09-After Decrease 10 Years (Faster): " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << std::endl;

    Date1 = DecreaseDateByOneDecade(Date1);
    std::cout << "10-After Decrease One Decade: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << std::endl;

    Date1 = DecreaseDateByXDecades(Date1, 10);
    std::cout << "11-After Decrease 10 Decades: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << std::endl;

    Date1 = DecreaseDateByXDecadesFaster(Date1, 10);
    std::cout << "12-After Decrease 10 Decades (Faster): " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << std::endl;

    Date1 = DecreaseDateByOneCentury(Date1);
    std::cout << "13-After Decrease One Century: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << std::endl;

    Date1 = DecreaseDateByOneMillennium(Date1);
    std::cout << "14-After Decrease One Millennium: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << std::endl;

	return 0;
}