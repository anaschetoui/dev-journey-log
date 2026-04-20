/*
Write a program to do the following:

Please enter string1: Mohammed Abu-Hadhoud

Please enter string2: 5

Please enter string3: 10

*********************************
The length of string is 20
Charcters at 0,2,4,7 are: M h m d
Concatenating String2 and String3 = 510
5 * 10 = 50

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string String1;
	string String2;
	string String3;

	cout << "Please enter string1: ";
	getline(cin, String1);

	cout << "\nPlease enter string2: ";
	getline(cin, String2);

	cout << "\nPlease enter string3: ";
	getline(cin, String3);

	cout << "\n*************************************\n";
	cout << "The Length of string is " << String1.length() << endl;
	cout << "Character at 0,2,4,7 are: " << String1.at(0) << " " << String1.at(2) << " " << String1[4] << " " << String1[7] << endl;
	cout << "Concatenating String2 and String3 = " << String2 + String3 << endl;
	cout << String2 << " * " << String3 << " = " << stoi(String2) * stoi(String3) << endl;

	return 0;
}