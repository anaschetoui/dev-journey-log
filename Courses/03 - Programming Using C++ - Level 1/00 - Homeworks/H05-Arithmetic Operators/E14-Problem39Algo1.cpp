// Problem #39 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	
	float TotalBill;
	float CashPaid;

	cout << "Enter Total Bill: ";
	cin >> TotalBill;

	cout << "Enter Cash Paid: ";
	cin >> CashPaid;

	float Reminder = CashPaid - TotalBill;

	cout << "Reminder is " << Reminder;


	return 0;
}