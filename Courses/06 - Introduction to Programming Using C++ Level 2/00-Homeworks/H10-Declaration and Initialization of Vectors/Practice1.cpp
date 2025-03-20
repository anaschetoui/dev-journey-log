/*
Create a simple program to practice Vector declaration and optimized iteration.
1. **Declare** a vector of type `float` named `vGrades`.
2. **Initialize** it with 5 grades (e.g., 15.5, 18.0, 12.5, 19.0, 14.5).
3. **Display** all grades using a **Range-based for loop** with a **reference*.

**Expected Output:**
Grade 1: 15.50
Grade 2: 18.00
...

*/

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{

	vector<float> vGrades = { 15.5,18,12.5,19,14.5 };
	int Counter = 0;
	for (float& grades : vGrades)
	{
		Counter++;
		printf("Grade %d: %0.2f\n", Counter, grades);
	}

	return 0;
}