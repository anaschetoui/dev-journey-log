/*
📝 Homework: The Secure Data Sync
**Goal:** Practice loading data, adding a new entry in memory, and then saving it back to the file.

**Requirements:**
1. **Initial File:** Create a file named `Names.txt` with 3 names (e.g., Ali, Omar, Sara).
2. **Phase 1 (Load):** Use your `LoadFileToVector` function to load these names into a `vector<string>`.
3. **Phase 2 (Modify):** In the `main()`, use `.push_back()` to add your name "Anas" to the vector.
4. **Phase 3 (Save):** Create the `SaveVectorToFile` function as explained in Lesson #56:
   - Use `ios::out` mode.
   - Loop through the vector and write each name to the file with an `endl`.
   - Ensure you close the file.
5. **Phase 4 (Verify):** Open the `Names.txt` file manually to see if "Anas" was added successfully alongside the other names.

**Pro-Tip from Lesson #56:**
Always check `if (Line != "")` before writing to the file to keep your data clean and professional.
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void LoadFileToVector(string Filename, vector <string>& FileContent)
{
	fstream MyFile;

	MyFile.open(Filename, ios::in);


	string Line;
	if (MyFile.is_open())
	{
		while (getline(MyFile, Line))
		{
			FileContent.push_back(Line);
		}

		MyFile.close();
	}


}

void SaveVectorToFile(string Filename, vector <string> FileContent)
{
	fstream MyFile;

	MyFile.open(Filename, ios::out);

	if (MyFile.is_open())
	{
		for (string& Line : FileContent)
		{
			if (!Line.empty())
			{
				MyFile << Line << endl;
			}
		}
		MyFile.close();
	}
}

int main()
{
	vector <string> FileContent;
	LoadFileToVector("Names.txt", FileContent);

	FileContent.push_back("Anas");

	for (string& Line : FileContent)
	{
		cout << Line << endl;
	}

	SaveVectorToFile("Names.txt", FileContent);

	return 0;

}