// P22-Reapeated-Elements-Count-In-Array

#include <iostream>
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

void ReadElements(int arr[100], int &arrLength)
{
	cout << "Enter How Many Elements: ";
	cin >> arrLength;

	cout << "\nEnter array Elements: \n";
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Element [" << i + 1 << "]: ";
		cin >> arr[i];
	}
}

void PrintElements(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}


int TimeRepeated(int arr[100],int arrLength, short CheckNumber)
{
	int Counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == CheckNumber)
			Counter++;
	}

	return Counter;
}

int main()
{
	int arr[100],arrLength ;

	ReadElements(arr, arrLength);
	short CheckNumber = ReadPositiveNumber("\n\nEnter The Number you want to check: ");

	cout << "\nOriginal Array: ";
	PrintElements(arr, arrLength);

	short NumberFrequencyInElements = TimeRepeated(arr, arrLength, CheckNumber);

	cout << "\nNumber " << CheckNumber << " is repeated " << NumberFrequencyInElements << " Time(s).\n";

	return 0;

}