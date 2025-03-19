/*  Lesson #26 - Setw Manipulator

Create a program that displays a student's grades in a perfectly aligned table.
1. Define the following data:
   - Subject 1: "English", Grade: 95
   - Subject 2: "Programming", Grade: 98
   - Subject 3: "Physics", Grade: 85
2. The output should have a header (Subject | Grade) followed by a separator line (-------).

**Output**

Subject         |      Grade
-----------------------------
English         |         95
Programming     |         98
Physics         |         85

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	//header
	cout << setw(15) << left << "Subject"
		<< '|'
		<< setw(10) << right << "Grade";

	cout << '\n' << string(26, '-') << '\n';

	cout << setw(15) << left << "English"
		<< "|"
		<< setw(10) << right << "95"
		<< '\n'
		<< setw(15) << left << "Programming"
		<< "|"
		<< setw(10) << right << "98"
		<< '\n'
		<< setw(15) << left << "Physics"
		<< "|"
		<< setw(10) << right << "85"
		<< '\n';



	return 0;
}