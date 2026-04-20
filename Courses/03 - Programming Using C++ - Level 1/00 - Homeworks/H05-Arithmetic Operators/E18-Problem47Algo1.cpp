// Problem #47 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
    unsigned int LoanAmount, MonthlyPayment;

    cout << "Enter LoanAmount: ";
    cin >> LoanAmount;

    cout << "Enter Monthly Payment: ";
    cin >> MonthlyPayment;

    int TotalMonths = LoanAmount / MonthlyPayment;

    cout << TotalMonths << " Months.";


    return 0;
}