/*Problem 26:
Write a program to read Two Periods and check if they overlap or not?
					@anaschetoui
*/


#include <iostream>
#include "../../MyLib/FP/DateUtils.h"

struct stPeriod
{
	stDate Start;
	stDate End;
};

bool IsOverlapPeriods(stPeriod Period1, stPeriod Period2)
{
	if (IsDate1LessThanDate2(Period2.End, Period1.Start) || IsDate1AfterDate2(Period2.Start, Period1.End))
	{
		return false;
	}
	return true;
}

int main()
{
	stPeriod Period1, Period2;

	std::cout << "Period 1: \nEnter Start Date: \n";
	Period1.Start = ReadDate();
	
	std::cout << "\n\nEnter End Date:\n";
	Period1.End=ReadDate();


	std::cout << "\n\nPeriod 2: \nEnter Start Date: \n";
	Period2.Start = ReadDate();

	std::cout << "\n\nEnter End Date:\n";
	Period2.End = ReadDate();


	(IsOverlapPeriods(Period1, Period2)) ? std::cout << "\nYes is Overlap Period.\n" :
		std::cout << "\nNo isn't Overlap Period.\n";


	return 0;
}