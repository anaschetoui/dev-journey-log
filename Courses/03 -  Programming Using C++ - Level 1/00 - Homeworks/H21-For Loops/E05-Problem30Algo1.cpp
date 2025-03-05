// Problem #30 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	int Fact = 1, Num = 0;

	cout << "Enter a Number: ";
	cin >> Num;

	for (int i = Num; i >= 1; i--)
	{
		Fact *= i;
	}

	cout << Fact;

	return 0;
}s