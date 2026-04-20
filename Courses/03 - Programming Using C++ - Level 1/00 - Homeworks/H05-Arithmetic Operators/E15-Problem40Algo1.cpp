// Problem #40 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{

	float BillValue;

	cout << "Enter Bill Value: ";
	cin >> BillValue;

	float TotalBill = BillValue * 0.1 + BillValue;
	TotalBill = TotalBill * 0.16 + TotalBill;

	cout << "TotalBill is " << TotalBill;

	return 0;
}