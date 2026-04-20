/*
**Goal:** Create a program that tracks how many times you accessed it.

**Requirements:**
1. Create an `fstream` object.
2. Open a file called `Log.txt` using the combined mode (`ios::out | ios::app`).
3. Ask the user to enter their "Current Mood" (e.g., Happy, Tired, Motivated).
4. Write this mood into the file followed by " - New Access Logged" and a new line.
5. Close the file.
6. **Test it:** Run the program 3 times, enter 3 different moods, and open `Log.txt` to see if all 3 are saved together.

*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string ReadMood()
{

	string CurrentMood = "";

	cout << "Enter your Current Mood: ";
	getline(cin, CurrentMood);

	return CurrentMood;
}

void TrackLogs(string Mood)
{
	fstream Log;

	Log.open("Log.txt", ios::out | ios::app);

	if (Log.is_open())
	{
		Log << Mood << " - New Access Logged\n";

		Log.close();
	}
}

int main()
{
	TrackLogs(ReadMood());

	return 0;
}