// Problem #28 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	int Sum = 0, Number = 0;

	cout << "Enter a Number: ";
	cin >> Number;

	for (int i = 0; i < Number; i = i + 2)
	{
		Sum += i;
	}
	cout << Sum;

	return 0;
}