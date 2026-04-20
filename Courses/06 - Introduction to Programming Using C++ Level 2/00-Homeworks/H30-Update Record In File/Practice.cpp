/*
**Goal:** Create a program that searches for a specific word in a file and replaces it with its correct academic version.

**Requirements:**
1. **Initial File:** Use your `Log.txt` or create a new one.
2. **Functionality:** Create a function `UpdateRecordInFile`.
3. **Logic Steps:**
   - Load file to Vector.
   - Search for `OldValue` (e.g., "Sad") and change it to `NewValue` (e.g., "Motivated").
   - **Crucial:** Use `&Line` in your loop to ensure the change is permanent in the vector.
   - Save the vector back to the file using `ios::out`.
4. **Main Execution:** - Print the file before updating.
   - Run the update function.
   - Print the file after updating to verify the results.

**Bonus:**
Try to make the "Update" function case-insensitive using the `toupper()` function you learned in Lesson #51.
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;


void LoadFileToVector(string Filename, vector <string>& vFileContent)
{

	fstream MyFile;
	MyFile.open(Filename, ios::in);

	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			vFileContent.push_back(Line);
		}

		MyFile.close();

	}

}

void SaveVectorToFile(string Filename, vector <string> vFileContent)
{
	fstream MyFile;
	MyFile.open(Filename, ios::out);

	if (MyFile.is_open())
	{
		for (string& Line : vFileContent)
		{
			if (!Line.empty())
			{
				MyFile << Line << endl;
			}
		}

		MyFile.close();

	}
}

string AllToUpper(string str)
{
	for (char& c : str)
		c = toupper(c);

	return str;
}

void UpdateRecordInFile(string Filename, string Record, string UpdateTo)
{
	vector <string> vFileContent;

	LoadFileToVector(Filename, vFileContent); // 1. Load Data File to Vector

	for (string& Line : vFileContent)
	{
		if (AllToUpper(Record) == AllToUpper(Line))
			Line = UpdateTo; // 2. Changing the value
	}

	// 3. Update File

	SaveVectorToFile(Filename, vFileContent);

}

void PrintFileContent(string Filename)
{
	fstream MyFile;
	MyFile.open(Filename, ios::in);

	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			cout << Line << endl;
		}

		MyFile.close();

	}


}

int main()
{
	cout << "Before Update:\n\n";
	PrintFileContent("Log.txt");


	cout << "\n\After Update:\n\n";
	UpdateRecordInFile("Log.txt", "Sad", "Motivated");
	PrintFileContent("Log.txt");

	return 0;
}
