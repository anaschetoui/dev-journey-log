/*

Write a procedure and a function to do the following:

Please enter Number1?
10

Please enter Number2?
20
**************************
30

*/

#include <iostream>
using namespace std;

int MySum()
{
	int Number1, Number2;

	cout << "Enter Number1?\n";
	cin >> Number1;

	cout << "Enter Number2?\n";
	cin >> Number2;

	cout << "*************************\n";

	return Number1 + Number2;
}

int main()
{
	cout << MySum();
	return 0;
}