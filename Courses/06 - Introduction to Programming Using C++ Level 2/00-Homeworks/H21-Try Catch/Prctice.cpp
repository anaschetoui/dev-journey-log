/*
 🛡️ Final Challenge: Safe Student Record Finder
**Goal:** Practice using `Try...Catch` with `std::vector` to prevent program crashes.

**Requirements:**
1. Create a `vector<int>` and initialize it with 5 student IDs (e.g., 101, 105, 110, 120, 150).
2. Ask the user to enter an "Index Number" to view a student ID.
3. Inside a **`try`** block:
   - Attempt to access the student ID using the **`.at()`** function.
   - Print the student ID if the index is correct.
4. Inside a **`catch`** block:
   - Catch the **`std::out_of_range`** exception.
   - Print a user-friendly message: "Error: This index is out of bounds!".
5. **Bonus:** Put the logic inside a `do-while` loop so the user can try multiple times until they enter `-1` to exit.

**Rules from Lesson #49:**
- Only use `try...catch` for situations you cannot control with logic.
- Remember that `try...catch` can slow down your program, so use it wisely.

*/


#include <iostream>
#include <vector>
#include <string>
using namespace std;

int ReadNumber(string Message)
{
	int Num = 0;
	do
	{
		system("CLS");
		cout << Message;
		cin >> Num;
	} while (Num < 0);

	return Num;
}


void StudentRecordFinder()
{
	vector<int> StudentsIDs{ 101, 105, 110, 120, 150 };

	int Index = ReadNumber("Enter the index you want to access: ");

	try
	{
		cout << "Students IDs are: " << StudentsIDs.at(Index);
	}
	catch (...)
	{
		cout << "Error: This index is NOT found in our records!\n";
	}
}


int main()
{
	StudentRecordFinder();
	return 0;
}