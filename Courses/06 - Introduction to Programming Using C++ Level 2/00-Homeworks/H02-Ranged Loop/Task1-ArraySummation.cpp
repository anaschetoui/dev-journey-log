/*Task1: Array Summation

Create an array of 10 integers. Use a range-based for loop to calculate the total sum of all elements and print the result

*/

#include <iostream>
using namespace std;

int main()
{
	int arr[10] = { 15,97,25,69,47,32,1,56,24,83 };

	int Sum = 0;

	for (int Number : arr)
	{
		Sum += Number;
	}
	
	cout << "Sum = " << Sum;

	return 0;
}