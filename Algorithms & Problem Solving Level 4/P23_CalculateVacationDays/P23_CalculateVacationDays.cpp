/*Problem 23:
Write a program to read Vacation Period DateFrom and DateTo and make a function to calculate the actual vacation days.
								Note: Weekends are excluded.
								@anaschetoui		
*/
#include <iostream>
#include <string>

int ReadYear(std::string Message = "Enter a Year : ")
{
	int Year = 0;

	std::cout << Message;
	std::cin >> Year;

	while ((std::cin.fail() || Year <= 0) || (std::to_string(Year).size() > 4) || Year > 2999)
	{
		system("CLS");
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Number/Year ,Enter a positive Number: ";
		std::cin >> Year;
	}
	return Year;
}

short ReadMonth(std::string Message = "Enter a Month : ")
{
	short Month = 0;

	std::cout << Message;
	std::cin >> Month;

	while (std::cin.fail() || (Month <= 0 || Month > 12))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Number/Month ,Enter a positive Number: ";
		std::cin >> Month;
	}
	return Month;
}

bool IsLeapYear(short Year)
{
	return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));
}

struct stDate
{
	short Year = 0;
	short Month = 0;
	short Day = 0;

};

short DayOfWeekOrder(stDate date)
{
	short a = (14 - date.Month) / 12;
	short y = date.Year - a;
	short m = (date.Month + (12 * a)) - 2;
	short d = ((date.Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12))) % 7;

	return d;
}

short ReadDay(short Year, short Month, std::string Message = "Enter a Day : ")
{
	short Day = 0;
	short DaysInMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (Month == 2 && IsLeapYear(Year))
	{
		DaysInMonth[2] = 29;
	}

	std::cout << Message;
	std::cin >> Day;

	while (std::cin.fail() || Day <= 0 || Day > DaysInMonth[Month])
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Day, Enter a valid day for this month/year:  ";
		std::cin >> Day;
	}
	return Day;
}



stDate ReadDate()
{
	stDate date;
	date.Year = ReadYear();
	date.Month = ReadMonth();
	date.Day = ReadDay(date.Year, date.Month);
	return date;
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

std::string DayName(short NumberOfday)
{
	std::string Day[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return Day[NumberOfday];
}

bool IsTheWeekend(short DayPosition)
{
	return 	(DayPosition == 0 || DayPosition == 6); // Sunday & Saturday The weekend in my country
}

bool IsDate1LessThanDate2(stDate Date1, stDate Date2)
{
    if (Date1.Year < Date2.Year)
        return true;
    if (Date1.Year > Date2.Year)
        return false;
    if (Date1.Month < Date2.Month)
        return true;
    if (Date1.Month > Date2.Month)
        return false;
    if (Date1.Day < Date2.Day)
        return true;
    return false;
}

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year == Date2.Year) && (Date1.Month == Date2.Month) && (Date1.Day == Date2.Day);

}

stDate IncreaseDate(stDate& date)
{
	if (date.Day == NumberOfDayInMonth(date.Month, date.Year) && date.Month == 12)
	{
		date.Day = 1, date.Month = 1, date.Year++;
	}
	else if (date.Day == NumberOfDayInMonth(date.Month, date.Year))
	{
		date.Day = 1, date.Month++;
	}
	else
		date.Day++;

	return date;
}

short CalculateVactaionsDays(stDate Date1,stDate Date2)
{
	short Counter = 0;

	while (IsDate1LessThanDate2(Date1, Date2) || (IsDate1EqualDate2(Date1,Date2)))
	{
		if (!(IsTheWeekend(DayOfWeekOrder(Date1))))
		{
			Counter++;	
			Date1 = IncreaseDate(Date1);
		}

	}
	return Counter;
}

int main()
{
	stDate Date1,  Date2;

	do
	{
		system("cls");
		std::cout << "Vacations Starts: \n";
		Date1 = ReadDate();

		std::cout << "\nVacations Ends: \n";
		Date2 = ReadDate();

	} while (!IsDate1LessThanDate2(Date1, Date2));
	
	short DayPosition = DayOfWeekOrder(Date1);
   
    printf("\n\nVacation from : %s, %02d/%02d/%d\n", DayName(DayPosition).c_str(), Date1.Day, Date1.Month, Date1.Year);

	DayPosition = DayOfWeekOrder(Date2);
	printf("Vacation to   : %s, %02d/%02d/%d\n\n", DayName(DayPosition).c_str(), Date2.Day, Date2.Month, Date2.Year);

	std::cout << "Actual vaction is: " << CalculateVactaionsDays(Date1, Date2) << std::endl;

	return 0;
}