#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <iomanip>
#include "/Documents/MyCodingJourney/Courses/10 - OOP as it Should Be (Concepts)/17 - Projects/P01 - String Library Project/clsString.h"
using namespace std;

class clsDate
{
private:

	short _Day = 0;
	short _Month = 0;
	short _Year = 0;

public:

	enum enMonths
	{
		January = 1, February = 2, March = 3, April = 4, May = 5, June = 6,
		July = 7, August = 8, September = 9, October = 10, November = 11, December = 12
	};
	void SetDay(short Day)
	{
		_Day = Day;
	}

	short GetDay()
	{
		return _Day;
	}

	__declspec(property(get = GetDay, put = SetDay)) short Day;

	void SetMonth(short Month)
	{
		_Month = Month;
	}

	short GetMonth()
	{
		return _Month;
	}

	__declspec(property(get = GetMonth, put = SetMonth)) short Month;

	void SetYear(short Year)
	{
		_Year = Year;
	}

	short GetYear()
	{
		return _Year;
	}

	__declspec(property(get = GetYear, put = SetYear)) short Year;


	clsDate()
	{
		time_t t = time(0);
		tm Now;
		localtime_s(&Now, &t);

		_Day = Now.tm_mday;
		_Month = Now.tm_mon + 1;
		_Year = Now.tm_year + 1900;
	}

	clsDate(string Date)
	{
		vector <string> vDate = clsString::vSplitString(Date, "/");

		_Day = stoi(vDate[0]);
		_Month = stoi(vDate[1]);
		_Year = stoi(vDate[2]);
	}

	clsDate(short Day, short Month, short Year)
	{
		_Day = Day;
		_Month = Month;
		_Year = Year;
	}


	clsDate(short Days, short Year)
	{
		*this = GetDateFromDayOrder(Days, Year);
	}

	static bool isLeapYear(short Year)
	{

		return (Year % 400 == 0 || (Year % 100 != 0 && Year % 4 == 0));
	}

	static clsDate GetSystemDate()
	{
		time_t t = time(0);
		tm Now;
		localtime_s(&Now, &t);

		short Day,
			Month,
			Year;

		Day = Now.tm_mday;
		Month = Now.tm_mon + 1;
		Year = Now.tm_year + 1900;

		return clsDate(Day, Month, Year);
	}

	bool isLeapYear()
	{
		return isLeapYear(_Year);
	}

	static short GetDaysInMonth(enMonths Month, short Year)
	{
		switch (Month)
		{
		case enMonths::February:
			return isLeapYear(Year) ? 29 : 28;

		case enMonths::April:
		case enMonths::June:
		case enMonths::September:
		case enMonths::November:
			return 30;

		default:
			return 31;
		}
	}

	short GetDaysInMonth()
	{
		return GetDaysInMonth(enMonths(_Month), _Year);
	}

	static short GetDaysFromBeginningOfYear(short Year, short Month, short Day)
	{
		short TotalDays = 0;

		for (short i = 1; i < Month; i++)
		{
			TotalDays += GetDaysInMonth(enMonths(i), Year);
		}

		return TotalDays + Day;

	}

	short GetDaysFromBeginningOfYear()
	{
		return GetDaysFromBeginningOfYear(_Year, _Month, _Day);
	}

	static short GetDaysFromBeginningOfYear(clsDate Date)
	{
		return GetDaysFromBeginningOfYear(Date._Year, Date._Month, Date._Day);
	}

	static clsDate GetDateFromDayOrder(short Days, short Year)
	{
		clsDate Date;
		short RemainingDays = Days;
		Date._Month = 1;

		short DaysInMonth;
		while (RemainingDays > (DaysInMonth = GetDaysInMonth(enMonths(Date._Month), Year)))
		{
			RemainingDays -= DaysInMonth;
			Date._Month++;
		}
		Date._Day = RemainingDays;
		Date._Year = Year;

		return Date;
	}

	static short GetDaysInYear(short Year)
	{
		return isLeapYear(Year) ? 366 : 365;
	}

	short GetDaysInYear()
	{
		return GetDaysInYear(_Year);
	}

	static short GetHoursInYear(short Year)
	{
		return GetDaysInYear(Year) * 24;
	}

