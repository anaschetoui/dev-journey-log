// P36-Add-Array-Element-Simi-Dynamic

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

void AddArrayElement(int arr[100], int& arrlength, int Number)
{
	arrlength++;

	arr[arrlength - 1] = Number;
}

void InputUserNumbersInArray(int arr[100], int &arrLength)
{
	bool AddMore = false;
	arrLength = 0;

	

	do{
		int Number = ReadPositiveNumebr("Enter a Number: ");
		AddArrayElement(arr, arrLength, Number);

		cout << "Do You Want To Add More Numbers (0-1): ";

		cin >> AddMore;

	} while (AddMore);
	
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
	int arr[100], arrLength;

	InputUserNumbersInArray(arr, arrLength);

	cout << "\nArray Length: " << arrLength;
	cout << "\nArray Elements: ";
	PrintArray(arr, arrLength);

	return 0;
}