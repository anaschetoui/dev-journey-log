#include <iostream>
#include <string>
using namespace std;

class clsPerson
{
private:

	short _ID = 0;
	string _FirstName = "";
	string _LastName = "";
	string _Email = "";
	string _Phone = "";

public:

	clsPerson(short ID, string FirstName, string LastName, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}

	short GetID()
	{
		return _ID;
	}

	__declspec(property(get = GetID)) short ID;

	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string GetFirstName()
	{
		return _FirstName;
	}

	__declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	string GetLastName()
	{
		return _LastName;
	}

	__declspec(property(get = GetLastName, put = SetLastName)) string LastName;

	string GetFullName()
	{
		return _FirstName + " " + _LastName;
	}

	__declspec(property(get = GetFullName)) string FullName;

	void SetEmail(string Email)
	{
		_Email = Email;
	}

	string GetEmail()
	{
		return _Email;
	}

	__declspec(property(get = GetEmail, put = SetEmail)) string Email;

	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}

	string GetPhone()
	{
		return _Phone;
	}

	__declspec(property(get = GetPhone, put = SetPhone)) string Phone;

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
		cout << "ID       : " << _ID << '\n';
		cout << "FirstName: " << _FirstName << '\n';
		cout << "LastName : " << _LastName << '\n';
		cout << "FullName : " << FullName << '\n';
		cout << "Email    : " << _Email << '\n';
		cout << "Phone    : " << _Phone << '\n';
		cout << "_____________________\n";
	}


	~clsPerson()
	{

	}
};

int main()
{
	clsPerson Person1(7633, "Anas", "Chetoui", "anas@email.com", "0993333222");

	Person1.PrintInfo();
	cout << '\n';
	Person1.SendEmail("Hello", "Are you Still there");
	cout << '\n';
	Person1.SendSMS("Hello There");

	return 0;
}