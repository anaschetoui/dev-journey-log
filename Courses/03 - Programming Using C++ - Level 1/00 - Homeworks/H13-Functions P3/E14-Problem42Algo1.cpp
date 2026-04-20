// Problem 32 -> Algorithms & Problem Solving Level 1

#include <iostream>
#include <cmath>
using namespace std;

int TaskDurationInSeconds(int Days, int Hours, int Minutes, int Seconds)
{
	int TotalSeconds = (Days * 24 * 60 * 60) + (Hours * 60 * 60) + (Minutes * 60) + Seconds;

	return TotalSeconds;

}


int main()
{
	int Days, Hours, Minutes, Seconds;

	cout << "Enter Days: ";
	cin >> Days;

	cout << "Enter Hours: ";
	cin >> Hours;

	cout << "Enter Minutes: ";
	cin >> Minutes;

	cout << "Enter Seconds: ";
	cin >> Seconds;

	cout << "Total Task Duration in Seconds is " << TaskDurationInSeconds(Days, Hours, Minutes, Seconds) << " Seconds.";

	return 0;
}