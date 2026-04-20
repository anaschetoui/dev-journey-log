/*
Write a Program to do the following:

Defin an array integers contains 10 elements

arr[10] = {10,20,44,55,33,22,99,100}

Search of 20 and print its position, use for loop and break statement.

*/

#include <iostream>
using namespace std;


int main()
{
	int arr[10] = { 10,20,44,55,33,22,99,100 };

	for (int i = 0; i <= 10; i++)
	{
		if (arr[i] == 20)
		{
			cout << "20 in Position " << i;
			break;
		}
	}

	return 0;
}