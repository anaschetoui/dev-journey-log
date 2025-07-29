/*Problem 08:
Write a program to print Month Calendar.
				@anaschetoui
*/

#include <iostream>
#include <string>
#include <iomanip>

short ReadYear(std::string Message = "Enter a Year: ")
{
	short Year = 0;

	std::cout << Message;
	std::cin >> Year;

	while (std::cin.fail() || (Year <= 0|| Year >3000) || std::to_string (Year).size()>4)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Year/Number, Enter a valid Year :  ";
		std::cin >> Year;
	}

	return Year;
}

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short ReadMonth(std::string Message = "Enetr a Month: ")
{
	short Month = 0;

	std::cout << Message;
	std::cin >> Month;

	while (std::cin.fail() || (Month <= 0 || Month > 12))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "Invalid Month/Number, Enter a valid Month :  ";
		std::cin >> Month;
	}
	return Month;
}

std::string MonthName(short MonthNumber)
{
    std::string Month[13] = { "", "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
		"Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

	return Month[MonthNumber];
}

short FindDayPosition(short Day, short Month, short Year)
{
	short a = (14 - Month) / 12;
	short y = Year - a;
	short m = (Month + (12 * a)) - 2;
	short d = ((Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12))) % 7;

	return d;
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

std::string DayName(short NumberOfday)
{
	std::string Day[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return Day[NumberOfday];
}
void CalendarHeader(short Month)
{
	
	std::cout << std::string(16, '_') << MonthName(Month) << std::string(16, '_');
	std::cout << "\n\n";
	std::cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";

}

void PrintCalendar(short Month,short Year)
{

	CalendarHeader(Month);
	short NumberOfDay = NumberOfDayInMonth(Month, Year);
	short DayPos = FindDayPosition(1, Month, Year);
	std::cout << '\n';
	short Counter = 0;
		for (Counter = 0; Counter < DayPos; Counter++)
		{	
			std::cout << "     ";	
		}
		for (short i = 1; i <= NumberOfDay; i++)
		{
			std::cout << std::setw(5) << i;
			if(++Counter == 7)
			{
				Counter = 0;
				 std::cout<<'\n';
			}

		}
		std::cout << "\n" << std::string(36, '_') << "\n";
}

int main()
{
	short Month = ReadMonth(), Year = ReadYear();
	PrintCalendar(Month,Year);

	return 0;
}