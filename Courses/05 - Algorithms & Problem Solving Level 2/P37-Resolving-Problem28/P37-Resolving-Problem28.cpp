// P37-Resolving-Problem28
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


void AddArrayElement(int arr[100], int &arrlength, int Number)
{
	arrlength++;

	arr[arrlength - 1] = Number;
}


void CopyArrayUsingAddArrayElement(int arr1[100], int arr2[100], int arrLength,int arrLength2)
{
	for (int i = 0; i < arrLength; i++)
	{
		AddArrayElement(arr2, arrLength2, arr1[i]);
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

int main()

{
	srand((unsigned)time(NULL));

	int arr1[100], arr2[100], arrLength = 0, arrLength2 = 0;

	FillArrayWithRandomNumbers(arr1, arrLength);

	cout << "Array1 Elements: \n";
	PrintArray(arr1, arrLength);

	CopyArrayUsingAddArrayElement(arr1, arr2, arrLength, arrLength2);

	cout << "Array2 Elements: \n";
	PrintArray(arr2, arrLength);

	return 0;
}