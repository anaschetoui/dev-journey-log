// Problem #48 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
    unsigned int LoanAmount, Months;

    cout << "Enter LoanAmount: ";
    cin >> LoanAmount;

    cout << "Enter Months: ";
    cin >> Months;

    int MonthlyInstallment = LoanAmount / Months;

    cout << MonthlyInstallment ;


    return 0;

}