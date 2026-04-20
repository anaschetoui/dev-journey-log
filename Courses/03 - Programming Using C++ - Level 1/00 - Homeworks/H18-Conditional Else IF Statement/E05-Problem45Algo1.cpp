//Problem 45 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;


int main()
{

	int Month;

	cout << "Enter a Month (1-12): ";
	cin >> Month;


	if (Month == 1)
	{
		cout << "\nJanuary\n";
	}
	else if (Month == 2)
	{
		cout << "\nFebruary\n";
	}
	else if (Month == 3)
	{
		cout << "\nMarch\n";
	}
	else if (Month == 4)
	{
		cout << "\nApril\n";
	}
	else if (Month == 5)
	{
		cout << "\nMay\n";
	}
	else if (Month == 6)
	{
		cout << "\nJune\n";
	}
	else if (Month == 7)
	{
		cout << "\nJuly\n";
	}
	else if (Month == 8)
	{
		cout << "\nAugust\n";
	}
	else if (Month == 9)
	{
		cout << "\nSeptember\n";
	}
	else if (Month == 10)
	{
		cout << "\nOctober\n";
	}
	else if (Month == 11)
	{
		cout << "\nNovember\n";
	}
	else if (Month == 12)
	{
		cout << "\nDecember\n";
	}
	else
	{
		cout << "\nWrong Month\n";
	}


	return 0;
}