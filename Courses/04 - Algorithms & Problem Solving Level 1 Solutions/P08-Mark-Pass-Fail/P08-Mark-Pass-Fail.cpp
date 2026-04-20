// P08-Mark-Pass-Fail
/*
Write a program to ask the user to enter:
Mark
Then Print the `PASS` if mark >=50, otherwise print `FAIL`
*/
#include <iostream>
using namespace std;

enum enPassFail { Fail = 0, Pass = 1 };

float ReadMark()
{
	float Mark = 0.000f;

	do
	{
		cout << "Enter Your Mark: ";
		cin >> Mark;
	} while (Mark < 0);

	return Mark;
}

enPassFail PassFail(float Mark)
{
	return Mark < 50 ? enPassFail::Fail : enPassFail::Pass;
}

void PrintPassFail(enPassFail PassFail)
{
	PassFail == enPassFail::Pass ? cout << "\nPass\n" : cout << "\nFail\n";
}
int main()
{

	PrintPassFail(PassFail(ReadMark()));

	return 0;
}

