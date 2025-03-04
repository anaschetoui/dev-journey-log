//Problem 44 -> Algorithms & Problem Solving Level 1

#include <iostream>
using namespace std;


int main()
{

	int Day;

	cout << "Enter a Day (1-7): ";
	cin >> Day;


	if (Day == 1)
	{
		cout << "\nSunday\n";
	}
	else if (Day == 2)
	{
		cout << "\nMonday\n";
	}
	else if (Day == 5)
	{
		cout << "\nThursday\n";
	}
	else if (Day == 4)
	{
		cout << "\nWednesday\n";
	}
	else if (Day == 3)
	{
		cout << "\nTuesday\n";
	}
	else if (Day == 6)
	{
		cout << "\nFriday\n";
	}
	else if (Day == 7)
	{
		cout << "\nSaturaday\n";
	}
	else
	{
		cout << "\nWrong Day\n";
	}


	return 0;
}