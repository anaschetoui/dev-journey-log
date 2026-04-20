// P43-Seconds-to-Days-Hours-Minutes-Seconds

#include <iostream>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

void SecondToDHMS(int NumberOfSeconds)
{

	const int SecondsToDays = 24 * 60 * 60,
			  SecondsToHours = 60 * 60,
		      SecondsToMinutes = 60;

	int NumbersOfDays = floor(NumberOfSeconds / SecondsToDays);
	int Reminder = NumberOfSeconds % SecondsToDays;
	int NumberOfHours = floor(Reminder / SecondsToHours);
	Reminder = Reminder % SecondsToHours;
	int NumberOfMinutes = floor(Reminder / SecondsToMinutes);
	Reminder = Reminder % SecondsToMinutes;
	
	cout << '\n';
	cout << NumbersOfDays << ':' << NumberOfHours << ':' << NumberOfMinutes << ':' << Reminder;
	cout << endl;

}

int main()
{
	int NumberOfSeconds = ReadPositiveNumber("Enter Total Of Seconds: ");

	SecondToDHMS(NumberOfSeconds);

	return 0;

}