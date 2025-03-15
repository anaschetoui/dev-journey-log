// P40-Copy-Distinct-Numbers-to-Array

#include <iostream>
using namespace std;


void FillArray(int arr[100], int& arrLength)
{
	
		arr[0] = 10, arr[1] = 10, arr[2] = 10,
		arr[3] = 50, arr[4] = 50,
		arr[5] = 70, arr[6] = 70, arr[7] = 70, arr[8] = 70,
		arr[9] = 90;

		arrLength = 10;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n';
}

short FindNumberPositionInArray(int arr[100], int arrLength, int Number)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
			return i;
	}
	return -1;
}

bool IsNumberInArray(int arr[100], int arrLength, int Number)
{
	return (FindNumberPositionInArray(arr, arrLength, Number) >= 0);
}

void AddArrayElement(int arr[100], int& arrlength, int Number)
{
	arrlength++;

	arr[arrlength - 1] = Number;
}

void CopyDistinctNumbersToArray(int arr1[100], int arr2[100], int arrLength, int& arrLength2)
{

	for (int i = 0; i < arrLength; i++)
	{
		
		if (IsNumberInArray(arr2, arrLength2, arr1[i]))
			continue;

			AddArrayElement(arr2, arrLength2, arr1[i]);
	}
}

int main()
{
	int arr[100],arr2[100], arrLength =0, arrLength2 = 0;

	FillArray(arr, arrLength);

	cout << "Array1 Elements: \n";
	PrintArray(arr, arrLength);

	CopyDistinctNumbersToArray(arr, arr2, arrLength, arrLength2);

	cout << "Array2 Distinct Numbers: \n";
	PrintArray(arr2, arrLength2);


	return 0;
}