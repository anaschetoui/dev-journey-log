/*Problem 08:
Write a program to print Year Calendar.
				@anaschetoui
*/

#include <iostream>
#include <string>
#include <iomanip>


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

bool IsLeapYear(short Year)
{
	return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));
}

short FindDayPosition(short Day, short Month, short Year)
{
	short a = (14 - Month) / 12;
	short y = Year - a;
	short m = (Month + (12 * a)) - 2;
	short d = ((Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12))) % 7;

	return d;
}

void CalendarHeader(short Year)
{
	std::cout << std::string(35, '=');
	std::cout << "\n\t  Calendar - " << Year << "\n";
	std::cout << std::string(35, '=')<<"\n\n";
}

std::string MonthName(short MonthNumber)
{
	std::string Month[13] = { "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
		"Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

	return Month[MonthNumber];
}

short NumberOfDayInMonth(short Month, short Year)
{
	int DayInMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (IsLeapYear(Year))
	{
		DayInMonth[3] = 29;
	}
	return DayInMonth[Month];
}
void MonthCalendarHeader(short Month)
{
	std::cout << std::string(16, '_') << MonthName(Month) << std::string(16, '_');
	std::cout << "\n\n";
	std::cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";
}

void PrintMonthCalendar(short Month, short Year)
{
	short DayPos = FindDayPosition(1, Month, Year);
	MonthCalendarHeader(Month);
	short NumberOfDays = NumberOfDayInMonth(Month, Year);
	short Counter = 0;

	for (Counter = 0; Counter < DayPos; Counter++)
	{
		std::cout << "     ";
	}
	for (short i = 1; i <= NumberOfDays; i++)
	{
		std::cout << std::setw(5) << i;
		if (++Counter == 7)
		{
			Counter = 0;
			std::cout << "\n";
		}
	}
	std::cout << "\n"<<std::string(36, '_');
}

void PrintYearCalendar(short Year)
{
	CalendarHeader(Year);
	for (short i = 1; i <= 12; ++i)
	{
		PrintMonthCalendar(i, Year);
		std::cout << "\n\n";
	}
}

int main()
{
	short Year = ReadYear();
	
	PrintYearCalendar( Year);
	return 0;
}
