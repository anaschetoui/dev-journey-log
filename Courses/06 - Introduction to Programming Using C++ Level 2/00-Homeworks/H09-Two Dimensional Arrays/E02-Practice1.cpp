/*
Create a program that manages a 3x3 integer matrix.
1. **Declare** a 2D integer array of size `[3][3]`.
2. **User Input:** Use nested `for` loops and `cin` to ask the user to fill the matrix with numbers.
3. **Logic & Output:**
   - Display the matrix in a tidy grid format.
   - At the end of each row, calculate and print the **Sum** of that specific row.


**Expected Output Example:**
Enter numbers for a 3x3 matrix:
[User enters 1 2 3, 4 5 6, 7 8 9...]

1   2   3  | Row Sum: 6
4   5   6  | Row Sum: 15
7   8   9  | Row Sum: 24

*/

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

void Fill2DArray(int arr[3][3])
{

	for (int x = 0; x < 3; x++)
	{
		cout << "Fill Row " << x + 1 << endl;
		for (int y = 0; y < 3; y++)
		{
			cin >> arr[x][y];
			cout << " ";
		}
		cout << '\n';
	}
}

void Print2DArray(int arr[3][3])
{
	for (int x = 0; x < 3; x++)
	{
		int Sum = 0;
		for (int y = 0; y < 3; y++)
		{

			cout << setw(2) << setfill('0') << arr[x][y] << " ";
			Sum += arr[x][y];
		}
		cout << "| Row Sum: " << Sum << endl;
	}
}

int main()
{
	int arr[3][3];

	Fill2DArray(arr);
	Print2DArray(arr);

	return 0;
}