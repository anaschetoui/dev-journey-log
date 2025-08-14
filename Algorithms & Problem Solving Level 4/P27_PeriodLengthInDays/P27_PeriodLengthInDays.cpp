/*Problem 27:
Write a program to read a Period and calculate period length in days?
						@anaschetoui
*/

#include <iostream>
#include "../../MyLib/FP/DateUtils.h"

short PeriodLengthInDays(stPeriod Period1, bool IncludeEndDay=false)
{

	short LengthDays = 0;
	IncludeEndDay ? LengthDays++ : LengthDays = 0;
	return LengthDays += HowManyDaysInThisYear(Period1.End) - HowManyDaysInThisYear(Period1.Start);
}

int main()
{

	stPeriod Period;

	std::cout << "Period 1: \nEnter Start Date: \n";
	Period.Start = ReadDate();

	std::cout << "\n\nEnter End Date:\n";
	Period.End = ReadDate();


	std::cout << "\n\nPeriod Length is: " << PeriodLengthInDays(Period);
	std::cout << "\nPeriod Length (Including End Date) is: " << PeriodLengthInDays(Period,true);

	return 0;
}