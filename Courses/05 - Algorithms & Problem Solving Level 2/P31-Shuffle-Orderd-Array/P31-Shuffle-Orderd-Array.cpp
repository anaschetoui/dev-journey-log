// P31-Shuffle-Orderd-Array

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

void FillArrayWithOrderdNumbers(int arr[100], int arrLength)
{
	for (int i = 1; i <= arrLength; i++)
	{
		arr[i - 1] = i;
	}
}

void Swap(int& Num1, int& Num2)
{
	int Temp;    
	Temp = Num1;    
	Num1 = Num2;       
	Num2 = Temp;    
}

void ShuffleArray(int arr[100],int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
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

	int arr[100],
		arrLength = ReadPositiveNumber("Enter Number Of Elements: ");
	FillArrayWithOrderdNumbers(arr, arrLength);

	PrintArray(arr, arrLength);

	ShuffleArray(arr, arrLength);

	PrintArray(arr, arrLength);

	return 0;
}
