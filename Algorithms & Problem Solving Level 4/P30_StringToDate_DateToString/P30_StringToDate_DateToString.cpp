/*
Write a program to :
    Read Date String.
    Convert it to date structure
    Print Day, Mont, Year separately.
Then convert Date Structure to string and print it on the screen.
               Note: write the following functions:
                    StringToDate | DateToString.
                    @anaschetoui
*/

#include <iostream>
#include <string>
#include <vector>

struct stDate
{
    short Year;
    short Month;
    short Day;
};

std::string ReadString()
{
    std::string DateString;

    std::cout << "Enter Date dd/mm/yyyy: ";
    getline(std::cin,DateString);

    return DateString;
}

std::vector <short> SplitDate(std::string DateString, std::string DateSperator = "/")
{
    std::vector < short> vDate;
    std::string date;
    short pos = 0;

    while ((pos = DateString.find(DateSperator))!=std::string::npos)
    {
        date = DateString.substr(0, pos);

        if (!date.empty())
        {
            vDate.push_back(std::stoi(date));
        }
        DateString.erase(0, pos + DateSperator.length());

    }
    if (!DateString.empty())
    {
        vDate.push_back(std::stoi(DateString));
    }

    return vDate;
}

stDate ConvertDateStringToDate(std::vector <short> vDate)
{
    stDate Date;

    Date.Day = vDate[0];
    Date.Month = vDate[1];
    Date.Year = vDate[2];

    return Date;
}

std::string DateToString(stDate date)
{
    return std::to_string(date.Day) + '/' + std::to_string(date.Month) + '/' + std::to_string(date.Year);
}
int main()
{
    std::string StringDate = ReadString();

    std::vector <short> vDate = SplitDate(StringDate);

    stDate Date = ConvertDateStringToDate(vDate);

    std::cout << "\nDay: " << Date.Day;
    std::cout << "\nMonth: " << Date.Month;
    std::cout << "\nYear: " << Date.Year;

    std::cout << "\n\nYou entered : " << DateToString(Date);

    return 0;

}