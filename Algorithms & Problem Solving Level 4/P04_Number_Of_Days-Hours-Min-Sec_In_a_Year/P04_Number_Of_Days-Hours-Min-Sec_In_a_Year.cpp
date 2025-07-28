/*Problem 04:
Write a program to print Number of:

    Days Hours  Minutes  Seconds in a certain Year.
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

struct stYearCaluclation {
	short Days = 0;
	short Hours = 0;
	int Minutes = 0;
	int Seconds = 0;
};

bool isLeapYear(short Year)
{
	return ((Year % 100) == 0) || ((Year % 4) == 0 && ((Year % 100) != 0));
}

stYearCaluclation YearCaluclation(short Year)
{
	stYearCaluclation YearCalcul;
	if (isLeapYear(Year))
	{
		YearCalcul.Days = 366;
		YearCalcul.Hours = YearCalcul.Days * 24;
		YearCalcul.Minutes = YearCalcul.Hours*60;
		YearCalcul.Seconds = YearCalcul.Minutes * 60;
	}
	else
	{
		YearCalcul.Days = 365;
		YearCalcul.Hours = YearCalcul.Days * 24;
		YearCalcul.Minutes = YearCalcul.Hours * 60;
		YearCalcul.Seconds = YearCalcul.Minutes * 60;
	}
	return YearCalcul;
	
}

int main()
{
	short Year = ReadYear();
	stYearCaluclation YearCalcul=YearCaluclation(Year);

	std::cout << "\nNumber Of Days    in Year [" << Year << "] is : " << YearCalcul.Days;
	std::cout << "\nNumber Of Hours   in Year [" << Year << "] is : " << YearCalcul.Hours;
	std::cout << "\nNumber Of Minutes in Year [" << Year << "] is : " << YearCalcul.Minutes;
	std::cout << "\nNumber Of Seconds in Year [" << Year << "] is : " << YearCalcul.Seconds;

	return 0;
}