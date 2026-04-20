// P30-Sum-Of-2Arrays-to-a-Third-One

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

int RandomNumber(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{
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

void SumOfArrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arrSum[i] = arr1[i] + arr2[i];
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arr2[100], arrSum[100], arrLength = ReadPositiveNumber("Enter How Many Elements: ");

	FillArrayWithRandomNumbers(arr1, arrLength);
	FillArrayWithRandomNumbers(arr2, arrLength);

	cout << "\nArray 1 Elements: \n";
	PrintArray(arr1, arrLength);

	cout << "\nArray 1 Elements: \n";
	PrintArray(arr2, arrLength);

	SumOfArrays(arr1, arr2, arrSum, arrLength);

	cout << "\nSum of Array 1 and Array 2 Elements: \n";
	PrintArray(arrSum, arrLength);

	return 0;

}
