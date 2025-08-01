/*Problem 29:
Write a program to read a tow periods then count overlap days?
					@anaschetoui
*/

#include <iostream>
#include "../../../MyLib/DateUtils.h"

short CountOverlapDay(stPeriod Period1, stPeriod Period2)
{
    short Counter = 0;
    
    if(!(IsOverlapPeriods(Period1,Period2)))
        return 0;

    
    stDate OverlapStart = CompareDate(Period1.Start, Period2.Start) > 0 ? Period1.Start : Period2.Start;
    stDate OverlapEnd = CompareDate(Period1.End, Period2.End) < 0 ? Period1.End : Period2.End;

    Counter = DaysBetweenDates(OverlapStart, OverlapEnd)+1;

    return Counter;
}

int main()
{
    stPeriod Period1, Period2;
    std::cout << "Enter Period1: \n";
    std::cout << "Enter Start Date: \n\n";
    Period1.Start = ReadDate();
    std::cout << "Enter End Date: \n\n";
    Period1.End = ReadDate();

    std::cout << "\nEnter Period2: \n";
    std::cout << "Enter Start Date: \n\n";
    Period2.Start = ReadDate();
    std::cout << "\n\nEnter End Date: \n\n";
    Period2.End = ReadDate();

    short OverlapDays = CountOverlapDay(Period1, Period2);
    std::cout << "\n\nOverlap Days Count: " << OverlapDays << std::endl;

    return 0;
}