	short GetHoursInYear()
	{
		return GetHoursInYear(_Year);
	}

	static int GetMinutesInYear(short Year)
	{
		return GetHoursInYear(Year) * 60;
	}

	int GetMinutesInYear()
	{
		return GetMinutesInYear(_Year);
	}

	static int GetSecondsInYear(short Year)
	{
		return GetMinutesInYear(Year) * 60;
	}

	int GetSecondsInYear()
	{
		return GetSecondsInYear(_Year);
	}

	static short GetHoursInMonth(enMonths Month, short Year)
	{
		return GetDaysInMonth(Month, Year) * 24;
	}

	short GetHoursInMonth()
	{
		return GetHoursInMonth(enMonths(_Month), _Year);
	}

	static int GetMinutesInMonth(enMonths Month, short Year)
	{
		return GetHoursInMonth(Month, Year) * 60;
	}

	int GetMinutesInMonth()
	{
		return GetMinutesInMonth(enMonths(_Month), _Year);
	}

	static int GetSecondsInMonth(enMonths Month, short Year)
	{
		return GetMinutesInMonth(Month, Year) * 60;
	}

	int GetSecondsInMonth()
	{
		return GetSecondsInMonth(enMonths(_Month), _Year);
	}


	static short GetDayOrder(short Year, short Month, short Day)
	{
		short a = (14 - Month) / 12,
			y = Year - a,
			m = Month + (12 * a) - 2,
			d = ((Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7);

		return d;
	}

	short GetDayOrder()
	{
		return GetDayOrder(_Year, _Month, _Day);
	}

	static string GetDayName(short DayOrder)
	{
		string Days[7] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
		return  Days[DayOrder];
	}

	string GetDayName()
	{
		return GetDayName(GetDayOrder());
	}

	static string GetMonthName(short MonthNumber)
	{
		string Months[12] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
		return  Months[MonthNumber - 1];
	}

	string GetMonthName()
	{
		return GetMonthName(_Month);
	}

	static void PrintMonthCalendar(short Year, short Month)
	{

		short DayOrder = GetDayOrder(Year, Month, 1);
		short DaysInMonth = GetDaysInMonth(enMonths(Month), Year);
		short NewWeek = DayOrder;


		cout << "__________________" << GetMonthName(Month) << "__________________\n" << '\n';
		cout << "Sun   Mon   Tue   Wed   Thu   Fri   Sat\n";

		for (short i = 0; i < DayOrder; i++)
		{
			cout << setw(6) << "";
		}

		for (short Day = 1; Day <= DaysInMonth; Day++)
		{
			cout << right << setw(3) << Day << "   ";
			NewWeek++;

			if (NewWeek == 7)
			{
				cout << endl;
				NewWeek = 0;
			}
		}
		cout << "\n---------------------------------------\n" << '\n';
	}

	void PrintMonthCalendar()
	{
		PrintMonthCalendar(_Year, _Month);
	}


	static void PrintYearCalendar(short Year)
	{

		cout << "             Calendar - " << Year << "\n\n";

		for (short i = January; i <= December; i++)
		{
			PrintMonthCalendar(Year, i);

			cout << "\n\n";
		}
	}

	void PrintYearCalendar()
	{
		PrintYearCalendar(_Year);
	}

	void Print()
	{
		cout << GetDateString() << endl;
	}

	static string GetDateString(short Year, short Month, short Day)
	{
		return (to_string(Day) + '/' + to_string(Month) + '/' + to_string(Year));
	}

	string GetDateString()
	{
		return GetDateString(_Year, _Month, _Day);
	}

	static string GetDateFromDayOfYear(short Year, short Days)
	{
		short RemainingDays = Days;
		short Month = 1;

		short DaysInMonth;
		while (RemainingDays > (DaysInMonth = GetDaysInMonth(enMonths(Month), Year)))
		{
			RemainingDays -= DaysInMonth;
			Month++;
		}

		return GetDateString(Year, Month, RemainingDays);
	}

	string GetDateFromDayOfYear(short Days)
	{
		return GetDateFromDayOfYear(_Year, Days);
	}

	static clsDate AddDaysToDate(clsDate Date, short DaysToAdd)
	{
		short ReminingDays = DaysToAdd + GetDaysFromBeginningOfYear(Date._Year, Date._Month, Date._Day);
		short DaysInMonth = 0;

		Date._Month = 1;

		while (ReminingDays > (DaysInMonth = GetDaysInMonth(enMonths(Date._Month), Date._Year)))
		{
			ReminingDays -= DaysInMonth;
			Date._Month++;

			if (Date._Month > December)
			{
				Date._Month = January;
				Date._Year++;
			}

		}

		Date._Day = ReminingDays;

		return Date;

	}

	clsDate AddDaysToDate(short DaysToAdd)
	{
		return AddDaysToDate(*this, DaysToAdd);
	}


	static bool IsDate1BeforeDate2(clsDate Date1, clsDate Date2)
	{
		if (Date1.Year < Date2.Year)
			return true;

		if (Date1.Year > Date2.Year)
			return false;

		return (GetDaysFromBeginningOfYear(Date1) < GetDaysFromBeginningOfYear(Date2));

	}

	bool IsDate1BeforeDate2(clsDate Date2)
	{
		return IsDate1BeforeDate2(*this, Date2);
	}

	static bool isDate1EqualtoDate2(clsDate Date1, clsDate Date2)
	{
		return Date1._Year == Date2._Year ? (Date1._Month == Date2._Month ?
			(Date1._Day == Date2._Day ? true : false) : false) : false;
	}

	bool isDate1EqualtoDate2(clsDate Date2)
	{
		return isDate1EqualtoDate2(*this, Date2);
	}

	static bool isLastDayInMonth(clsDate Date)
	{
		return Date.Day == GetDaysInMonth(enMonths(Date._Month), Date._Year);
	}

	bool isLastDayInMonth()
	{
		return isLastDayInMonth(*this);
	}

	static bool isLastMonthInYear(short Month)
	{
		return Month == December;
	}

	bool isLastMonthInYear()
	{
		return isLastMonthInYear(_Month);
	}

	static clsDate IncreaseDateByOneDay(clsDate& Date)
	{
		if (isLastDayInMonth(Date))
		{
			if (isLastMonthInYear(Date._Month))
			{
				Date._Year++;
				Date._Month = 1;
				Date._Day = 1;
			}
			else
			{
				Date._Month++;
				Date._Day = 1;
			}
		}
		else
			Date._Day++;

		return Date;
	}

	void IncreaseDateByOneDay()
	{
		IncreaseDateByOneDay(*this);
	}


	static int GetDiffrenceInDays(clsDate Date1, clsDate Date2, bool IncludeDay = false)
	{
		int Days = 0;
		short ValueFlag = 1;

		while (!IsDate1BeforeDate2(Date1, Date2))
		{
			SwapDates(Date1, Date2);
			ValueFlag = -1;
		}

		while (IsDate1BeforeDate2(Date1, Date2))
		{
			Days++;
			Date1 = IncreaseDateByOneDay(Date1);
		}


		return IncludeDay ? (Days + 1) * ValueFlag : Days * ValueFlag;
	}

	int GetDiffrenceInDays(clsDate Date2)
	{
		return GetDiffrenceInDays(*this, Date2);
	}

	static int CalculateAgeInDays(clsDate Birthday)
	{
		clsDate Today = clsDate();

		return GetDiffrenceInDays(Birthday, Today, true);
	}

	static void SwapDates(clsDate& Date1, clsDate& Date2)
	{
		clsDate Temp;
		Temp._Day = Date1._Day;
		Temp._Month = Date1._Month;
		Temp._Year = Date1._Year;

		Date1._Day = Date2._Day;
		Date1._Month = Date2._Month;
		Date1._Year = Date2._Year;

		Date2._Day = Temp._Day;
		Date2._Month = Temp._Month;
		Date2._Year = Temp._Year;

	}



	static clsDate IncreaseDateByXDay(clsDate& Date, int HowManyDays)
	{
		for (int i = 0; i < HowManyDays; i++)
			Date = IncreaseDateByOneDay(Date);

		return Date;
	}

	void IncreaseDateByXDay(int HowManyDays)
	{
		IncreaseDateByXDay(*this, HowManyDays);
	}

	static clsDate IncreaseDateByOneWeek(clsDate& Date)
	{
		return IncreaseDateByXDay(Date, 7);
	}

	void IncreaseDateByOneWeek()
	{
		IncreaseDateByOneWeek(*this);
	}

	static clsDate IncreaseDateByXWeeks(clsDate& Date, short NumberOfWeeks)
	{

		return IncreaseDateByXDay(Date, NumberOfWeeks * 7);
	}

	void IncreaseDateByXWeeks(short NumberOfWeeks)
	{
		IncreaseDateByXWeeks(*this, NumberOfWeeks);
	}

	static clsDate IncreaseDateByOneMonth(clsDate& Date)
	{

		if (isLastMonthInYear(Date._Month))
		{
			Date._Month = January;
			Date._Year++;
		}
		else
			Date._Month++;

		short DaysInNewMonth = GetDaysInMonth(enMonths(Date._Month), Date._Year);

		if (Date._Day > DaysInNewMonth)
			Date._Day = DaysInNewMonth;

		return Date;
	}

	void IncreaseDateByOneMonth()
	{
		IncreaseDateByOneMonth(*this);
	}

	static clsDate IncreaseDateByXMonths(clsDate& Date, int HowManyMonths)
	{
		for (int i = 0; i < HowManyMonths; i++)
			Date = IncreaseDateByOneMonth(Date);

		return Date;
	}

	void  IncreaseDateByXMonths(int HowManyMonths)
	{
		IncreaseDateByXMonths(*this, HowManyMonths);
	}

	static clsDate IncreaseDateByOneYear(clsDate& Date)
	{
		return IncreaseDateByXMonths(Date, 12);
	}

	void IncreaseDateByOneYear()
	{
		IncreaseDateByOneYear(*this);
	}

	static clsDate IncreaseDateByXYears(clsDate& Date, short HowManyYears)
	{
		Date._Year += HowManyYears;

		if (Date._Month == February)
		{
			short DaysInFebruary = GetDaysInMonth(February, Date._Year);

			if (Date._Day > DaysInFebruary)
				Date._Day = DaysInFebruary;
		}

		return Date;
	}

	void IncreaseDateByXYears(short HowManyYears)
	{
		IncreaseDateByXYears(*this, HowManyYears);
	}


	static clsDate IncreaseDateByOneDecade(clsDate& Date)
	{
		return IncreaseDateByXYears(Date, 10);
	}

	void IncreaseDateByOneDecade()
	{
		IncreaseDateByOneDecade(*this);
	}

	static clsDate IncreaseDateByXDecades(clsDate& Date, short HowManyDecades)
	{
		Date._Year += HowManyDecades * 10;

		if (Date._Month == February)
		{
			short DaysInFebruary = GetDaysInMonth(February, Date._Year);

			if (Date._Day > DaysInFebruary)
				Date._Day = DaysInFebruary;
		}


		return Date;
	}

	void IncreaseDateByXDecades(short HowManyDecades)
	{
		IncreaseDateByXDecades(*this, HowManyDecades);
	}

	static clsDate IncreaseDateByOneCentury(clsDate& Date)
	{
		return IncreaseDateByXDecades(Date, 10);
	}

	void IncreaseDateByOneCentury()
	{
		IncreaseDateByOneCentury(*this);
	}

	static clsDate IncreaseDateByOneMillennium(clsDate& Date)
	{
		return IncreaseDateByXDecades(Date, 100);
	}

	void IncreaseDateByOneMillennium()
	{
		IncreaseDateByOneMillennium(*this);
	}

	static clsDate DecreaseDateByOneDay(clsDate& Date)
	{
		if (Date._Day == 1)
		{
			if (Date._Month == January)
			{
				Date._Year--;
				Date._Month = December;
				Date._Day = 31;
			}
			else
			{
				Date._Month--;
				Date._Day = GetDaysInMonth(enMonths(Date._Month), Date._Year);
			}
		}
		else
			Date._Day--;

		return Date;
	}

	void DecreaseDateByOneDay()
	{
		DecreaseDateByOneDay(*this);
	}

	static clsDate DecreaseDateByXDays(clsDate& Date, short HowManyDays)
	{
		for (short i = 0; i < HowManyDays; i++)
			Date = DecreaseDateByOneDay(Date);

		return Date;

	}

	void DecreaseDateByXDays(short HowManyDays)
	{
		DecreaseDateByXDays(*this, HowManyDays);
	}

	static clsDate DecreaseDateByOneWeek(clsDate& Date)
	{
		return DecreaseDateByXDays(Date, 7);
	}

	void DecreaseDateByOneWeek()
	{
		DecreaseDateByOneWeek(*this);
	}


	static clsDate DecreaseDateByXWeeks(clsDate& Date, short HowManyWeeks)
	{
		return DecreaseDateByXDays(Date, 7 * HowManyWeeks);
	}

	void DecreaseDateByXWeeks(short HowManyWeeks)
	{
		DecreaseDateByXWeeks(*this, HowManyWeeks);
	}

	static clsDate DecreaseDateByOneMonth(clsDate& Date)
	{

		if (Date._Month == January)
		{
			Date._Month = December;
			Date._Year--;
		}
		else
			Date._Month--;

		short DaysInMonth = GetDaysInMonth(enMonths(Date._Month), Date._Year);

		if (Date._Day > DaysInMonth)
			Date._Day = DaysInMonth;

		return Date;

	}

	void DecreaseDateByOneMonth()
	{
		DecreaseDateByOneMonth(*this);
	}

	static clsDate DecreaseDateByXMonths(clsDate& Date, short HowManyMonths)
	{
		for (short i = 0; i < HowManyMonths; i++)
			Date = DecreaseDateByOneMonth(Date);

		return Date;
	}

	void DecreaseDateByXMonths(short HowManyMonths)
	{
		DecreaseDateByXMonths(*this, HowManyMonths);
	}

	static clsDate DecreaseDateByOneYear(clsDate& Date)
	{
		return DecreaseDateByXMonths(Date, 12);
	}

	void DecreaseDateByOneYear()
	{
		DecreaseDateByOneYear(*this);
	}

	static clsDate DecreaseDateByXYears(clsDate& Date, short HowManyYears)
	{
		Date._Year -= HowManyYears;

		if (Date._Month == February)
		{
			short DaysInFebruary = GetDaysInMonth(February, Date._Year);

			if (Date._Day > DaysInFebruary)
				Date._Day = DaysInFebruary;
		}

		return Date;
	}

	void DecreaseDateByXYears(short HowManyYears)
	{
		DecreaseDateByXYears(*this, HowManyYears);
	}

	static clsDate DecreaseDateByOneDecade(clsDate& Date)
	{
		return DecreaseDateByXYears(Date, 10);
	}

	void DecreaseDateByOneDecade()
	{
		DecreaseDateByOneDecade(*this);
	}

	static clsDate DecreaseDateByXDecades(clsDate& Date, short HowManyDecades)
	{
		Date._Year -= HowManyDecades * 10;

		if (Date._Month == February)
		{
			short DaysInFebruary = GetDaysInMonth(February, Date._Year);

			if (Date._Day > DaysInFebruary)
				Date._Day = DaysInFebruary;
		}

		return Date;
	}


	void DecreaseDateByXDecades(short HowManyDecades)
	{
		DecreaseDateByXDecades(*this, HowManyDecades);
	}

	static clsDate DecreaseDateByOneCentury(clsDate& Date)
	{
		return DecreaseDateByXDecades(Date, 10);
	}

	void DecreaseDateByOneCentury()
	{
		DecreaseDateByOneCentury(*this);
	}

	static clsDate DecreaseDateByOneMillennium(clsDate& Date)
	{
		return DecreaseDateByXDecades(Date, 100);
	}

	void DecreaseDateByOneMillennium()
	{
		DecreaseDateByOneMillennium(*this);
	}

	static short GetDayOrder(clsDate Date)
	{
		return GetDayOrder(Date._Year, Date._Month, Date._Day);
	}

	static bool isEndOfWeek(clsDate Date)
	{
		return GetDayOrder(Date) == 0;
	}

	bool isEndOfWeek()
	{
		return GetDayOrder(*this);
	}

	static bool isWeekend(clsDate Date)
	{
		short DayOrder = GetDayOrder(Date);
		return DayOrder == 0 || DayOrder == 6;
	}

	bool isWeekend()
	{
		return isWeekend(*this);
	}

	static bool isBusinessDay(clsDate Date)
	{
		return !isWeekend(Date);
	}

	bool isBusinessDay()
	{
		return isBusinessDay(*this);
	}

	static short DaysUntilEndOfWeek(clsDate Date)
	{
		short DayOrder = GetDayOrder(Date);
		return 7 - DayOrder;
	}

	short DaysUntilEndOfWeek()
	{
		return DaysUntilEndOfWeek(*this);
	}

	static short DaysUntilEndOfMonth(clsDate Date)
	{
		return (GetDaysInMonth(enMonths(Date._Month), Date._Year)) - Date._Day;
	}

	short DaysUntilEndOfMonth()
	{
		return DaysUntilEndOfMonth(*this);
	}


	static short DaysUntilEndOfYear(clsDate Date)
	{

		return  GetDaysInYear(Date._Year) - GetDaysFromBeginningOfYear(Date);
	}

	short DaysUntilEndOfYear()
	{
		return DaysUntilEndOfYear(*this);
	}

	static short CalculateActualVacation(clsDate StartDate, clsDate EndDate)
	{
		short Count = 0;
		while (IsDate1BeforeDate2(StartDate, EndDate))
		{
			if (isBusinessDay(StartDate))
				Count++;

			StartDate = IncreaseDateByOneDay(StartDate);
		}
		return Count;
	}

	short CalculateActualVacation(clsDate EndDate)
	{
		return CalculateActualVacation(*this, EndDate);
	}

	static clsDate CalculateVacationReturnDate(clsDate StartDate, short VactionDays)
	{
		short VacationDaysCount = 0;

		while (isWeekend(StartDate)) // case if we start with weekend day
		{
			StartDate = IncreaseDateByOneDay(StartDate);
		}

		while (VacationDaysCount < VactionDays)
		{
			if (isBusinessDay(StartDate))
				VacationDaysCount++;
			StartDate = IncreaseDateByOneDay(StartDate);
		}

		while (isWeekend(StartDate)) // case if return date is a weekend
		{
			StartDate = IncreaseDateByOneDay(StartDate);
		}

		return StartDate;
	}

	clsDate CalculateVacationReturnDate(short VactionDays)
	{
		return CalculateVacationReturnDate(*this, VactionDays);
	}

	static bool IsDate1AfterDate2(clsDate Date1, clsDate Date2)
	{
		return !IsDate1BeforeDate2(Date1, Date2) && !isDate1EqualtoDate2(Date1, Date2);
	}

	bool IsDate1AfterDate2(clsDate Date2)
	{
		return IsDate1AfterDate2(*this, Date2);
	}


	enum enCompare
	{
		Before = -1, Equal = 0, After = 1
	};



	static enCompare CompareTwoDates(clsDate Date1, clsDate Date2)
	{
		return IsDate1BeforeDate2(Date1, Date2) ? Before : (IsDate1AfterDate2(Date1, Date2) ? After : Equal);
	}

	enCompare CompareTwoDates(clsDate Date2)
	{
		return CompareTwoDates(*this, Date2);
	}


	static bool IsValidDate(clsDate Date)
	{
		if (Date._Month < 1 || Date._Month > 12)
			return false;

		short DaysInCurrentMonth = GetDaysInMonth(enMonths(Date._Month), Date._Year);
		if (Date._Day > DaysInCurrentMonth || Date._Day <= 0)
			return false;

		return true;
	}

	bool IsValid()
	{
		return IsValidDate(*this);
	}

	static string FormatDate(clsDate& Date, string Format = "dd/mm/yyyy")
	{
		string FormattedDate = Format;

		FormattedDate = clsString::ReplaceString(FormattedDate, "dd", to_string(Date.Day));

		FormattedDate = clsString::ReplaceString(FormattedDate, "mm", to_string(Date.Month));

		FormattedDate = clsString::ReplaceString(FormattedDate, "yyyy", to_string(Date.Year));

		return FormattedDate;
	}

	string FormatDate(string Format = "dd/mm/yyyy")
	{
		return FormatDate(*this, Format);
	}

};