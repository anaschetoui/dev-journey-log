/*  Lesson #25 - String and Char Format (printf)

Write a program that formats a formal invitation using character arrays.
1. Define the following character arrays:
   - `studentName = "Anas";`
   - `courseName = "C++ Level 2";`
2. Use **one** `printf` statement to produce this output:
   `Dear Anas, Welcome to the "C++ Level 2" course!`

*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	char studentName[] = "Anas", courseName[] = "C++ Level 2";

	printf("Dear %s, Welcome to the \"%s\" course!\n", studentName, courseName);

	return 0;
}