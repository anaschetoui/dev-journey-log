/*
Write a program to do the following:

Please enter the  First Number A: 50
Please enter the Second Number B: 50

50 == 50 is 1
50 != 50 is 0
50 > 50 is 0 
50 < 50 is 0
50 >= 50 is 1
50 <= 50 is 1

*/

#include <iostream>
using namespace std;

int main()
{
	int A, B;

	cout << "Please enter  first Number A: ";
	cin >> A;

	cout << "Please enter second Number B: ";
	cin >> B;

	cout << A << " == " << B << " is " << (A == B) << endl;
	cout << A << " != " << B << " is " << (A != B) << endl;
	cout << A << " > " << B << " is " << (A > B) << endl;
	cout << A << " < " << B << " is " << (A < B) << endl;
	cout << A << " >= " << B << " is " << (A >= B) << endl;
	cout << A << " <= " << B << " is " << (A <= B) << endl;

	return 0;
}