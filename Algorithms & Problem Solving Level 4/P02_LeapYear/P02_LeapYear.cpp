/*Problem 02:
Write a program to check if year is a leap year or not.

Note :
	All years which are perfectly divisible by 4 are leap years except for century years(years ending with 00),
	which are leap years only if they are perfectly divisible by 400.
	@anaschetoui
*/
#include <iostream>
#include <string>

int ReadYear(std::string Message = "Enter a Year (1-2099): ")
{
	int Year = 0;
	
	std::cout << Message;
	std::cin >> Year;

	while ((std::cin.fail() || Year <= 0) ||(std::to_string(Year).size() > 4) || Year > 2099) // Validation for positive year 
																							 // and max year is 2099 (Optional)																							
	{
		system("CLS");
		std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Number/Year ,Enter a positive Number: ";
		std::cin >> Year;
	}
	return (Year);
}

void IsLeapYear(int Year)
{
	if ((Year % 400) == 0)
	{
		std::cout << "\nYes, Year " << Year << " is a leap Year.\n";
	}
	else if ((Year % 100) == 0)
	{
		std::cout << "\nNo, Year [" << Year << "] is not a leap year.\n";
	}

	else if ((Year % 4) == 0)
	{
		std::cout << "\nYes, Year [" << Year << "] is a leap Year.\n";
	}
	else
	{
		std::cout << "\nNo, Year [" << Year << "] is not a leap year.\n";
	}
}

int main()
{
	int Year = ReadYear();
	IsLeapYear(Year);

	return 0;
}