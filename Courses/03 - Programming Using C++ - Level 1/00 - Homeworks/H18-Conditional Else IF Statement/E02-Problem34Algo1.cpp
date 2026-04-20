//Problem 34 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	int TotalSales;


	cout << "Enter Total Sales: ";
	cin >> TotalSales;

	if (TotalSales > 1000000)
	{
		cout << "\nPercentage is 1%\n";
	}
	else if (TotalSales > 500000)
	{
		cout << "\nPercentage is 2%\n";
	}
	else if (TotalSales > 100000)
	{
		cout << "\nPercentage is 3%\n";
	}
	else if (TotalSales > 50000)
	{
		cout << "\nPercentage is 5%\n";
	}
	else
	{
		cout << "\nPercentage is 0%\n";
	}

	return 0;
}