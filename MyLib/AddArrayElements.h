#pragma once

#include <iostream>

namespace Array
{
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

	void AddElementsInArray(int arr[100], int& arrLength, int& Num,std::string Message= "Please enter a number:")
	{
		Num = ReadNumber(Message);
		arrLength++;
		arr[arrLength - 1] = Num;
	}
}