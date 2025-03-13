// P07-Reverse-Number

#include <iostream>
#include <string>
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

	//string sReverseNumber = ""; --> using string

	int iReverseNumber = 0;

	while (Number > 0)
	{

		Digit = Number % 10;
		Number /= 10;
		iReverseNumber *= 10;
		iReverseNumber += Digit;

		
		//sReverseNumber += to_string(Digit);
	}
	//return stoi(sReverseNumber);

	return iReverseNumber;
}

int main()
{
	int Number = ReadPositiveNumber("Enter a Positive Number: ");

	cout << ReverseNumber(Number);


	return 0;
}
