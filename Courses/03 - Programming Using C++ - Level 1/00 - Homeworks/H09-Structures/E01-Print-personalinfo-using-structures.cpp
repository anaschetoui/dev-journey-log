/*
Write program to do the following using structures:

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

struct Person
{
	string FullName;
	short Age;
	string City;
	string Country;
	float MonthlySalary;
	float YearlySalary;
	char Gender;
	bool isMarried;
};

int main()
{
	Person Person1;

	Person1.FullName = "Mohammed Abu-Hadhoud";
	Person1.Age = 44;
	Person1.City = "Amman";
	Person1.Country = "Jordan";
	Person1.MonthlySalary = 5000;
	Person1.YearlySalary = Person1.MonthlySalary * 12;
	Person1.Gender = 'M';
	Person1.isMarried = 1;

	cout << "*****************************\n";
	cout << "Name: " << Person1.FullName;
	cout << "\nAge: " << Person1.Age;
	cout << "\nCity: " << Person1.City;
	cout << "\nCountry: " << Person1.Country;
	cout << "\nMonthly Salary: " << Person1.MonthlySalary;
	cout << "\nYearly Salary: " << Person1.YearlySalary;
	cout << "\nGender: " << Person1.Gender;
	cout << "\nMarried: " << Person1.isMarried;
	cout << "\n*****************************\n";

	return 0;
}