/*
Write a Program to ask user to enter as many numbers as s/he wants, each
time a number entered add it to your vector, and ask the user if s/he wants
to add more numbers until s/he says No, then print all vector elements on
the screen.

*/

#include <iostream>
#include <vector>
using namespace std;

short ReadNumber(string Message)
{
	short Num = 0;
	do
	{
		cout << Message;
		cin >> Num;
	} while (Num < 0 || Num > 100);

	return Num;
}


void FillVectorWithNumbers(vector <int>& vNumbers)
{
	int Number = 0;
	char Addmore = 'N';

	do
	{
		Number = ReadNumber("Enter a Number (1-100): ");

		vNumbers.push_back(Number);

		cout << "Do you want to add more (Y/N): ";
		cin >> Addmore;

	} while (Addmore == 'y' || Addmore == 'Y');

}


void PrintVectorNumber(vector <int> &vNumbers)
{
	system("cls");
	cout << "Your Numbers are: \n";

	for (int& Number : vNumbers)
	{
		cout << Number << endl;
	}

}

int main()
{
	vector <int> vNumbers;

	FillVectorWithNumbers(vNumbers);
	PrintVectorNumber(vNumbers);


	return 0;
}