/*Task 1: ID Number Validation
Write a program that asks the user to enter their ID Number(Integer).If the user enters a non - numeric value(like 'abc'),
display an error message "Invalid Input! Enter a numeric ID" and keep asking until a valid number is entered
*/

#include <iostream>
#include <limits> // for --> cin.ignore(numeric_limits<streamsize>::max(), '\n');
using namespace std;

int ReadIDNumber()
{
	int ID = 0;

	cout << "Enter a numeric ID: ";
	cin >> ID;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "Invalid Input! Enter a numeric ID: ";
		cin >> ID;
	}
	return ID;
}

int main()
{
	int Id = ReadIDNumber();

	cout << "\nYour ID is " << Id << endl;

	return 0;
}