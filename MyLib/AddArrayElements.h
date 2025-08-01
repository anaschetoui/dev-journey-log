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
	}
	void AddElementsInArray(int arr[100], int& arrLength, int& Num,std::string Message= "Please enter a number:")
	{
		Num = ReadNumber(Message);
		arrLength++;
		arr[arrLength - 1] = Num;
	}

	bool IsPalindromeArray(int arr[10], int arrLength)
	{
		for (int i = 0; i < arrLength / 2; i++)
		{
			if (arr[i] != arr[arrLength - i - 1])
				return false;
		}
		return true;
	}

	int CountEven(int arr[100], int arrLength)
	{
		int count = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] % 2 == 0)
				count++;

		}
		return count;
	}

	void SwapNumbers(int& N1, int& N2)
	{
		int Temp;
		Temp = N2;
		N2 = N1;
		N1 = Temp;

	}

	void SwapInArray(int arr[100], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			int index1 = RandomNumbers(1, arrLength);
			int index2 = RandomNumbers(1, arrLength);
			SwapNumbers(arr[index1 - 1], arr[index2 - 1]);
		}
	}

	void ReverseOrder(int arr[100], int arrReverse[100], int arrLength)
	{
		int X = 1;
		for (int i = 0; i < arrLength; i++)
		{
			arrReverse[i] = arr[arrLength - i - 1];

		}
	}

	short FindNumberPositionInArray(int Number, int arr[100], int
		arrLength)
	{

		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] == Number)
				return i;//return the index
		}
		//if you reached here, this means the number is not found
		return -1;
	}

	bool IsNumberInArray(int Number, int arr[100], int arrLength)
	{
		return FindNumberPositionInArray(Number, arr, arrLength) != -1;
	}

}