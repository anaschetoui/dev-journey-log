// P34-Commision

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

float GetPercentageCommission(int TotalSales)
{
	if (TotalSales > 1000000)
		return 0.01;

		else if (TotalSales >= 500000)
			return 0.02;

			else if (TotalSales >= 100000)
				return 0.03;

				else if (TotalSales >= 50000)
					return 0.05;

						else
							return 0.0;		
}

float CalculateTotalCommission(float Commission,int TotalSales)
{
	return Commission * TotalSales;
}

int main()
{
	int TotalSales = ReadNumber("Enter Total Sales: ");

	float Commission = GetPercentageCommission(TotalSales);
	float TotalCommission = CalculateTotalCommission(Commission, TotalSales);

	cout << "\nPercentage = " << Commission;
	cout << "\nTotal Commission = " << TotalCommission << endl;


	return 0;
}