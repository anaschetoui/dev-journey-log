// P13-Max-Of-3-Numbers

#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0.000f;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

int MaxOf3Number(int Num1, int Num2, int Num3)
{
	if (Num1 > Num2 && Num1 > Num3)
		return Num1;
	else if (Num2 > Num3)
		return Num2;
	else if (Num1 == Num2 && Num2 == Num3)
		return -99;
	else
		return Num3;

}

void PrintMaxNumber(int MaxNumber)
{
	MaxNumber == -99 ? cout << "\nAll The 3 Number are Equal.\n" : cout << "\nMax Number is " << MaxNumber << '\n';
}

int main()
{
	int Num1 = ReadNumber("Enter Number1: "), Num2 = ReadNumber("Enter Number2: "), Num3 = ReadNumber("Enter Number3: ");

	int MaxNumber = MaxOf3Number(Num1, Num2, Num3);

	PrintMaxNumber(MaxNumber);

	return 0;
}