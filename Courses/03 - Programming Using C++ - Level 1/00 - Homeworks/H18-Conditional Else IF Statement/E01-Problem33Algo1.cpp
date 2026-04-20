//Problem 33 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	float Grade;

	cout << "Enter Grade: ";
	cin >> Grade;

	if (Grade >= 90)
	{
		cout << "A";
	}
	else if (Grade >= 80)
	{
		cout << "B";
	}
	else if (Grade >= 70)
	{
		cout << "C";
	}
	else if (Grade >= 60)
	{
		cout << "D";
	}
	else if (Grade >= 50)
	{
		cout << "E";
	}
	else
	{
		cout << "F";
	}

	return 0;
}