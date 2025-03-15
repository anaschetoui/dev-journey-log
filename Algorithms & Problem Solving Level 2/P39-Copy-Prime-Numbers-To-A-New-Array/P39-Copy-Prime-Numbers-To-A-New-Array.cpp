// P39-Copy-Prime-Numbers-To-A-New-Array

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

enum enPrimeNotPrime
{
	Prime = 1, NotPrime = 0
};

enPrimeNotPrime CheckPrime(int Number)
{
	if (Number == 1)
		return enPrimeNotPrime::NotPrime;

	for (int i = 2; i * i <= Number; i++)
	{
		if (Number % i == 0)
			return enPrimeNotPrime::NotPrime;
	}

	return enPrimeNotPrime::Prime;
}

void CopyPrimeNumbers(int arr1[100], int arr2[100], int arrLength, int& arrLength2)
{

	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrime(arr1[i]) == enPrimeNotPrime::Prime)
			AddArrayElement(arr2, arrLength2, arr1[i]);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arr2[100], arrLength = 0, arrLength2 = 0;

	FillArrayWithRandomNumbers(arr1, arrLength);

	cout << "Array1 Elements: \n";
	PrintArray(arr1, arrLength);

	CopyPrimeNumbers(arr1, arr2, arrLength, arrLength2);

	cout << "Array2 Prime Numbers: \n";
	PrintArray(arr2, arrLength2);

	return 0;
}