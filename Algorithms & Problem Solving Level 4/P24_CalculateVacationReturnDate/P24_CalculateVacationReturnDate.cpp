/*Problem 24:
Write a program to read Vacation Start DateFrom and VacationDays, then make a function to calculate the vacation return Date.
						Note: Weekends are excluded.
								@anaschetoui
*/
#include <iostream>
#include <string>
#include "../../MyLib/FP/DateUtils.h"
int main()
{
	
	stDate Date1, Date2;
	short VacationDays = 0;
		
		std::cout << "Vacations Starts: \n";
		Date1 = ReadDate();

		std::cout << "\nEnter Vacation days: ";
		std::cin >> VacationDays;

		Date2 = CalculateVactaionsDays(Date1, VacationDays);

	short DayPosition = DayOfWeekOrder(Date2);

	DayPosition = DayOfWeekOrder(Date2);
	printf("\nReturn Date: %s, %02d/%02d/%d\n\n", DayName(DayPosition).c_str(), Date2.Day, Date2.Month, Date2.Year);

	return 0;
}