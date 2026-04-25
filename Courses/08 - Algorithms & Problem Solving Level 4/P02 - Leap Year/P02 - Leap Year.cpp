/*
P02 - Leap Year

Write a program to check if a year is a leap year or not.

Note:
All years which are perfectly divisible by 4 are leap years,
except for century years (years ending with 00), which are leap
years only if they are perfectly divisible by 400.

--------------------------------
| Leap Year    | Not Leap Year |
--------------------------------
| 1968         | 1971          |
| 2004         | 2006          |
| 2012         | 2010          |
| 1200         | 1700          |
| 1600         | 1800          |
| 2000         | 1900          |
--------------------------------
*/

#include <iostream>
using namespace std;

short ReadShortNumber(string Message)
{
	short sNumber = 0;

	cout << Message;
	cin >> sNumber;

	return sNumber;
}

bool isLeapYear(short Year)
{
	if (Year % 400 == 0)
		return true;

	if ((Year % 4 == 0) && !(Year % 100==0))
		return true;

	return false;
}

int main()
{
	short Year = ReadShortNumber("Enter a Year: ");

	isLeapYear(Year) ? cout << "\nYes, Year ["<<Year<<"] is a Leap Year." : cout << "\nNo, Year ["<<Year<<"] is Not a Leap Year.";
	system("PAUSE > 0");
	
	return 0;
}
