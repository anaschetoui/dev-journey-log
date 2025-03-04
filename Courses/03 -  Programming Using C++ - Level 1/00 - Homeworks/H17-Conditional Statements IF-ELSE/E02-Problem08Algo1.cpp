//Problem 08 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;

int main()
{
	float Mark;

	cout << "Enter your Mark: ";
	cin >> Mark;

	if (Mark >= 50)
	{
		cout << "\nPASS\n";
	}
	else
	{
		cout << "\nFAIL\n";
	}

	return 0;

}