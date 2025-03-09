// P26-Print-Numbers-from-1-N

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

void PrintNumbersFrom1ToN(int N)
{
	for (int i = 1; i <= N; i++)
	{
		cout << i << endl;
	}
}

int main()
{
	int N = ReadNumber("Enter a Number: ");

	PrintNumbersFrom1ToN(N);

	return 0;
}