/*Problem 16:
Write a program to read a date and make a function to increase date by one day.
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


short NumberOfDayInMonth(short Month, short Year)
{
	int DayInMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (IsLeapYear(Year))
	{
		DayInMonth[2] = 29;
	}
	return DayInMonth[Month];
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

stDate IncreaseDate(stDate &date)
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

int main()
{
	stDate date = ReadDate();

	IncreaseDate(date);
	
	printf("\nDate after adding one day is: %02d\/%02d\/%04d", date.Day, date.Month, date.Year);

	return 0;
}