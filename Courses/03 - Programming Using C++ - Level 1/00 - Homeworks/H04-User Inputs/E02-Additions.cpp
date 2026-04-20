/*
Write program to do the following (the user who enter):

20 +
30 +
10
------------
60

*/

#include <iostream>
using namespace std;

int main()
{

	int Num1 = 0, Num2 = 0, Num3 = 0;

	cout << "Enter Num1: ";
	cin >> Num1;

	cout << "Enter Num2: ";
	cin >> Num2;

	cout << "Enter Num3: ";
	cin >> Num3;


	//int Sum = Num1 + Num2 + Num3;

	cout << endl;
	cout << Num1 << " +" << "\n";
	cout << Num2 << " +" << "\n";
	cout << Num3 << "\n";
	cout << "------------\n";
	cout << Num1 + Num2 + Num3;


	return 0;
}