/*Task 3: Average Grade Calculator

Create an array containing 5 student grades.
Use a range-based for loop to find the average grade (Sum divided by Count) and print it
*/

#include <iostream>
using namespace std;

int main()
{
	float arr[] = { 50.65,90,68,49.99,55.1 };

	float Avg = 0.00f, SumOfGrade = 0.00f;
	int Count = 0;

	for (float& Number : arr)
	{
		SumOfGrade += Number;
		Count++;
	}

	Avg = SumOfGrade / Count;

	cout << "Average = " << Avg;

	return 0;
}