// P27-Print-Numbers-From-N-To-1

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

void PrintNumbersFromNTo1(int N)
{
	for (int i = N; i >= 1; i--)
	{
		cout << i << endl;
	}
}

int main()
{
	int N = ReadNumber("Enter a Number: ");

	PrintNumbersFromNTo1(N);

	return 0;
}
