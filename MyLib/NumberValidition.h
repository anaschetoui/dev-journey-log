#pragma once

#include <iostream>

namespace NumberValidation
{

	short ReadShortNumber(std::string Message = "Enter a Number: ")
	{
		short ShortNumber=0;
		std::cout<<Message;
		std::cin>>ShortNumber;
		while(std::cin.fail())
		{
		      std::cin.clear();
		      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		      std::cout<<"Invalid Number ,Please enter a valid number: ";
		      std::cin>>ShortNumber;
		}
		return ShortNumber;
	}

	int ReadNumber(std::string Message = "Enter a Number: ")
	{
		int Number = 0;
		std::cout << Message;
		std::cin >> Number;
		while (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid Number ,Please enter a valid number: ";
			std::cin >> Number;
		}

		return Number;
	}

}
