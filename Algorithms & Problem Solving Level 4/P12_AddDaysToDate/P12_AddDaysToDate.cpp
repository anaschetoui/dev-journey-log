/*Problem 12:
Write a program to read date and read how many days to add to it, print the results on screen
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

short ReadDaysToAdd()
{
	short DaysToAdd = 0;

	std::cout << "How Many Days Do you want to add: ";
	std::cin >> DaysToAdd;

	while (std::cin.fail() || DaysToAdd <= 0)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Number, Please enter a valid one: ";
		std::cin >> DaysToAdd;
	}
	return DaysToAdd;
}

std::string CalculateFutureDateString(short DaysToAdd, short Day,short Month,short Year)
{

	short YearInDate = Year;
	short MonthInDate = 1;
	short DayInDate = 0;
	short DaysInMonth = 0;
	short DaysLeft =  DaysToAdd+ HowManyDaysInThisYear(Day, Month, Year);


	while (true)
	{
		DaysInMonth = NumberOfDayInMonth(MonthInDate, YearInDate);

		if (DaysLeft > DaysInMonth )
		{
			DaysLeft -= DaysInMonth;
			MonthInDate++;
			if (MonthInDate == 13)
			{
				MonthInDate = 1;
				YearInDate++;

			}
		}
		
		else
		{
				DayInDate += DaysLeft;
			
			break;
		}
	}

	return std::to_string(DayInDate) + "\/" + std::to_string(MonthInDate) + "\/" + std::to_string(YearInDate);
}

int main()
{
	short Year = ReadYear(), Month = ReadMonth(), Day = ReadDay(Year, Month);

	short DaysToAdds = ReadDaysToAdd();

	std::cout << "Date after adding " << DaysToAdds << " Days is "
		<< CalculateFutureDateString( DaysToAdds, Day,Month,Year);

	return 0;
}