/*
Homework - Employee Exercise

Create a class:

clsEmployee

ID
First name
Last name
FullName()
Title
Email
Phone
Salary
Department
SendEmail(..)
SendSMS(...)
Print()

Including all properties Set and Get, except for the ID Read Only.

Use Constructor to initialize all values.
*/

#include <iostream>
#include <string>
using namespace std;

class clsEmployee
{
private:
	short _ID;
	string _FirstName;
	string _LastName;
	string _Title;
	string _Email;
	string _Phone;
	float _Salary;
	string _Department;

public:

	clsEmployee(
		short ID,
		string FirstName,
		string LastName,
		string Title,
		string Email,
		string Phone,
		float Salary,
		string Department)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Title = Title;
		_Email = Email;
		_Phone = Phone;
		_Salary = Salary;
		_Department = Department;
	}

	short GetID()
	{
		return _ID;
	}

	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string GetFirstName()
	{
		return _FirstName;
	}

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	string GetLastName()
	{
		return _LastName;
	}

	string GetFullName()
	{
		return _FirstName + " " + _LastName;
	}

	void SetTitle(string Title)
	{
		_Title = Title;
	}

	string GetTitle()
	{
		return _Title;
	}

	void SetEmail(string Email)
	{
		_Email = Email;
	}

	string GetEmail()
	{
		return _Email;
	}

	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}

	string GetPhone()
	{
		return _Phone;
	}

	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}

	float GetSalary()
	{
		return _Salary;
	}


	void SetDepartment(string Department)
	{
		_Department = Department;
	}

	string GetDepartment()
	{
		return _Department;
	}

	void SendEmail(string Subject, string Body)
	{
		cout << "The Following message sent successfully to email: " << _Email << '\n';
		cout << "Subject: " << Subject << endl;
		cout << "Body: " << Body << endl;
	}

	void SendSMS(string Message)
	{
		cout << "The Following message sent seccessfuly to Phone: " << _Phone << endl;
		cout << Message << endl;
	}


	void PrintInfo()
	{
		cout << "Info:\n";
		cout << "_____________________\n";
		cout << "ID        : " << _ID << '\n';
		cout << "FirstName : " << _FirstName << '\n';
		cout << "LastName  : " << _LastName << '\n';
		cout << "FullName  : " << GetFullName() << '\n';
		cout << "Title     : " << _Title << '\n';
		cout << "Email     : " << _Email << '\n';
		cout << "Phone     : " << _Phone << '\n';
		cout << "Salary    : " << _Salary << '\n';
		cout << "Department: " << _Department << '\n';
		cout << "_____________________\n";
	}


};

int main()
{
	clsEmployee Employee1(833, "Anas", "Chetoui", "IT", "anas@email.com", "065443356", 5000, "XDepartment");

	Employee1.PrintInfo();


	return 0;

}