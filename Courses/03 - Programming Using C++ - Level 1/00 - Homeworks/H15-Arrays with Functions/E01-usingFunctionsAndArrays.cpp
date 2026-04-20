/*
Write a program using array to do the following:

Please enter Grade1 ?
80
Please enter Grade2 ?
75
Please enter Grade3 ?
90
********************************
81.6667
*/

#include <iostream>
using namespace std;

void ReadGradeinArray(float Grade[3])
{
	cout << "Enter Grade1 :";
	cin >> Grade[0];

	cout << "Enter Grade2 :";
	cin >> Grade[1];

	cout << "Enter Grade3 :";
	cin >> Grade[2];
}

float CalculateAvgGrade(float Grade[3])
{
	float Ave = (Grade[0] + Grade[1] + Grade[2]) / 3;

	return Avg;
}

int main()
{
	float Grade[3];

	ReadGradeinArray(Grade);

	cout << "Avg = " << CalculateAvgGrade(Grade);

	return 0;
}