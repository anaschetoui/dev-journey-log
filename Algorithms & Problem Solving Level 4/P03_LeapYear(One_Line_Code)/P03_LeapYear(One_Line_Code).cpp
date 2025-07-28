/*Problem:
Write a program to check if year is a leap year or not.

Note:
All years which are perfectly divisible by 4 are leap years except for century years (years ending with 00),
which are leap years only if they are perfectly divisible by 400.
                                       @anaschetoui
*/
#include <iostream>
#include <string>

short ReadYear(std::string Message = "Enter a Year (1-2099): ")
{
	short Year = 0;

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
	return (Year);
}

bool IsLeapYear(short Year)
{
	return ((Year % 400) == 0) ? true : ((Year % 100) == 0) ? false : ((Year % 4) == 0) ? true : false;
}

int main()
{
	short Year = ReadYear();

	IsLeapYear(Year) ? std::cout << "\nYes, Year [" << Year << "] is a leap year.\n" : 
		std::cout << "\nNo, Year [" << Year << "] isn't a leap year.\n";

	return 0;
}
