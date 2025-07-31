/*Problem 20:
Write a program to read a date and make functions to increase date as follows:
IncreaseDateByXDays | IncreaseDateByOneWeek | IncreaseDateByXWeeks | IncreaseDateByOneMonth | IncreaseDateByXMonths 
IncreaseDateByOneYear | IncreaseDateByXYears | IncreaseDateByXYearsFaster | IncreaseDateByOneDecade 
IncreaseDateByXDecades | IncreaseDateByXDecadesFaster | IncreaseDateByOneCentury | IncreaseDateByOneMillennium
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

stDate IncreaseDateByOneDay(stDate &date)
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

stDate IncreaseDateByXDays(stDate& date, short x = 10)
{
	for (short i = 0; i < x; i++)
	{
		IncreaseDateByOneDay(date);
	}
	return date;
}

stDate IncreaseDateByOneWeek(stDate& date)
{

	for (short i = 0; i < 7; i++)
	{
		IncreaseDateByOneDay(date);
	}
	return date;
}

stDate IncreaseDateByXWeeks(stDate& date, short x = 10)
{
	for (short i = 0; i < x; i++)
	{
		IncreaseDateByOneWeek(date);
	}
	return date;
}

stDate IncreaseDateByOneMonth(stDate& date)
{
	short daysInCurrentMonth = NumberOfDayInMonth(date.Month, date.Year);

	for (short i = 0; i < daysInCurrentMonth; i++)
	{
		IncreaseDateByOneDay(date);
	}
	return date;
}

stDate IncreaseDateByXMonths(stDate& date, short x = 5)
{
	for (short i = 0; i < x; i++)
		IncreaseDateByOneMonth(date);
	return date;
}

stDate IncreaseDateByOneYear(stDate& date)
{
    
    if (date.Month == 2 && date.Day == 29) 
	{
        date.Year++;
        
        if (!IsLeapYear(date.Year))
		{
            date.Day = 28; 
        }
    } 

	else 
	{
        date.Year++;
    }
    return date;
}

stDate IncreaseDateByXYears(stDate& date ,short x = 10)
{
	for (short i = 0; i < x; i++)
	{
		IncreaseDateByOneYear(date);
	}
	return date;
}

stDate IncreaseDateByXYearsFaster(stDate& date, short x = 10)
{
	for (short i = 0; i < x; i++)
		date.Year++;
	return date;
}

stDate IncreaseDateByOneDecade(stDate& date)
{
	IncreaseDateByXYearsFaster(date);
	return date;
}

stDate IncreaseDateByXDecades(stDate& date, short x = 10)
{
	for (short i = 0; i < x; i++)
		IncreaseDateByOneDecade(date);
	return date;
}

stDate IncreaseDateByXDecadesFaster(stDate& date, short x = 10)
{
	date.Year += x*10;
	return date;
}

stDate IncreaseDateByOneCentury(stDate& date)
{
	IncreaseDateByXDecadesFaster(date, 10);
	return date;
}

stDate IncreaseDateByOneMillennium(stDate& date)
{
	IncreaseDateByXDecadesFaster(date, 100);
	return date;
}

int main()
{
    stDate Date1 = ReadDate();

    std::cout << "Date After:\n\n";
    IncreaseDateByOneDay(Date1);
    std::cout << "01-Adding one day is: " << Date1.Day << "/" << Date1.Month
        << "/" << Date1.Year << std::endl;

    IncreaseDateByXDays(Date1);
    std::cout << "02-Adding 10 Days is: " << Date1.Day << "/" << Date1.Month
        << "/" << Date1.Year << std::endl;

    IncreaseDateByOneWeek(Date1);
    std::cout << "03-Adding One Week is: " << Date1.Day << "/" << Date1.Month
        << "/" << Date1.Year << std::endl;

    IncreaseDateByXWeeks(Date1);
    std::cout << "04-Adding 10 Weeks is: " << Date1.Day << "/" << Date1.Month
        << "/" << Date1.Year << std::endl;

    IncreaseDateByOneMonth(Date1);
    std::cout << "05-Adding One Month is: " << Date1.Day << "/" << Date1.Month
        << "/" << Date1.Year << std::endl;

    IncreaseDateByXMonths(Date1);
    std::cout << "06-Adding 5 Month is: " << Date1.Day << "/" << Date1.Month
        << "/" << Date1.Year << std::endl;

    IncreaseDateByOneYear(Date1);
    std::cout << "07-Adding One Year is: " << Date1.Day << "/" << Date1.Month
        << "/" << Date1.Year << std::endl;

	IncreaseDateByXYears(Date1);
    std::cout << "08-Adding 10 Year is: " << Date1.Day << "/" << Date1.Month
        << "/" << Date1.Year << std::endl;

	IncreaseDateByXYearsFaster(Date1);
	std::cout << "09-Adding 10 Year (Faster) is: " << Date1.Day << "/" << Date1.Month
		<< "/" << Date1.Year << std::endl;

	IncreaseDateByOneDecade(Date1);
	std::cout << "10-Adding One Decade is: " << Date1.Day << "/" << Date1.Month
		<< "/" << Date1.Year << std::endl;
	IncreaseDateByXDecades(Date1);
	std::cout << "11-Adding 10 Decades is: " << Date1.Day << "/" << Date1.Month
		<< "/" << Date1.Year << std::endl;
	IncreaseDateByXDecadesFaster(Date1);
	std::cout << "12-Adding 10 Decades Faster is: " << Date1.Day << "/" << Date1.Month
		<< "/" << Date1.Year << std::endl;

	IncreaseDateByOneCentury(Date1);
		std::cout << "13-Adding One Century is: " << Date1.Day << "/" << Date1.Month
		<< "/" << Date1.Year << std::endl;

		IncreaseDateByOneMillennium(Date1);
		std::cout << "14-Adding One Millennium is: " << Date1.Day << "/" << Date1.Month
			<< "/" << Date1.Year << std::endl;

    return 0;
}