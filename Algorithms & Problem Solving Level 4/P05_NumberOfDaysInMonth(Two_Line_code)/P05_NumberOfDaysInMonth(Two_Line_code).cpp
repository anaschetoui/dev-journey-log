/*Problem:
Write a program to print Number of:
Days a certain Month. (two Line Logic)
		   @anaschetoui
*/

#include <iostream>
#include <string>

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

	while (std::cin.fail() || (Year <= 0 || Year > 12))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Number/Month ,Enter a positive Number: ";
		std::cin >> Year;
	}
	return Year;
}

bool IsLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInMonth(short Month, short Year)
{
    int DaysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : DaysInMonth[Month - 1];
}

int main()
{
	short Year = ReadYear(), Month = ReadMonth();

	std::cout << "Number Of Days in Month " << " is: " << NumberOfDaysInMonth(Month, Year);

	return 0;
}