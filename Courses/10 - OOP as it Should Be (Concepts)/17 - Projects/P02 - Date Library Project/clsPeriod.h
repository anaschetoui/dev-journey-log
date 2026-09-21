#pragma
#include "clsDate.h"

class clsPeriod
{
public:

    clsDate StartDate;
    clsDate EndDate;

    clsPeriod(clsDate StartDate, clsDate EndDate)
    {
        this->StartDate = StartDate;
        this->EndDate = EndDate;
    }

    static bool IsOverlapPeriod(clsPeriod Period1, clsPeriod Period2)
    {
        if (clsDate::CompareTwoDates(
            Period2.EndDate,
            Period1.StartDate) == clsDate::Before)
        {
            return false;
        }

        if (clsDate::CompareTwoDates(
            Period2.StartDate,
            Period1.EndDate) == clsDate::After)
        {
            return false;
        }

        return true;
    }

    bool IsOverLapWith(clsPeriod Period2)
    {
        return IsOverlapPeriod(*this, Period2);
    }

    static short PeriodLengthInDays(
        clsPeriod Period,
        bool IncludeEndDateDay = false)
    {
        return clsDate::GetDiffrenceInDays(
            Period.StartDate,
            Period.EndDate,
            IncludeEndDateDay
        );
    }

    static bool IsDateWithinPeriod(
        clsPeriod Period,
        clsDate DateToCheck)
    {
        return !(
            clsDate::CompareTwoDates(
                Period.StartDate,
                DateToCheck
            ) == clsDate::After

            ||

            clsDate::CompareTwoDates(
                Period.EndDate,
                DateToCheck
            ) == clsDate::Before
            );
    }

    static short CountOverLapInTwoPeriods(
        clsPeriod Period1,
        clsPeriod Period2)
    {
        short Count = 0;

        int Period1Length =
            PeriodLengthInDays(Period1);

        int Period2Length =
            PeriodLengthInDays(Period2);

        if (!IsOverlapPeriod(Period1, Period2))
            return 0;

        if (Period1Length < Period2Length)
        {
            clsDate Date = Period1.StartDate;

            while (clsDate::IsDate1BeforeDate2(
                Date,
                Period1.EndDate))
            {
                if (IsDateWithinPeriod(
                    Period2,
                    Date))
                {
                    Count++;
                }

                Date = clsDate::IncreaseDateByOneDay(Date);
            }
        }
        else
        {
            clsDate Date = Period2.StartDate;

            while (clsDate::IsDate1BeforeDate2(
                Date,
                Period2.EndDate))
            {
                if (IsDateWithinPeriod(
                    Period1,
                    Date))
                {
                    Count++;
                }

                Date = clsDate::IncreaseDateByOneDay(Date);
            }
        }

        return Count;
    }
};