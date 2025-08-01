#pragma once

#include <iostream>

namespace MyNumber
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

	int ReadPositiveNumber(string Message)
	{
		int Num;

		do
		{
			Num = ReadNumber(Message);
		} while (Num < 0);
		return Num;
	}



	void PrintPalindromeNumber(int N)
	{
		if (N == ReverseNumber(N))
		{
			cout << "Yes, it is a Palindorme number.\n";
		}
		else
			cout << "No, it is NOT a Palindorme number.\n";
	}

	int CountOdd(int arr[100], int arrLength)
	{
		int count = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] % 2 != 0)
				count++;

		}
		return count;
	}

	enum enPrimeNotPrime { NotPrime = 0, Prime = 1 };

	enPrimeNotPrime CheckPrime(int Num)
	{
		int M = Num / 2;

		for (int i = 2; i <= M; i++)
		{
			if (Num % i == 0)
				return enPrimeNotPrime::NotPrime;
		}
		return enPrimeNotPrime::Prime;
	}

	int RandomNumbers(int from, int to)
	{
		// Use Srand function in the main function ----> srand((unsigned)time(NULL));
		return rand() % (to - from + 1) + from;
	}

}
