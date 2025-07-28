/*Problem:
Write a program to read a date, and print the day name of week.
                      @anaschetoui
*/

#include <iostream>
#include <string>
#include <cstdio>


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
    short DaysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

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


short FindDayPosition(short Day, short Month, short Year)
{
	short a = (14 - Month) / 12;
	short y = Year - a;
	short m = (Month + (12 * a)) - 2;
	short d = ((Day + y + (y / 4) - (y / 100) + (y / 400) + ((31*m) / 12))) % 7;

	return d;
}

std::string DayName(short DayPosition)
{
    std::string Days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    return Days[DayPosition];
}

int main()
{
	short Year = ReadYear(), Month = ReadMonth(), Day = ReadDay(Year,Month),
		DayPosition = FindDayPosition(Day, Month, Year);

	std::cout << "\nDate      : ";
	printf("%02d\\%02d\\%04d", Day, Month, Year);
	std::cout << "\nDay Order : ";
	printf("%02d",DayPosition+1);
	std::cout << "\nDay Name  : " << DayName(DayPosition);

	return 0;
}