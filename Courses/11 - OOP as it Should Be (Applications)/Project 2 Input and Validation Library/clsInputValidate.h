#pragma once
#include <iostream>
#include <string>
#include <limits>
#include "/Documents/MyCodingJourney/Courses/10 - OOP as it Should Be (Concepts)/17 - Projects/P02 - Date Library Project/clsDate.h"

using namespace std;


class clsInputValidate
{
public:

	static bool IsNumberBetween(int Number, int From, int To)
	{
		return Number >= From && Number <= To;

	}

	static bool IsNumberBetween(short Number, short From, short To)
	{
		return Number >= From && Number <= To;

	}

	static bool IsNumberBetween(double Number, double From, double To)
	{
		return Number >= From && Number <= To;
	}

	static bool IsNumberBetween(float Number, float From, float To)
	{
		return Number >= From && Number <= To;

	}

	static bool IsDateBetween(clsDate Date, clsDate From, clsDate To)
	{
		return (clsDate::IsDate1AfterDate2(Date, From) && clsDate::IsDate1BeforeDate2(Date, To))
			||
			clsDate::isDate1EqualtoDate2(Date, From) || clsDate::isDate1EqualtoDate2(Date, To);
	}

	static int ReadIntegerNumber(string Message = "Invalid number.Enter a valid one: ")
	{
		int Number = 0;
		cout << "Enter a number: ";
		cin >> Number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << Message;
			cin >> Number;
		}

		return Number;


	}


	static double ReadDoubleNumber(string Message = "Invalid number. Please enter a valid one: ")
	{
		double Number = 0;
		cout << "Enter a number: ";
		cin >> Number;

		while (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << Message;
			cin >> Number;
		}

		return Number;
	}

	static int ReadIntegerNumberBetween(int From, int To, string Message = "Number is not within range")
	{


		int Num = ReadIntegerNumber();

		while (!IsNumberBetween(Num, From, To))
		{
			cout << Message << endl;;
			Num = ReadIntegerNumber();
		}

		return Num;
	}

	static double ReadDoubleNumberBetween(double From, double To, string Message = "Number is not within range")
	{


		double Num = ReadDoubleNumber();

		while (!IsNumberBetween(Num, From, To))
		{
			cout << Message << endl;;
			Num = ReadDoubleNumber();
		}

		return Num;
	}

	static bool IsValidDate(clsDate Date)
	{
		return Date.IsValid();
	}
};

