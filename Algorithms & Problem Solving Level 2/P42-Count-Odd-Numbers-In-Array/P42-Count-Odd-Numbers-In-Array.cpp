// P42-Count-Odd-Numbers-In-Array

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




int OddCount(int arr1[100], int arrLength)
{
	int Counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr1[i] % 2 != 0)
		{
			Counter++;
		}
	}
	return Counter;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arrLength = 0;

	FillArrayWithRandomNumbers(arr1, arrLength);

	cout << "Array1 Elements: \n";
	PrintArray(arr1, arrLength);


	cout << "\nOdd Numbers Count is " << OddCount(arr1, arrLength) <<'\n';
	return 0;
}