// P09-Sum-Of-3-Numbers

#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number=0;
	do{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

int SunOf3Numbers()
{
	int Sum = 0;
	for (int i = 1; i <= 3; i++)
	{
		int Num = ReadPositiveNumber("Enter Number " + to_string(i) + ": ");
		Sum += Num;
	}

	return Sum;
}

void PrintSum(int Sum)
{
	cout << "\n\tSum = " << Sum << endl;
}

int main()
{
	PrintSum(SunOf3Numbers());

	return 0;
}