// P14-Swap-Two-Number.cpp

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Num = 0;
	
	do{
		cout << Message;
		cin >> Num;
	} while (Num < 0);

	return Num;

}

void Swap2Numbers(int& Num1, int& Num2)
{
	int Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
}

void PrintNumbers(int Num1, int Num2,string Message)
{
	cout << '\n'<<Message << endl;
	cout << "Number1: " << Num1;
	cout << "\nNumber2: " << Num2<<'\n';
}


int main()
{
	int Num1 = ReadPositiveNumber("Enter   Fist Number: "), Num2 = ReadPositiveNumber("Enter Second Number: ");


	PrintNumbers(Num1, Num2, "Before Swap:");

	Swap2Numbers(Num1, Num2);

	PrintNumbers(Num1, Num2, "After Swap:");

	return 0;

}

