/*Problem P22:
Write a program to read a date and make functions as follows:
    | Overload the DayOfWeekOrder to take date structure |
    IsEndOfWeek | IsWeekEnd | IsBusinessDay | 
    DaysUntilTheEndOfWeek | DaysUntilTheEndOfMonth | DaysUntilTheEndOfYear
                                @anaschetoui
    */

#include <iostream>

short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a = (14 - Month) / 12;
	short y = Year - a;
	short m = (Month + (12 * a)) - 2;
	short d = ((Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12))) % 7;

	return d;
}

struct stDate
{
	short Year;
	short Month;
	short Day;
};

short DayOfWeekOrder(stDate date)
{
	short a = (14 - date.Month) / 12;
	short y = date.Year - a;
	short m = (date.Month + (12 * a)) - 2;
	short d = ((date.Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12))) % 7;

	return d;
}

stDate GetTodayDate()
{
	stDate date;
	time_t t = time(0);
	tm now;
	localtime_s(&now, &t);

	date.Year = now.tm_year + 1900;
	date.Month = now.tm_mon + 1;
	date.Day = now.tm_mday;

	return date;
}

std::string DayName(short NumberOfday)
{
	std::string Day[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return Day[NumberOfday];
}

bool IsTheEndOfWeek(short DayPosition)
{
	return 	(DayPosition == 0); // Sunday The end Of week in my country
}

bool IsTheWeekend(short DayPosition)
{
	return 	(DayPosition == 0 || DayPosition == 6); // Sunday & Saturday The weekend in my country
}

bool IsBusinessDay(short DayPosition)
{
	return !IsTheWeekend(DayPosition);
	//return (!(DayPosition == 0 || DayPosition == 6)); //Second Solve
}

short DaysUntilTheEndOfWeek(short DayPosition)
{
	short counter = 0;

	for (short i = DayPosition; i < 7; i++)
		counter++;
	return counter;
	
}

bool IsLeapYear(short Year)
{
	return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));
}

short NumberOfDayInMonth(short Month, short Year)
{
	int DayInMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (IsLeapYear(Year))
	{
		DayInMonth[2] = 29;
	}
	return DayInMonth[Month];
}


short HowManyDaysInThisYear(short Day, short Month, short Year)
{
	short NumberDaysInYear = 0;
	for (short i = 1; i < Month; i++)
	{
		NumberDaysInYear += NumberOfDayInMonth(i, Year);
	}

	return NumberDaysInYear += Day;
}


short DaysUntilTheEndOfMonth(short Day, short Month,short Year)
{
	return NumberOfDayInMonth(Month, Year) - Day;
}

short DaysUntilTheEndOfYear(short Day, short Month, short Year)
{
	return (IsLeapYear(Year)) ? 366 - HowManyDaysInThisYear(Day, Month, Year) : 365 - HowManyDaysInThisYear(Day, Month, Year);
}

int main()
{
	stDate DateToday = GetTodayDate();

	short DayPosition = DayOfWeekOrder(DateToday);

	printf("Today is %s, %02d/%02d/%d\n\n", DayName(DayPosition).c_str(), DateToday.Day, DateToday.Month, DateToday.Year);

	std::cout << "Is it End Of Week?";
	(IsTheEndOfWeek(DayPosition)) ? std::cout << "\nYes, Is it the End of Week.\n\n" : std::cout << "\nNo, isn't the End of Week.\n\n";

    std::cout << "Is it Weekend?";
    (IsTheWeekend(DayPosition)) ? std::cout << "\nYes, it is the Weekend.\n\n" : std::cout << "\nNo, it isn't the Weekend.\n\n";

    std::cout << "Is it Business Day?";
    (IsBusinessDay(DayPosition)) ? std::cout << "\nYes, it is a Business Day.\n\n" : std::cout << "\nNo, it isn't a Business Day.\n\n";
	
	std::cout << "\n\nDays until end of week: " <<DaysUntilTheEndOfWeek(DayPosition)<<" Day(s).";
	std::cout << "\nDay until end of month: " << DaysUntilTheEndOfMonth(DateToday.Day,DateToday.Month, DateToday.Year) <<" Day(s)";
	std::cout << "\nDay until end of year: " << DaysUntilTheEndOfYear(DateToday.Day, DateToday.Month, DateToday.Year) << " Days(s)\n\n";


	return 0;
}