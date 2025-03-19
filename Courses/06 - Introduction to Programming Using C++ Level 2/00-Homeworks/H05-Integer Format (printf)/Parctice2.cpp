/* Lesson #23 - Integer Format (printf) 

Create a program to format a flight departure date and time using `printf`.
1. Define the following as integers: `Day=5`, `Month=1`, `Year=2026`, `Hour=9`, `Minute=7`.
2. Use **only one** `printf` statement to produce this exact output:
   `Date: 05/01/2026 | Time: 09:07`

*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	printf("%0*d/%0*d/%0*d", 1, 1, 4, 05, 01, 2026);

	return 0;
}