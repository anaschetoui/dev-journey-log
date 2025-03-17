/*Task2: Even and Odd Counter

Define an array of integers containing various numbers.
Use a range-based for loop to count how many even numbers and how many odd numbers are in the array, then display both counts
*/

#include <iostream>
using namespace std;

int main()
{
	int arr[10] = { 15,97,25,69,47,32,1,56,24,83 };

	int EvenCounter = 0, OddCounter = 0;

	for (int Number : arr)
	{
		(Number % 2 != 0) ? OddCounter++ : EvenCounter++;
	}

	cout << "Even Number are " << EvenCounter;
	cout << "\nOdd Number are " << OddCounter;

	return 0;
}