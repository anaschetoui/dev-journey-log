// P48-Monthly-Loan-Installment

// P47-Monthly-Loan-Installment

#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

float MonthlyInstallment(float LoanAmount, float HowManyMonths)
{
	return LoanAmount / HowManyMonths;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Enter Loan Amount: "),
		HowManyMonths= ReadPositiveNumber("Enter How Many Months: ");

	cout << "MonthlyInstallment = "<<MonthlyInstallment(LoanAmount, HowManyMonths);

	return 0;
}