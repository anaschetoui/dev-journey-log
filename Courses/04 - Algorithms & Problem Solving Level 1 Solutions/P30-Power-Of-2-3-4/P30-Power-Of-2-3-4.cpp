// P30-Power-Of-2-3-4
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

void PowerOf2_3_4(int Number)
{
	int Pow2 = Number * Number;
	int Pow3 = Number * Number * Number;
	int Pow4 = Number * Number * Number * Number;

	cout << '\n' <<Pow2 << '\n' << Pow3 << '\n' << Pow4 << endl;
}

int main()
{
	int Number = ReadNumber("Enter a Number: ");

	PowerOf2_3_4(Number);

	return 0;
}