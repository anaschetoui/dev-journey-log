// P11-Palindrome-Number
 
#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}


int ReverseNumber(int Number)
{
	int Digit = 0;

	int iReverseNumber = 0;

	while (Number > 0)
	{
		Digit = Number % 10;
		Number /= 10;
		iReverseNumber *= 10;
		iReverseNumber += Digit;

	}
	
	return iReverseNumber;
}

bool IsPalindromeNumber(int Number)
{
	return (Number == ReverseNumber(Number));
}

int main()
{
	int Number = ReadPositiveNumber("Enter Positive Number: ");

	IsPalindromeNumber(Number) ? cout << "\nYes, Is Palindrome Number.\n" : cout << "No, Is Not Palindrome Number.\n";


	return 0;
}