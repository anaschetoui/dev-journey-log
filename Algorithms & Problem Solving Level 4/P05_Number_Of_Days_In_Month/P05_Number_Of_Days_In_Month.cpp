/*Problem:
Write a program to print Number of:
Days Hours  Minutes Seconds in a certain Month.
           @anaschetoui
*/

#include <iostream>
#include <string>

enum enMonthOfYear
{

	January = 1, February = 2, March = 3, April = 4, 
	May = 5, June = 6, July = 7, August = 8,
	September = 9, October = 10, November = 11, December = 12
};

std::string MonthOfYear(enMonthOfYear Month)
{
	switch (Month)
	{
	case enMonthOfYear::January:
		return "January";
	case enMonthOfYear::February:
		return "February";
	case enMonthOfYear::March:
		return "March";
	case enMonthOfYear::April:
		return "April";
	case enMonthOfYear::May:
		return "May";
	case enMonthOfYear::June:
		return "June";
	case enMonthOfYear::July:
		return "July";
	case enMonthOfYear::August:
		return "August";
	case enMonthOfYear::September:
		return "September";
	case enMonthOfYear::October:
		return "October";
	case enMonthOfYear::November:
		return "November";
	case enMonthOfYear::December:
		return "December";

	}
}

int ReadYear(std::string Message = "Enter a Year (1-2099): ")
{
	int Year = 0;

	std::cout << Message;
	std::cin >> Year;

	while ((std::cin.fail() || Year <= 0) || (std::to_string(Year).size() > 4) || Year > 2099) // Validation for positive year 
		// and max year is 2099 (Optional)																							
	{
		system("CLS");
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Number/Year ,Enter a positive Number: ";
		std::cin >> Year;
	}
	return Year;
}

short ReadMonth(std::string Message = "Enter a Month (1-12): ")
{
	short Year = 0;

	std::cout << Message;
	std::cin >> Year;

	while ((std::cin.fail() || Year <= 0)  || Year > 12)																						
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Number/Month ,Enter a positive Number: ";
		std::cin >> Year;
	}
	return Year;
}

bool isLeapYear(short Year)
{
	return  ((Year % 100) == 0) || ((Year % 4) == 0 && ((Year % 100) != 0));
}



short NumberOfDaysInMonth(short Month, short Year)
{
	switch (Month)
	{
	case 1:
		return 31;
	case 2:
		return isLeapYear(Year) ? 29 : 28;
	case 3:
		return 31;
	case 4:
		return 30;
	case 5:
		return 31;
	case 6:
		return 30;
	case 7:
		return 31;
	case 8:
		return 31;
	case 9:
		return 30;
	case 10:
		return 31;
	case 11:
		return 30;
	case 12:
		return 31;
	default:
		return 0;
	}
}

short NumberOfHoursInMonth(short Month, short Year)
{
	return NumberOfDaysInMonth(Month,Year) * 24;
}

int NumberOfMinutesInMonth(short Month, short Year)
{
	return NumberOfHoursInMonth(Month, Year) * 60;
}

int NumberOfSecondsInMonth(short Month, short Year)
{
	return NumberOfMinutesInMonth(Month, Year) * 60;
}

void PrintDaysHoursMinutesSecondsInMonth()
{
	short Year = ReadYear();
	short Month = ReadMonth();

	std::cout << "\n\nNumber Of Days    in " << MonthOfYear(enMonthOfYear(Month)) << " is: " << NumberOfDaysInMonth(Month, Year);
	std::cout << "\nNumber Of Hours   in " << MonthOfYear(enMonthOfYear(Month)) << " is: " << NumberOfHoursInMonth(Month, Year);
	std::cout << "\nNumber Of Minutes in " << MonthOfYear(enMonthOfYear(Month)) << " is: " << NumberOfMinutesInMonth(Month, Year);
	std::cout << "\nNumber Of Seconds in " << MonthOfYear(enMonthOfYear(Month)) << " is: " << NumberOfSecondsInMonth(Month, Year);
	std::cout << "\n\n";
}

int main()
{
	PrintDaysHoursMinutesSecondsInMonth();
	return 0;
}
