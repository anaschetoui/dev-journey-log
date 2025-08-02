/*Problem 31:
Write a program to read Date and write a function to format that date
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
    getline(std::cin, DateString);

    return DateString;
}

std::string ReplaceWord(std::string S1, std::string Replacefrom, std::string Replaceto)
{
    short pos = S1.find(Replacefrom);

    while (pos != std::string::npos)
    {
        S1.replace(pos, Replacefrom.length(), Replaceto);
        pos = S1.find(Replacefrom);
    }

    return S1;
}

std::vector<short> SplitDate(std::string DateString, std::string DateSperator = "/")
{
    std::vector<short> vDate;
    std::string date;
    short pos = 0;

    while ((pos = DateString.find(DateSperator)) != std::string::npos)
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

stDate ConvertDateStringToDate(std::vector<short> vDate)
{
    stDate Date;

    Date.Day = vDate[0];
    Date.Month = vDate[1];
    Date.Year = vDate[2];

    return Date;
}


std::string FormatDate(stDate date, std::string format = "dd/mm/yyyy")
{

    std::string sFormat = "";

    sFormat = ReplaceWord(format, "dd", std::to_string(date.Day));
    sFormat = ReplaceWord(sFormat, "mm", std::to_string(date.Month));
    sFormat = ReplaceWord(sFormat, "yyyy", std::to_string(date.Year));

    return sFormat;
}

int main()
{
    std::string StringDate = ReadString();

    std::vector <short> vDate = SplitDate(StringDate);

    stDate date = ConvertDateStringToDate(vDate);


    std::cout << "\n\n";
    std::cout << FormatDate(date);
    std::cout << "\n\n"<<FormatDate(date,"yyyy/mm/dd");
    std::cout << "\n\n"<<FormatDate(date,"mm/dd/yyyy");
    std::cout << "\n\n"<<FormatDate(date,"mm-dd-yyyy");
    std::cout << "\n\n"<<FormatDate(date,"Day:dd, Month:mm, Year:yyyy");

    std::cout << "\n\n";
        return 0;
}