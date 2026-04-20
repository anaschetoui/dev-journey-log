/*
Problem #51: 

Write a program to Update client by AccountNumber :

Enter Account Number: A150

Account Number   : A150
PIN code         : 4444
Name             : Mohammed Abu-Hadhoud
Phone            : 091991919
Account Balance   : 4000

Are you sure you want update this client (Y/N): Y

Enter PIN Code : 4444
Enter Name     : Omar Hamed
Enter Phone    : 8177172656
Enter Balance  : 4000

Client Updated Successfully.

*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

string ReadAccountNumber()
{
	string AccountNumber = "";

	cout << "Enter Account Number: ";
	cin >> AccountNumber;

	return AccountNumber;

}

struct stClient {

	string AccountNumber = "";
	string PINCode = "";
	string Name = "";
	string Phone = "";
	double Balance = 0.00;
};


int main() {
	
	ReadAccountNumber();
	
	return 0;
}
