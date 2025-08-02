/*Problem 25:
Write a program to read Date1 & Date2, and write a function to compare dates, it should return:
                              -1 Before | 0 Equal | 1 After
                                   @anaschetoui
*/

#include <iostream>
#include "../../../MyLib/DateUtils.h"

enum enMyCompareDate
{
    Before = -1, Equal = 0, After =1
};

short MyCompareDate(stDate Date1 ,stDate Date2)
{
    // Compares two dates and returns:
   // -1 if Date1 is before Date2
   //  0 if Date1 is equal to Date2
   //  1 if Date1 is after Date2
   return (IsDate1LessThanDate2(Date1, Date2)) ? enMyCompareDate::Before :
       ((IsDate1EqualDate2(Date1,Date2)) ? enMyCompareDate::Equal : enMyCompareDate::After);

}

int main()
{
    std::cout << "Enter Date1: \n";
    stDate Date1 = ReadDate();

    std::cout << "\nEnter Date2: \n";
    stDate Date2 = ReadDate();

    std::cout << "\n\nCompare Result: " << MyCompareDate(Date1, Date2)<<std::endl;

    return 0;
}