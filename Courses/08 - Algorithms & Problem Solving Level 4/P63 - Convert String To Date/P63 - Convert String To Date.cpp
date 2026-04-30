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
	short Month =0;
	short Year =0;
};

stDate ReadDate()
{
	stDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

enum enMonths
{
	January = 1, February = 2, March = 3, April = 4, May = 5, June = 6,
	July = 7, August = 8, September = 9, October = 10, November = 11, December = 12
};

bool isLeapYear(short Year)
{
	return (Year % 400 == 0) || (Year % 100 != 0 && Year % 4 == 0);
}


short GetDaysInMonth(enMonths Month, short Year)
{
	switch (Month)
	{
	case enMonths::February:
		return isLeapYear(Year) ? 29 : 28;

	case enMonths::April:
	case enMonths::June:
	case enMonths::September:
	case enMonths::November:
		return 30;

	default:
		return 31;
	}
}

bool IsValidDate(stDate Date)
{
	if (Date.Month < 1 || Date.Month > 12)
		return false;

	short DaysInCurrentMonth = GetDaysInMonth(enMonths(Date.Month), Date.Year);
	if (Date.Day > DaysInCurrentMonth || Date.Day <= 0)
		return false;

	return true;
}

string ReadStringDate()
{
	string sDate;
	
	cout << "Please Enter Date (dd/mm/yyyy): ";
	cin >> sDate;

	return sDate;
}

vector<string> Split(string str, string Separator)
{
	string sWord = "";
	short pos = 0;
	vector <string> vStr;

	while ((pos = str.find(Separator)) != string::npos)
	{
		sWord = str.substr(0, pos);

		if (!sWord.empty())
			vStr.push_back(sWord);

		str.erase(0, pos + Separator.length());
	}
	if (!str.empty())
		vStr.push_back(str);

	return vStr;
}

stDate StringToDate(string sDate)
{
	stDate Date;

	vector <string> vStr = Split(sDate, "/");

	Date.Day = stoi(vStr[0]);
	Date.Month = stoi(vStr[1]);
	Date.Year = stoi(vStr[2]);

	return Date;
	
}

int main()
{

	stDate Date = StringToDate(ReadStringDate());

	cout << "\nDay  : " << Date.Day << endl;
	cout << "Month: " << Date.Month << endl;
	cout << "Year : " << Date.Year << endl;
	

	return 0;
}