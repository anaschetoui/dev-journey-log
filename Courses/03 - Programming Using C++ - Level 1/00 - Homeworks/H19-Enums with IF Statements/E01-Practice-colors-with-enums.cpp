#include <iostream>
using namespace std;

enum enColors { Red = 1, Blue = 2, Yellow = 3, Green = 4 };

int main()
{
	short Choice;

	cout << "***************************\n";
	cout << "(1) Red\n";
	cout << "(2) Blue\n";
	cout << "(3) Yellow\n";
	cout << "(4) Green\n";
	cout << "****************************\n";
	cout << "choose a Choice (1-4): ";
	cin >> Choice;

	(enColors)Choice;

	if (Choice == enColors::Red)
	{
		system("COLOR 4F");
	}
	else if (Choice == enColors::Blue)
	{
		system("color 1F");
	}
	else if (Choice == enColors::Yellow)
	{
		system("COLOR 6f");
	}
	else if (Choice == enColors::Green)
	{
		system("color 2f");
	}
	else
	{
		system("color 4F");
	}

	return 0;
}