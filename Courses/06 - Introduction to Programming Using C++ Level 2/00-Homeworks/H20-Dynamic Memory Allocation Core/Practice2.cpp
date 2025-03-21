/*### Exercise 2: Dynamic Numbers Processor
**Goal:** Perform operations on a dynamic array using Pointer Arithmetic only.

**Requirements:**
1. Ask the user to enter the size of an integer array.
2. Dynamically allocate the array.
3. Use a loop to fill the array, but **DO NOT** use `ptr[i]`. Use `*(ptr + i)` instead.
4. Create a function `GetMaxNumber` that takes the pointer and size, then returns the maximum number using pointers.
5. After printing the maximum number, ask the user if they want to "Clear Memory".
6. If they say "Yes", use `delete[]`, print a confirmation message, and ensure the pointer is safe (nullptr).
*/

#include <iostream>
using namespace std;

size_t ReadSize()
{
	size_t Size = 0;

	do
	{
		cout << "Enter The Size Of Array: ";
		cin >> Size;

	} while (Size <= 0);

	return Size;
}

void FillArray(int* ptr, size_t Size)
{
	system("CLS");
	cout << "Fill With Numbers\n\n";

	for (size_t i = 0; i <= Size - 1; i++)
	{
		cout << "Enter Number #" << i + 1 << ": ";
		cin >> *(ptr + i);
	}
}

void PrintArray(int* ptr, size_t Size)
{
	system("CLS");
	cout << "Your Numbersa\n\n";

	for (size_t i = 0; i <= Size - 1; i++)
	{
		cout << *(ptr + i) << " ";
	}
}

int GetMaxNumber(int* ptr, size_t Size)
{
	int MaxNumber = *ptr;

	for (size_t i = 0; i <= Size - 1; i++)
	{
		if (MaxNumber < *(ptr + i))
			MaxNumber = *(ptr + i);
	}

	return MaxNumber;
}

void ClearMemory(int*& ptr)
{
	char Ask = 'N';

	cout << "Do you Want to Clear Memory (Y/N): ";
	cin >> Ask;

	if (Ask == 'y' || Ask == 'Y')
	{
		delete[] ptr;
		ptr = nullptr; // to make sure the point will not point to somthing else.
		system("CLS");
		cout << "Congratulations! Memory is relesed.\n";
		system("Pause");
	}

}

int main()
{


	size_t Size = ReadSize();

	int *ptr = new int[Size];

	FillArray(ptr, Size);
	PrintArray(ptr, Size);

	cout << "\n\n\t======================\n";
	cout << "\t Max Number -> " << GetMaxNumber(ptr, Size);
	cout << "\n\t======================\n";

	ClearMemory(ptr);
	

	return 0;
}