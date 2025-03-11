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

float TotalMonths(float LoanAmount, float MonthlyPayment)
{
	return LoanAmount / MonthlyPayment;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Enter Loan Amount: "),
		MonthlyPayment = ReadPositiveNumber("Enter Monthly Payment: ");

	cout << TotalMonths(LoanAmount, MonthlyPayment) << " Months.";

	return 0;
}