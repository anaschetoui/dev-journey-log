// P41-isPalindromeArray

#include <iostream>
using namespace std;

void FillArray(int arr[100], int& arrLength)
{

	arr[0] = 10, arr[1] = 20, arr[2] = 30,
	arr[3] = 30, arr[4] = 20, arr[5] = 10;

	arrLength = 6;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n';
}

bool isPalindrome(int arr[100], int arrlength)
{
	short Counter = 0;
	for (int i = 0; i < arrlength; i++)
	{ 
		if (arr[i] != arr[arrlength - i - 1])
			return false;
	}
	
	return true;
}

int main()
{
	int arr[100], arr2[100], arrLength;

	FillArray(arr, arrLength);

	cout << "Array1 Elements: \n";
	PrintArray(arr, arrLength);

	isPalindrome(arr, arrLength) ? cout << "\nYes Array Is Palindrome.\n" : cout << "\nNo, Array Isn't Palindrome.\n";

	return 0;
}
