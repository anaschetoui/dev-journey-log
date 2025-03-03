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

void ReadPersonInfo(stPerson Person[2])
{
	ReadPerson(Person[0]);
	ReadPerson(Person[1]);

}

void PrintPersonInfo(stPerson Person[2])
{
	PrintPerson(Person[0]);
	PrintPerson(Person[1]);
}

int main()
{
	stPerson Person[2];

	ReadPersonInfo(Person);
	PrintPersonInfo(Person);

	return 0;
}