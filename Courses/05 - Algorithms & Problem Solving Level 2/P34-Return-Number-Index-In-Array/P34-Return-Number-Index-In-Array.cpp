// P34-Return-Number-Index-In-Array

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadPositiveNumebr(string Message)
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

short FindNumberPositionInArray(int arr[100], int arrLength, int Number)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
			return i;
	}
	return -1;
}

int main()
{
	srand((unsigned)time(NULL));


	int arr[100], arrLength = ReadPositiveNumebr("Enter How Many Elements: ");
		

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray Elements: \n";

	PrintArray(arr, arrLength);
	
	int Number = ReadPositiveNumebr("Enter a Number to search for: ");

	short Index = FindNumberPositionInArray(arr, arrLength, Number);

	cout << "\nThe Number you're looking for is --> " << Number;
	if (Index >= 0)
	{
		cout << "\nThe Number Found at Position     --> " << Index;
		cout << "\nThe Number Found it's order      --> " << Index + 1;
	}
	else
		cout << "\nThe Number isn't Found.\n";

	return 0;
}