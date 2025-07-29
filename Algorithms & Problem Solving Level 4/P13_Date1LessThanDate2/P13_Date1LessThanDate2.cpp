/*Problem 13:
Write a program to read date1, date2 and check if Date1 is Less than Date2
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

bool IsDate1LessThanDate2(stDate Date1, stDate Date2)
{
	if (Date1.Year > Date2.Year)
	{
		return true;
	}
	else if (Date1.Year > Date2.Year)
	{
		return false;
	}
	else if (Date1.Month < Date2.Month)
	{
		return true;
	}
	else if (Date1.Month > Date2.Month)
	{
		return false;
	}
	else if (Date1.Day < Date2.Day)
	{
		return true;
	}
	else
		return false;
}


int main()
{
	stDate Date1, Date2;
	std::cout << "Date1:\n";
	Date1.Year = ReadYear(),Date1.Month = ReadMonth(),Date1.Day = ReadDay(Date1.Year, Date1.Month);
	std::cout << "\nDate2:\n";
	Date2.Year = ReadYear(),Date2.Month = ReadMonth(), Date2.Day = ReadDay(Date2.Year, Date2.Month);
	
	(IsDate1LessThanDate2(Date1, Date2)) ? std::cout << "\n\nYes, Date1 Less than Date2.\n" : 
		std::cout << "No, Date1 Not Less than Date2.\n";
	
	return 0;
}