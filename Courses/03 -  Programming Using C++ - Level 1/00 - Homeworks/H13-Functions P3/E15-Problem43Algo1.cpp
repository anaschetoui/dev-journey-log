// Problem 43 -> Algorithms & Problem Solving Level 1

#include <iostream>
#include <string>
using namespace std;

string DHMS(int Seconds) //using fuction
{
	int SecondsPerDay = 24 * 60 * 60;
	int SecondsPerHours = 60 * 60;
	int SecondsPerMinutes = 60;

	int Days = floor(Seconds / SecondsPerDay);
	int Reminder = Seconds % SecondsPerDay;
	int Hours = floor(Reminder / SecondsPerHours);
	Reminder = Reminder % SecondsPerHours;
	int Minutes = floor(Reminder / SecondsPerMinutes);
	int LSeconds = Reminder % SecondsPerMinutes;

	string dhms = to_string(Days) + ':' + to_string(Hours) + ':' + to_string(Minutes) + ':' + to_string(LSeconds);

	return dhms;

}

void P_DHMS(int Seconds)// using Prosudure
{
	int SecondsPerDay = 24 * 60 * 60;
	int SecondsPerHours = 60 * 60;
	int SecondsPerMinutes = 60;

	int Days = floor(Seconds / SecondsPerDay);
	int Reminder = Seconds % SecondsPerDay;
	int Hours = floor(Reminder / SecondsPerHours);
	Reminder = Reminder % SecondsPerHours;
	int Minutes = floor(Reminder / SecondsPerMinutes);
	int LSeconds = Reminder % SecondsPerMinutes;

	cout << Days << ':' << Hours << ':' << Minutes << ':' << LSeconds;
}


int main()
{
	int Seconds;

	cout << "Enter Seconds: ";
	cin >> Seconds;

	cout << DHMS(Seconds);

	cout << '\n';

	P_DHMS(Seconds);

	return 0;
}