// P27-Average-Of-Random-Array

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


int SumOfRandomArray(int arr[100], int arrLength)
{
	int Sum = 0;
	for (int i = 0; i < arrLength; i++)
	{
		Sum += arr[i];
	}

	return Sum;
}

float AverageOfRandomArray(int arr[100], int arrLength)
{
	

	return ((float)SumOfRandomArray(arr, arrLength) / arrLength);
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray Elements: ";
	PrintArray(arr, arrLength);

	cout << "Average = " << AverageOfRandomArray(arr, arrLength);


	return 0;
}