/*
**Goal:** Practice creating a permanent text file and writing formatted data into it using `ios::out`.

**Requirements:**
1. **Library Setup:** Include `<iostream>`, `<string>`, and the essential `<fstream>` library.
2. **User Input:** Ask the user to enter the following details:
   - Full Name
   - Age
   - University Name (e.g., Moulay Ismail University)
   - Field of Study
3. **File Operations:**
   - Create an `fstream` object named `BioFile`.
   - Open a file named `MyBio.txt` using the **Write Mode** (`ios::out`).
   - **Critical Step:** Check if the file was opened successfully using `is_open()` before writing anything.
4. **Data Writing:**
   - Write the user's information into the file in a professional format.
   - Use `\n` or `endl` to ensure each piece of information is on a new line.
   - *Example Format in File:*
	 ```
	 --- Student Professional Biography ---
	 Name: Anas
	 Age: 23
	 University: Moulay Ismail University
	 Major: English Studies
	 --------------------------------------
	 ```
5. **Finalize:** Close the file properly to save the data and free up system resources.
6. **Verification:** Print a message to the console saying: "Success! Your academic bio has been saved to MyBio.txt."

*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct stStudent
{
	string FullName;
	short unsigned age;
	string University;
	string Major;
};

stStudent ReadStudentCard()
{
	stStudent Student;

	cout << "Enter Your Full Name: ";
	getline(cin, Student.FullName);

	cout << "Enter Your Age: ";
	cin >> Student.age;
	cin.ignore();

	cout << "Enter Your Universty Name: ";
	getline(cin, Student.University);

	cout << "Enter Your Major: ";
	getline(cin, Student.Major);

	return Student;
}

void WriteInFile(stStudent student)
{
	fstream BioFile;

	BioFile.open("MyBio.txt", ios::out);

	if (BioFile.is_open())
	{
		BioFile << "--- Student Professional Biography ---\n";
		BioFile << "Full Name : " << student.FullName;
		BioFile << "\nAge       : " << student.age;
		BioFile << "\nUniversity: " << student.University;
		BioFile << "\nMajor     : " << student.Major << '\n';
		BioFile << "--------------------------------------\n";

		BioFile.close();

		cout << "Success! Your academic bio has been saved to MyBio.txt.\n";
	}
}

int main()
{
	stStudent student = ReadStudentCard();

	WriteInFile(student);

	return 0;
}