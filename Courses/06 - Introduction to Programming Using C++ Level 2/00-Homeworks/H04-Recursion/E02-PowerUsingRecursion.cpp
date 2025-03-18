/* Homework 02 --> Recursion:
Write programs to do the following:
Using Recursion:
• Program to calculate power N^M.
*/

#include <iostream>
using namespace std;

int Power(int N, int M)
{
	if (M == 0) return 1;

	return N *= Power(N, M - 1);
}

int main()
{
	cout << Power(2, 3);
	return 0;
}