/*
Write a program using array,structures and functions to do the following:

****************************************
FirstName: Mohammed
LastName: Abu-Hadhoud
Age: 44 Years Old.
Phone: 8982788
****************************************

****************************************
FirstName: Ali
LastName: Fadi
Age: 22 Years Old.
Phone: 5234222
****************************************

*/

#include <iostream>
using namespace std;

struct stPerson
{
	string FirstName;
	string LastName;
	int Age;
	string Phone;
};

void ReadPerson(stPerson& Person)
{

	cout << "Enter First Name: ";
	cin >> Person.FirstName;

	cout << "Enter Last Name: ";
	cin >> Person.LastName;

	cout << "Enter Age: ";
	cin >> Person.Age;

	cout << "Enter Phone Number: ";
	cin >> Person.Phone;
	cout << "\n\n";
}

void PrintPerson(stPerson Person)
{
	cout << "*************************************\n";
	cout << "First Name: " << Person.FirstName;
	cout << "\nLast  Name: " << Person.LastName;
	cout << "\nAge       : " << Person.Age << " Years Old";
	cout << "\nPhone     : " << Person.Phone;
	cout << "\n*************************************\n\n";

}

void ReadPersonInfo(stPerson Person[100], short Length)
{
	for (int i = 0; i <= Length - 1; i++)
	{
		ReadPerson(Person[i]);
	}
}

void PrintPersonInfo(stPerson Person[100], short Length)
{
	for (int i = 0; i <= Length - 1; i++)
	{
		PrintPerson(Person[i]);
	}
}

int main()
{
	stPerson Person[100];
	short Length;

	cout << "Enter Length: ";
	cin >> Length;

	ReadPersonInfo(Person, Length);
	PrintPersonInfo(Person, Length);

	return 0;
}