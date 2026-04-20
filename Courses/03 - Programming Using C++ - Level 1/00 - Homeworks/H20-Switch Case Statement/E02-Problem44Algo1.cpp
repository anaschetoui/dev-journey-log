#include <iostream>
using namespace std;


int main()
{
	short Day;

	cout << "Enter a Day (1-7): ";
	cin >> Day;

	switch (Day)
	{
	case 1:
		cout << "Sun";
		break;
	case 2:
		cout << "Mon";
		break;
	case 3:
		cout << "Tue";
		break;
	case 4:
		cout << "Wed";
		break;
	case 5:
		cout << "Thu";
		break;
	case 6:
		cout << "Fri";
		break;
	case 7:
		cout << "Sat";
		break;
	default:
		cout << "Wrong Day";
	}

	return 0;
}