/*
Write a Program to ask user to enter as many Employees as s/he wants,
each time an Employee entered add it to your vector and ask the user if
s/he wants to add more Employees until s/he says No, then print all vector
elements on the screen.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct stEmployee
{
	string FristName = "";
	string LastName = "";
	float Salary = 0.00f;
};


void ReadEmployees( vector <stEmployee>& vEmployee)
{
	stEmployee TempEmployee;
	char Addmore = 'N';
	short Counter = 0;
	do
	{
		system("CLS");
		Counter++;
		printf("Enter Employee %02d: \n",Counter);

		cout << "First Name : ";
		cin >> TempEmployee.FristName;

		cout << "Last Name: ";
		cin >> TempEmployee.LastName;

		cout << "Salary: ";
		cin >> TempEmployee.Salary;

		vEmployee.push_back(TempEmployee);

		cout << "Do you want to add more Employees (Y/N): ";
		cin >> Addmore;

	} while (Addmore == 'Y' || Addmore == 'y');

}

void PrintEmployees(vector <stEmployee>& vEmployee)
{
	system("CLS");
	short i = 1;
	for (stEmployee& Employee : vEmployee)
	{
		cout << "Employee #" << i ;
		cout << "\nFirst Name : " << Employee.FristName;
		cout << "\nLast Name  : " << Employee.LastName;
		cout << "\nSalary     : " << Employee.Salary;
		cout << "\n--------------------\n";
		i++;
	}
}

int main()
{
	vector <stEmployee>vEmployee;

	ReadEmployees(vEmployee);
	PrintEmployees(vEmployee);

	return 0;
}