// P36-Simple-Calculator

#include <iostream>
using namespace std;

enum enOperationType {
	Add = '+', Minus = '-', Times = '*', Devide = '/'
};

float ReadPositiveNumber(string Message)
{
	float Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

enOperationType ReadOperationType()
{
	char Op = '/';

	do{
		cout << "Enter the Operation type (+, -, *, /): ";
		cin >> Op;
	} while (!(Op == '+' || Op == '-' || Op == '*' || Op == '/'));

	return (enOperationType)Op;
}

float SimpleCalculator(float Num1, float Num2, enOperationType OpType)
{
	switch (OpType)
	{
	case enOperationType::Add:
		return Num1 + Num2;
	case enOperationType::Minus:
		return Num1 - Num2;
	case enOperationType::Times:
		return Num1 * Num2;
	case enOperationType::Devide:
		return Num1 / Num2;
	default:
		return -99;
	}
}

int main()
{
	float Num1 = ReadPositiveNumber("Enter Number1: "), Num2 = ReadPositiveNumber("Enter Number2: ");

	enOperationType OpType = ReadOperationType();

	cout << Num1 << " " << char(OpType) << " " << Num2 << " = " << SimpleCalculator(Num1, Num2, OpType);


	return 0;
}