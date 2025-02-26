/*
Write program to do the following (user who enter the infos) :

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
#include <string>

int main()
{
	string Name;
	int Age;
	string City;
	string Country;
	float MonthlySalary;
	char Gender;
	bool isMarried;

	cout << "Enter your name: ";
	getline(cin, Name); // to read full name
	cout << "Enter your Age: ";
	cin >> Age;
	cout << "Enter your city: ";
	cin >> City;
	cout << "Enter your Country: ";
	cin >> Country;
	cout << "Enter your Monthly Salary: ";
	cin >> MonthlySalary;
	cout << "Enter your Gender: ";
	cin >> Gender;
	cout << "Are you married (1/0): ";
	cin >> isMarried;

	system("cls"); // to clear cin screen

	cout << "*****************************\n";
	cout << "Name: " << Name << "\n";
	cout << "Age: " << Age << "\n";
	cout << "City:" << City << "\n";
	cout << "Country: " << Country << "\n";
	cout << "Monthly Salary: " << MonthlySalary << "\n";
	cout << "Yearly Salary: " << MonthlySalary * 12 << "\n";
	cout << "Gender: " << Gender << "\n";
	cout << "Married: " << isMarried << "\n";
	cout << "*****************************";


	return 0;
}