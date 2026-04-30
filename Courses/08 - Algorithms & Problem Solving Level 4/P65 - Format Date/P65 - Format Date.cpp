/*
P65 - Format Date

Write a program to read a date,
then create a function to format
the date in different ways.

The program should ask the user to enter:

- Day
- Month
- Year

Create a function:

- FormatDate()

The function should return the date
formatted according to a format string.

The program should display the date
using different formats.

Example:

Enter a Day: 31
Enter a Month: 12
Enter a Year: 2022

31/12/2022

2022/31/12

12/31/2022

12-31-2022

31-12-2022

Day:31, Month:12, Year:2022
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


string ReplaceWords(string str, string WordToReplace, string ReplaceTo)
{
	short pos = str.find(WordToReplace);

	while (pos != string::npos)
	{
		str = str.replace(pos, WordToReplace.length(), ReplaceTo);
		pos = str.find(WordToReplace, pos + ReplaceTo.length());
	}
	return str;
}

string FormatDate(stDate Date, string Format = "dd/mm/yyyy")
{


	return ReplaceWords(ReplaceWords(ReplaceWords(Format, "dd", to_string(Date.Day)),"mm", to_string(Date.Month)),"yyyy", to_string(Date.Year));
}

int main()
{

	stDate Date = StringToDate(ReadStringDate());



	cout << '\n' << FormatDate(Date, "Day:dd, Month:mm, Year:yyyy") << '\n';


	return 0;
}