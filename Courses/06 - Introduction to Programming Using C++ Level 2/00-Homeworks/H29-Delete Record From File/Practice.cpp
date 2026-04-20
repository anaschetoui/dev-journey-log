/*
### 🗑️ C++ Challenge: The Log Purge Tool
**Goal:** Create a program that removes a specific mood entry from your `Log.txt` file.

**Requirements:**
1. **Functions Needed:** Ensure you have your `LoadFileToVector` and `SaveVectorToFile` functions ready.
2. **The New Function:** Create `DeleteRecordFromFile`.
3. **Logic Steps:**
   - Load the file into a vector.
   - Loop through the vector and if an item matches `RecordToRemove`, set it to `""`.
   - Save the vector back to the file (skipping the empty lines).
4. **Execution:** In `main()`, call the function to remove "Sad" or any entry from your `Log.txt`.
5. **Verification:** Print the file content before and after the deletion to see the result on the screen.

**Critical Note:**
- Don't forget to use `&Line` in your for-loop so you can actually change the value inside the vector!
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

void DeleteRecordFromFile(string Filename, string RecordToRemove)
{

	vector <string> vFileContent;
	LoadFileToVector(Filename, vFileContent);

	for (string& Line : vFileContent)
	{
		if (Line == RecordToRemove)
		{
			Line = "";
		}
	}

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
	cout << "Before Deletion: \n";
	PrintFileContent("Log.txt");


	cout << "\n\nAfter Deletion: \n";
	DeleteRecordFromFile("Log.txt", "Happy - New Access Logged");
	PrintFileContent("Log.txt");

	return 0;
}