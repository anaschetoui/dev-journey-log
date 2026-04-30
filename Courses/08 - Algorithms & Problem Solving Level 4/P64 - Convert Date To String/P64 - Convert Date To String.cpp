/*
P64 - Convert Date To String

Write a program to read a date,
then convert it into a string.

Create a function:

- DateToString()

The program should ask the user to enter:

- Day
- Month
- Year

The program should display the date
as a string in the following format:

dd/mm/yyyy

Example:

Enter a Day: 31
Enter a Month: 3
Enter a Year: 2022

Date String: 31/3/2022
*/

/*
P63 - Convert String To Date

Write a program to read a date as a string,
then convert it into a date structure.

The date format is:

dd/mm/yyyy

Create a function:

- StringToDate()

The program should ask the user to enter:

Date (dd/mm/yyyy)

The program should display:

- Day
- Month
- Year

Example:

Please Enter Date (dd/mm/yyyy): 31/3/2022

Day   : 31
Month : 3
Year  : 2022
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;


short ReadDay()
{
	short Day = 0;
	cout << "Enter a Day: ";
	cin >> Day;

	return Day;
}

short ReadMonth()
{
	short Month = 0;
	cout << "Enter a Month: ";
	cin >> Month;

	return Month;
}

short ReadYear()
{
	short Year = 0;
	cout << "Enter a Year: ";
	cin >> Year;

	return Year;
}

struct stDate
{
	short Day = 0;
	short Month = 0;
	short Year = 0;
};

stDate ReadDate()
{
	stDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

string ConvertDateToString(stDate Date)
{
	return to_string(Date.Day) + '/' + to_string(Date.Month) + '/' + to_string(Date.Year);
}




int main()
{

	stDate Date = ReadDate();

	system("CLS");

	cout << "Date String : " << ConvertDateToString(Date) << endl;

	return 0;
}