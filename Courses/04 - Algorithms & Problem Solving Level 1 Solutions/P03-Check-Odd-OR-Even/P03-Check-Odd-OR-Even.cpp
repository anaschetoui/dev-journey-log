// P03-Check-Odd-OR-Even.

#include <iostream>
using namespace std;

enum enNumberType {Even = 2 , Odd=1};

int ReadPositiveNumber(string Message = "Enter a Positive Number: ")
{
	int Num = 0;
	do
	{
		cout << Message;
		cin >> Num;
	} while (Num <= 0);

	return Num;
}

enNumberType CheckNumberType(int Num)
{
	return  Num % 2 == 0 ? enNumberType::Even : enNumberType::Odd;
}

void PrintNumberType(enNumberType NumberType)
{
	NumberType == enNumberType::Even ? cout << "\nEven Number.\n" : cout << "\nOdd Number.\n";
}

int main()
{
	int Num = ReadPositiveNumber();
	
	PrintNumberType(CheckNumberType(Num));

	return 0;
}