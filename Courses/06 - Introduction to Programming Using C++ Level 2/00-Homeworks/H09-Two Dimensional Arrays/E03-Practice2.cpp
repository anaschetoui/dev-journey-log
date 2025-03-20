/* Lesson #27-Two Dimensional Arrays | 3x3 matrix
*
Create a program that allows the user to store and analyze a 3x3 matrix.
1. **Fill the Matrix:** Use nested loops to let the user fill a 3x3 integer array.
2. **Search Value:** Ask the user to enter a "Target Number" to search for.
3. **Analyze & Output:**
   - **Count:** Calculate how many times the Target Number appears in the matrix.
   - **Locations:** Print the coordinates (Row, Column) for every time the number is found.
   - **Overall Max:** Find and print the largest number in the entire matrix.

**Expected Output Example:**
Enter numbers for 3x3 matrix: [1, 5, 3, 5, 2, 5, 7, 8, 9]
Enter the number you want to search for: 5

--- Analysis Results ---
Number 5 found 3 times.
Locations:
- Found at Row: 0, Col: 1
- Found at Row: 1, Col: 0
- Found at Row: 1, Col: 2

The largest number in the matrix is: 9

*/

#include <iostream>
#include <cstdio>
using namespace std;

short ReadNumber(string Message)
{
	short Num = 0;
	do
	{
		cout << Message;
		cin >> Num;
	} while (Num < 0 || Num > 100);

	return Num;
}

void Fill2DArrayWithNumbers(int arr[3][3])
{
	cout << "Enter numbers for 3x3 matrix :\n";
	for (int i = 0; i < 3; i++)
	{
		printf("Enter Numbers (1-100) for Row %d: \n", i + 1);
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}

}

void FindNumberInMatrix(int arr[3][3], short NumbertoFind)
{
	short Counter = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (NumbertoFind == arr[i][j])
				Counter++;
		}

	}

	printf("Number %d found %d time(s).\n", NumbertoFind, Counter);
}

void FindNumberLocation(int arr[3][3], short NumbertoFind)
{
	cout << "Locations:\n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (NumbertoFind == arr[i][j])
				printf("- Found at Row: %d, Col: %d\n", i, j);
		}

	}

}

int MaxNumberInMatrix(int arr[3][3])
{

	int MaxNum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (MaxNum < arr[i][j])
				MaxNum = arr[i][j];
		}

	}
	return MaxNum;

}


int main()
{
	int arr[3][3];

	Fill2DArrayWithNumbers(arr);
	short NumberToFind = ReadNumber("Enter the number you want to search for: ");

	system("CLS");
	cout << "--- Analysis Results ---\n";


	FindNumberInMatrix(arr, NumberToFind);
	FindNumberLocation(arr, NumberToFind);
	int MaxNumber = MaxNumberInMatrix(arr);

	printf("\nThe largest number in the matrix is: %d\n", MaxNumber);

	return 0;
}