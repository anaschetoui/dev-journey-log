// P42-Task-Duration-In-Seconds

#include <iostream>
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

int DurationInSeconds(int Days, int Hours, int Minutes, int Seconds)
{
	int TotalSeconds = (Days * 24 * 60 * 60) + (Hours * 60 * 60) + (Minutes * 60) + Seconds;

	return TotalSeconds;
}

int main()
{
	int Days = ReadPositiveNumber("Enter How Many Days: "),
		Hours = ReadPositiveNumber("Enter How Many Hours: "),
		Minutes = ReadPositiveNumber("Enter How Many Minutes: "),
		Seconds = ReadPositiveNumber("Enter How Many Seconds: ");

	cout << '\n' << DurationInSeconds(Days, Hours, Minutes, Seconds) << " Seconds.\n";

	return 0;
}