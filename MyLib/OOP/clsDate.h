#pragma once
#include <iostream>
#include <string>
#include <ctime>

class clsDate
{
private:

    short _Day;
    short _Month;
    short _Year;

    clsDate _GetSystemDate()
    {
        std::time_t t = std::time(nullptr);
        std::tm now;
        localtime_s(&now, &t);
        _Day = static_cast<short>(now.tm_mday);
        _Month = static_cast<short>(now.tm_mon + 1);
        _Year = static_cast<short>(now.tm_year + 1900);
        return *this;
    }
public:

    clsDate()
    {
        _GetSystemDate();
    }

    clsDate(short Day, short Month, short Year)
    {
        _Day = Day;
        _Month = Month;
        _Year = Year;
    }






    void PrintDate()
    {
        printf("%02d/%02d/%04d", _Day, _Month, _Year);
    }


};
