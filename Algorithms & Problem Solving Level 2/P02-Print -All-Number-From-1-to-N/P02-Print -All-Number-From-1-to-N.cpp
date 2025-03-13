// P02-Print -All-Number-From-1-to-N

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

enum enPrimeNotPrime{Prime = 1 , NotPrime= 2};

enPrimeNotPrime CheckPrime(int Number)
{

	int M = round(Number / 2);

	for (int i = 2; i <= M; i++)
	{
		if (Number % i == 0)
			return enPrimeNotPrime::NotPrime;
	}

	return enPrimeNotPrime::Prime;

}

void PrintAllPrimeNumber(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		if (CheckPrime(i) == enPrimeNotPrime::Prime)
		{
			cout << i << endl;
		}
	}
}

int main()
{
	int Number = ReadPositiveNumber("Enter a Positive Number: ");
	cout << "\nAll Prime Numbers\n";

	PrintAllPrimeNumber(Number);


	return 0;
}