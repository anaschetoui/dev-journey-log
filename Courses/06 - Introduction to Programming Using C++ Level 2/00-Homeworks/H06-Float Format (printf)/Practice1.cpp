/*  Lesson #24 - Float Format (printf)

Create a program that displays a student's ID and their average grade.
1. Define the following variables:
   - ` studentID = 75;`
   - `averageGrade = 18.4568;`
2. Use **only one** `printf` statement to produce this exact output:
   `Student ID: 00075 | Average Grade: 18.46`

*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int studentID = 75;
	float averageGrade = 18.4568f;

	printf("Student ID: %0*d | Average Grade: %.2f", 5, studentID, averageGrade);

	return 0;
}