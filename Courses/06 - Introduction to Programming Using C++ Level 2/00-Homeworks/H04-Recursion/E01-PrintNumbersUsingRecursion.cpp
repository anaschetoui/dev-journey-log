/* Homework 01 --> Recursion:
Write programs to do the following:
Using Recursion:
• Program to print numbers from M down to N.
*/

#include <iostream>
using namespace std;

void PrintNumbers(int N, int M)
{
	if (N <= M)
	{
		cout << M << endl;
		PrintNumbers(N, M - 1);
	}
}

int main()
{
	PrintNumbers(1, 10);

	return 0;
}