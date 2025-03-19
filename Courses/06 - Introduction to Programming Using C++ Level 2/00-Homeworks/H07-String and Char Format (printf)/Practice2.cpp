/*  Lesson #25 - String and Char Format (printf)

Create a program that prints a specific character in a diagonal "staircase" pattern.
1. **Define** a character variable: `myChar = '#';`
2. **Action:** Use three `printf` statements to print this character..

**Expected Output:**
#
  #
	#

*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	char myChar = '#';

	printf("%*c\n", 1, myChar);
	printf("%*c \n", 3, myChar);
	printf("%*c\n", 5, myChar);

	return 0;
}