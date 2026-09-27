#include <iostream>
#include "clsInputValidate.h"
using namespace std;

int main()
{
	cout << "========Number Between========\n";

	int Num = 4, from = 3, to = 5;
	clsInputValidate::IsNumberBetween(Num, from, to) ?
		cout << "Yes, Number " << Num << " is Between " << from << " and " << to << endl :
		cout << "No, Number " << Num << " isn't Between " << from << " and " << to << endl;

	cout << endl;

	cout << "========double Number Between========\n";

	double d_Num = 4.3, d_from = 3.9, d_to = 4.9;
	clsInputValidate::IsNumberBetween(d_Num, d_from, d_to) ?
		cout << "Yes, Number " << d_Num << " is Between " << d_from << " and " << d_to << endl :
		cout << "No, Number " << d_Num << " isn't Between " << d_from << " and " << d_to << endl;

	cout << endl;

	cout << "===========Date Between==========\n";

	clsDate Date(25, 12, 2026), Date_From(1, 10, 2026), Date_To(1, 1, 2027);

	cout << "Date ";
	Date.Print();

	clsInputValidate::IsDateBetween(Date, Date_From, Date_To) ? cout << "is Between " << Date_From.GetDateString() << " and " <<
		Date_To.GetDateString() << endl :
		cout << "isn't Between " << Date_From.GetDateString() << " and " <<
		Date_To.GetDateString() << endl;


	cout << "\n===========Read Number===============\n";
	Num = clsInputValidate::ReadIntegerNumber("Invalid number. Please enter a valid one: ");
	cout << "Num = " << Num << '\n';

	cout << "\n==========Read Double================\n";
	d_Num = clsInputValidate::ReadDoubleNumber("Invalid number. Please enter a valid one: ");
	cout << "Num = " << d_Num << endl;

	cout << "\n==========Read Number Between========\n";
	Num = clsInputValidate::ReadIntegerNumberBetween(2, 9, "Number is not within range");
	cout << Num;


	cout << "\n==========Read Double Between========\n";
	d_Num = clsInputValidate::ReadDoubleNumberBetween(2.5, 3, "Number is not within range");
	cout << d_Num;

	cout << "\n=========Valid Date==========\n";
	clsDate Date2(199, 22, 2026);
	Date2.Print();
	clsInputValidate::IsValidDate(Date2) ? cout << "is a Valid Date\n" : cout << "is not a Valid Date\n";

	return 0;
}