// Problem 02 -> Algorithms & Problem Solving Level 1

#include <iostream>
#include <string>
using namespace std;


void PrintName()
{
	string Name;

	cout << "Enter Your Name:";
	getline(cin, Name);

	cout << "Your Name --> " << Name;
}

int main()
{

	PrintName();
	return 0;
}