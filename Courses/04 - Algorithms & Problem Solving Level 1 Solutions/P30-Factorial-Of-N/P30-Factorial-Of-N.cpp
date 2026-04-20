// P30-Factorial-Of-N

#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}


int FactorialOfN(int N)
{
	
	int Factorial = 1;

	for (int i = N; i >= 1; i--)
	{
		Factorial *= i;
		
	}

	return Factorial;
}

int main()
{
	int N = ReadNumber("Enter N: ");

	cout << FactorialOfN(N);

	return 0;
}