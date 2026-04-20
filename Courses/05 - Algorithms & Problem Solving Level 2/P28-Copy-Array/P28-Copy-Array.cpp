// P28-Copy-Array


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

void CopyArray(int arr1[100], int arr2[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr2[i] = arr1[i];
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arr2[100], arrLength;

	FillArrayWithRandomNumbers(arr1, arrLength);

	cout << "Array1 Elements: \n";
	PrintArray(arr1, arrLength);

	CopyArray(arr1,arr2, arrLength);

	cout << "Array2 Elements: \n";
	PrintArray(arr2, arrLength);

	return 0;
}