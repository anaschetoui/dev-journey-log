/*
Write program to do the following:

*****************************
Name: Mohammed Abu-Hadhoud
Age : 44 Years
City: Amamn
Country: Jordan
Monthly Salary: 5000
Yearly Salary: 60000
Gender : M
Married: 1
*****************************

*/

#include <iostream>
using namespace std;

int main()
{
	string Name = "Mohammed Abu-Hadhoud";
	int Age = 44;
	string City = "Amman";
	string Country = "Jordan";
	float MonthlySalary = 5000;
	char Gender = 'M';
	bool Married = true;

	cout << "*****************************\n";
	cout << "Name: " << Name << "\n";
	cout << "Age: " << Age << "\n";
	cout << "City:" << City << "\n";
	cout << "Country: " << Country << "\n";
	cout << "Monthly Salary: " << MonthlySalary << "\n";
	cout << "Yearly Salary: " << MonthlySalary * 12<< "\n";
	cout << "Gender: " << Gender << "\n";
	cout << "Married: " << Married << "\n";
	cout << "*****************************";


	return 0;
}