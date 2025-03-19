/* Lesson #23 - Integer Format (printf) 
Write a function named `RecordTransaction` that takes no parameters.

1. Inside the function, define a normal variable
2. Define a static variable
3. Increment both variables by 1 every time the function is called.
4. Use `printf` to display the values in this format: `Local: X, Static: Y`.
5. In the `main` function, call `RecordTransaction()` three times
*/

#include <iostream>
#include <cstdio>
using namespace std;

void RecordTransaction()
{
	int localCount = 0;

	static int staticCount = 0;

	localCount++;

	staticCount++;

	printf("Local : %d\nStatic: %d\n", localCount, staticCount);
}

int main()
{
	RecordTransaction();
	RecordTransaction();
	RecordTransaction();

	return 0;
}