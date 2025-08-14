/*Problem 28:
Write a program to read a Period and Date, then check if date is within this period or not?
							@anaschetoui
*/

#include <iostream>
#include "../../MyLib/FP/DateUtils.h"



bool IsDayWithinThisPeriod(stPeriod Period1, stDate DateToCheck)
{
    return (
        (IsDate1AfterDate2(DateToCheck, Period1.Start) || IsDate1EqualDate2(DateToCheck, Period1.Start)) &&
        (IsDate1LessThanDate2(DateToCheck, Period1.End) || IsDate1EqualDate2(DateToCheck, Period1.End))
    );
}

int main()
{
	stPeriod Period;
	stDate DateToCheck;

	std::cout << "Enter Period 1:"
		<< "\nEnter Start Date:\n\n";
		Period.Start = ReadDate();

	std::cout << "\nEnter End Date: \n\n";
		Period.End = ReadDate();

	std::cout << "\n\nEnter Date to check: \n\n";
		DateToCheck = ReadDate();

		(IsDayWithinThisPeriod(Period, DateToCheck)) ? std::cout << "\n\nYes, Date is within period.\n" :
			std::cout << "\n\nNo, Date isn't within period.\n";

		return 0;
}