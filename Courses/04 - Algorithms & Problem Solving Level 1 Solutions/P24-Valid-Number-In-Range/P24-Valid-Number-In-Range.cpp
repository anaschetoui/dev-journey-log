// P24-Valid-Number-In-Range

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

bool ValidNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}

void PrintResult(int Age)
{
	ValidNumberInRange(Age, 18, 45) ? cout << "\nValid Age\n" : cout << "\nInvalid Age\n";
}

int main()
{
	int Age = ReadNumber("Enter Your Age: ");

	PrintResult(Age);

	return 0;
}