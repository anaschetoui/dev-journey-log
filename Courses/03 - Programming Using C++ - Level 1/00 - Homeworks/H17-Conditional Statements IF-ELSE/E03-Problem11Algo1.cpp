//Problem 11 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	float Mark[3];

	cout << "Enter Mark 1: ";
	cin >> Mark[0];

	cout << "Enter Mark 2: ";
	cin >> Mark[1];

	cout << "Enter Mark 3: ";
	cin >> Mark[2];

	float Avg = (Mark[0] + Mark[1] + Mark[2]) / 3;

	if (Avg >= 50)
	{
		cout << "\nPASS\n";
	}
	else
	{
		cout << "\nFAIL\n";
	}

	return 0;
}