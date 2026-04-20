/*
Write a Program to do the following:

Read 5 numbers and sum them up as long as the number is below
50 use for loop and continue statement.

Input:
10
20
55
10
20

Output: 60
*/

#include <iostream>
using namespace std;


int main()
{

	int Num = 0, Sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Number: ";
		cin >> Num;

		if (Num > 50)
		{
			continue;
		}

		Sum += Num;

	}

	cout << Sum;

	return 0;
}