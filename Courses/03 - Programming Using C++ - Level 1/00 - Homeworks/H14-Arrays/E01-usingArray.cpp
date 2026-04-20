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

int main()
{
	float Grade[3];

	cout << "Please Enter Grade1 ?\n";
	cin >> Grade[0];

	cout << "Please Enter Grade2 ?\n";
	cin >> Grade[1];

	cout << "Please Enter Grade3 ?\n";
	cin >> Grade[2];

	float Average = (Grade[0] + Grade[1] + Grade[2]) / 3;

	cout << "*********************************\n";
	cout << "The average of grades is " << Average;



	return 0;
}