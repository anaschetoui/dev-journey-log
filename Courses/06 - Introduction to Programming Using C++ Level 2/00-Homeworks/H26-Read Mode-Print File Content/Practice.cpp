/*
**Goal:** Create a function that reads the `Log.txt` file and displays all recorded moods on the screen.

**Requirements:**
1. **The Function:** Create a function named `PrintLogHistory()`.
2. **Setup:** - Define an `fstream` object.
   - Open `Log.txt` using the **Read Mode** (`ios::in`).
3. **Logic:** - Use a `while` loop with `getline` to read every log entry.
   - Print each line preceded by its sequence number (e.g., "1. Happy - New Access Logged").
4. **Safety First:** - Check if the file exists using `is_open()`.
   - If not, print: "Error: No logs found!".
5. **Finalize:** Close the file after reading all lines.

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

void PrintLogHistory(string Filename)
{
	fstream MyFile;
	MyFile.open(Filename, ios::in);
	short i = 0;
	if (MyFile.is_open())
	{

		string Line = "";
		while (getline(MyFile, Line))
		{
			i++;
			cout << i << ". " << Line << endl;
		}

		MyFile.close();
	}
	else
	{
		cout << "Error: No logs found!\n";
	}
}

int main()
{
	PrintLogHistory("Log.txt");

	return 0;
}