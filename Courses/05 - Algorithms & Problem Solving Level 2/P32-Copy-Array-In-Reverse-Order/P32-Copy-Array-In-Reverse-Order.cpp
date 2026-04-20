// P32-Copy-Array-In-Reverse-Order

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "Enter How many Elements do you want: ";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n';
}

void CopyArrayInReverse(int arr1[100], int arr2[100], int arrLength)
{
	for (int i = 1; i <= arrLength; i++)
	{
		arr2[i-1] = arr1[arrLength-i];
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arr2[100], arrLength;

	FillArrayWithRandomNumbers(arr1, arrLength);

	cout << "Array1 Elements: \n";
	PrintArray(arr1, arrLength);

	CopyArrayInReverse(arr1, arr2, arrLength);

	cout << "Array2 Elements After Copy: \n";
	PrintArray(arr2, arrLength);

	return 0;
}