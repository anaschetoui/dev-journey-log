/*  Lesson #24 - Float Format (printf)

Write a program that calculates the result of a division and formats the output.
1. Define two integers: `int a = 10;` and `int b = 3;`.
2. Calculate the division: `float result = (float)a / b;`.
3. Use `printf` to print the result in three different levels of precision:
   - Level 1 (1 decimal): `Result: 3.3`
   - Level 2 (3 decimals): `Result: 3.333`
   - Level 3 (5 decimals): `Result: 3.33333`

*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int a = 10, b = 3;

	float result = (float)a / b;

	//using * as paramter
	printf("Result: %.*f\n", 1, result);
	printf("Result: %.*f\n", 3, result);
	printf("Result: %.*f\n", 5, result);

	//without parameter (without *)
	/*
	printf("Result: %.1f\n", result);
	printf("Result: %.3f\n", result);
	printf("Result: %.5f\n", result);
	*/

	return 0;
}