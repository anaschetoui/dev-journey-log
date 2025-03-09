// P25-Read-Until-Age-Between-18-45

#include <iostream>
using namespace std;

int ReadNumber()
{
	int Number = 0;

	do{
		cout << "Enter Age: ";
		cin >> Number;
	} while (Number < 0);
	
	return Number;
}

bool ValidNumberinRange(int Number, int from, int to)
{
	return (Number >= 18 && Number <= 45);
}

int ReadUntilAgeBetweenRange(int from,int to)
{
	int Age = 0;

	Age = ReadNumber();

	while (!ValidNumberinRange(Age, from, to))
	{
		cout << "Invalid Age\n";
		Age = ReadNumber();
	}

	return Age;
}

void PrintAge(int Age)
{
	cout << '\n' << Age << '\n';
}

int main()
{

	PrintAge(ReadUntilAgeBetweenRange(18,45));

	return 0;
}