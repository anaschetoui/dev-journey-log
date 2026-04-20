// P01-Multiplication-Table-1-10


#include <iostream>
using namespace std;

void TableHeader()
{
	cout << "------------------------------------------------------------------------------------\n";
	cout << "\t\t\t Multiplication Table From 1 To 10\n";
	cout << "------------------------------------------------------------------------------------\n";
	for (int i = 1; i <= 10; i++)
	{
		cout << '\t' << i << "  ";
	}
	cout << "\n------------------------------------------------------------------------------------\n";
}

void PrintMultiplicationTable()
{
	TableHeader();
	for (int i = 1; i <= 10; i++)
	{
		i == 10? cout << i << "  |   " : cout << i << "   |   ";

		for (int j = 1; j <= 10; j++)
		{
			cout <<i * j << "\t";
		}
		cout << '\n';
	}
	cout << "------------------------------------------------------------------------------------\n";
}


int main()
{
	
	PrintMultiplicationTable();

	return 0;
}