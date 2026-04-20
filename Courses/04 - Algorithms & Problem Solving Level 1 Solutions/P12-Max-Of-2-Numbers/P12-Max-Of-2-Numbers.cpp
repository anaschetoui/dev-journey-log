// P12-Max-Of-2-Numbers

#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

int MaxOfTwoNumber(int Num1, int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else if (Num1 < Num2)
		return Num2;
	else
		return -99;
}

void PrintResults(int Num)
{
	if (Num == -99)
		cout << "The Two Numbers are Equal.";
	else
	cout << "The Max Number is " << Num;
}

int main()
{
	int Num1 = ReadNumber("Enter Number 1: "), Num2 = ReadNumber("Enter Number 2: ");

	PrintResults(MaxOfTwoNumber(Num1, Num2));

	return 0;
}