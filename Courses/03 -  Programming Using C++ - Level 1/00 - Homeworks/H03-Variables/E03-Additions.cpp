/*
Write program to do the following:

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
	int Num1 = 20;
	int Num2 = 30;
	int Num3 = 10;

	int Sum = Num1 + Num2 + Num3;

	cout << Num1 << " +" << "\n";
	cout << Num2 << " +" << "\n";
	cout << Num3 << "\n";
	cout << "------------\n";
	cout << Sum;

	return 0;
}