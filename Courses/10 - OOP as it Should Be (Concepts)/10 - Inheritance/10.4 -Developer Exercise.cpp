/*
Homework - Developer Exercise

Create a class for the Developer containing the following:

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
MainProgrammingLanguage
Print()

Including all properties Set and Get, except for the ID Read Only.

Use Constructor to initialize all values.
*/

#include <iostream>
#include <string>
using namespace std;

class clsPerson
{

private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:

    clsPerson(short ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }


    int GetID()
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

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }

    void Print()
    {
        cout << "\nInfo:";
        cout << "\n___________________";
        cout << "\nID       : " << _ID;
        cout << "\nFirstName: " << _FirstName;
        cout << "\nLastName : " << _LastName;
        cout << "\nFull Name: " << FullName();
        cout << "\nEmail    : " << _Email;
        cout << "\nPhone    : " << _Phone;
        cout << "\n___________________\n";

    }

    void SendEmail(string Subject, string Body)
    {

        cout << "\nThe following message sent successfully to email: " << _Email;
        cout << "\nSubject: " << Subject;
        cout << "\nBody: " << Body << endl;

    }

    void SendSMS(string TextMessage)
    {
        cout << "\nThe following SMS sent successfully to phone: " << _Phone;
        cout << "\n" << TextMessage << endl;
    }


};

class clsEmployee : public clsPerson
{

private:
    string _Title;
    string _Department;
    float _Salary;

public:

    clsEmployee(short ID,
        string FirstName,
        string LastName,
        string Email,
        string Phone,
        string Title,
        string Department,
        float Salary)
        : clsPerson(ID, FirstName, LastName, Email, Phone)

    {

        _Title = Title;
        _Department = Department;
        _Salary = Salary;

    }

    void SetTitle(string Title)
    {
        _Title = Title;
    }


    string GetTitle()
    {
        return _Title;
    }


    void SetDepartment(string Department)
    {
        _Department = Department;
    }


    string GetDepartment()
    {
        return _Department;
    }


    void SetSalary(float Salary)
    {
        _Salary = Salary;
    }


    float GetSalary()
    {
        return _Salary;
    }

    void Print()
    {

        cout << "\nInfo:";
        cout << "\n___________________";
        cout << "\nID        : " << GetID();
        cout << "\nFirstName : " << GetFirstName();
        cout << "\nLastName  : " << GetLastName();
        cout << "\nFull Name : " << FullName();
        cout << "\nEmail     : " << GetEmail();
        cout << "\nPhone     : " << GetPhone();

        cout << "\nTitle     : " << _Title;
        cout << "\nDepartment: " << _Department;
        cout << "\nSalary    : " << _Salary;

        cout << "\n___________________\n";

    }

};

class clsDeveloper : public clsEmployee
{
    string _MainProgrammingLanguage = "";

public:

    clsDeveloper(short ID,
        string FirstName,
        string LastName,
        string Email,
        string Phone,
        string Title,
        string Department,
        float Salary,
        string MainProgrammingLanguage)
        : clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Department, Salary)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    void SetMainProgrammingLanguage(string MainProgrammingLanguage)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    string GetMainProgrammingLanguage()
    {
        return _MainProgrammingLanguage;
    }

    void Print()
    {

        cout << "\nInfo:";
        cout << "\n________________________________________________";
        cout << "\nID                   : " << GetID();
        cout << "\nFirstName            : " << GetFirstName();
        cout << "\nLastName             : " << GetLastName();
        cout << "\nFull Name            : " << FullName();
        cout << "\nEmail                : " << GetEmail();
        cout << "\nPhone                : " << GetPhone();

        cout << "\nTitle                : " << GetTitle();
        cout << "\nDepartment           : " << GetDepartment();
        cout << "\nSalary               : " << GetSalary();

        cout << "\nProgramming Language : " << _MainProgrammingLanguage;

        cout << "\n________________________________________________\n";

    }
};

int main()

{

    clsDeveloper clsDeveloper1(33, "Anas", "Chetoui", "anas@email.com", "0643993", "BackEnd", "X", 6400, "C++");

    clsDeveloper1.Print();

    system("pause>0");
    return 0;
}