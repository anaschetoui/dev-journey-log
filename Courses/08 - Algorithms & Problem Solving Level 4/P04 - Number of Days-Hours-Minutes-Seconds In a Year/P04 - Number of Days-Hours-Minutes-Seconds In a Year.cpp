/*
P03 - Number of Days, Hours, Minutes and Seconds in a Year

Write a program to print the number of:

- Days
- Hours
- Minutes
- Seconds
in a certain year.

Examples:

Enter a year to check: 2000

Number of Days    in Year [2000] is 366
Number of Hours   in Year [2000] is 8784
Number of Minutes in Year [2000] is 527040
Number of Seconds in Year [2000] is 31622400


Enter a year to check: 1971

Number of Days    in Year [1971] is 365
Number of Hours   in Year [1971] is 8760
Number of Minutes in Year [1971] is 525600
Number of Seconds in Year [1971] is 31536000
*/

#include <iostream>
#include <string>
using namespace std;

short ReadYear()
{
	cout << "Enter a Year to Check: ";
	short Year = 0;
	cin >> Year;

	return Year;
}

bool isLeapYear(short Year)
{
	return (Year % 400 == 0) || (Year % 100 != 0 && Year % 4 == 0);
}


short GetDaysInYear(short Year) //this the base
{
	return isLeapYear(Year) ? 366 : 365;
}

short GetHoursInYear(short Year)
{
	return GetDaysInYear(Year) * 24;	
}

int GetMinutesInYear(short Year)
{
	return GetHoursInYear(Year) * 60;
}

int GetSecondsInYear(short Year)
{
	return GetMinutesInYear(Year) * 60;
}

int main()
{
	short Year = ReadYear();

	short DaysInYear = GetDaysInYear(Year);
	short HoursInYear = GetHoursInYear(Year);
	int MinutesInYear = GetMinutesInYear(Year);
	int SecondsInYear = GetSecondsInYear(Year);

	cout << "\n\n";
	cout << "Number Of Days     in Year [" << Year << "] is " << DaysInYear << endl;
	cout << "Numebr Of Hours    in Year [" << Year << "] is " << HoursInYear << endl;
	cout << "Numebr Of Minutes  in Year [" << Year << "] is " << MinutesInYear << endl;
	cout << "Numebr Of Seconds  in Year [" << Year << "] is " << SecondsInYear << endl;

	system("PAUSE > 0");
	return 0;
}