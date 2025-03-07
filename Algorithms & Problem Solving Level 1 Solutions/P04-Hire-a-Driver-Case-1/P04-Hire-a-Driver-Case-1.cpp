// P04-Hire-a-Driver-Case-1
/*
Write a program to ask the user to enter his/her:
Age
Driver License
Then Print `Hired` if his/her age is grater than 21 & s/he has a driver license, otherwise Print `Rejected`.
*/

#include <iostream>
using namespace std;

struct stReadInfo
{
	int Age=0;
	bool HasDriverLicense = false;
};

stReadInfo ReadInfo()
{
	stReadInfo Info;


	do
	{
		cout << "Enter Your Age: ";
		cin >> Info.Age;
	} while (Info.Age <= 0);

	cout << "Do You Have a Driver License (1/0): ";
	cin >> Info.HasDriverLicense;

	return Info;
}

bool isHired(stReadInfo Info)
{
	return (Info.Age >= 21 && Info.HasDriverLicense);
}

void PrintResult(bool isHired)
{
	isHired ? cout << "\nHired\n" : cout << "\nRejected\n";
}

int main()
{
	stReadInfo Info = ReadInfo();

	bool Result = isHired(Info);

	PrintResult(Result);

	return 0;
}