// P38-Copy-Odd-Numbers-To-a-New-Array

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


void AddArrayElement(int arr[100], int& arrlength, int Number)
{
	arrlength++;

	arr[arrlength - 1] = Number;
}

void CopyOddNumbers(int arr1[100], int arr2[100], int arrLength, int &arrLength2)
{

	for (int i = 0; i < arrLength; i++)
	{
		if (arr1[i] % 2 != 0)
		{
			AddArrayElement(arr2, arrLength2, arr1[i]);
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arr2[100], arrLength=0, arrLength2=0;

	FillArrayWithRandomNumbers(arr1, arrLength);

	cout << "Array1 Elements: \n";
	PrintArray(arr1, arrLength);

	CopyOddNumbers(arr1, arr2, arrLength, arrLength2);

	cout << "Array2 Odd Numbers: \n";
	PrintArray(arr2, arrLength2);

	return 0;
}