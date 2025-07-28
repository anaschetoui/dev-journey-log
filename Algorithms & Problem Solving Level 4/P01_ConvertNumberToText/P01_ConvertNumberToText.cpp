/*Problem01:
Write a program to read a number and print the text of that number.
                       @anaschetoui
*/

#include <iostream>
#include <string>


                        /*This problem I didn't solve the first time I tried. 
                        Then I saw the solution and am now resolving it here.*/

long long ReadPostiveNumber(std::string Message = "Enter a Positive Number: ")
{
    long long Number = 0;

    std::cout << Message;
    std::cin >> Number;
    while (std::cin.fail() || Number < 0)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid Number, Please enter a valid one : ";
        std::cin >> Number;
    }

    return Number;
}

std::string NumberToText(long long Number)
{
    if (Number == 0)
    {
        return "";
    }

    if (Number >= 1 && Number <= 19)
    {
        std::string sNumber[] = 
        {
            "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight",
            "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
            "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
        };
        return sNumber[Number - 1];
    }

    if (Number >= 20 && Number <= 99)
    {
        std::string sNumber[] =
        {
            "Twenty", "Thirty", "Forty", "Fifty",
            "Sixty", "Seventy", "Eighty", "Ninety"
        };
        return sNumber[(Number / 10) - 2] + " " + NumberToText(Number % 10);
    }

    if (Number >= 100 && Number <= 199)
    {
        return "One Hundred " + NumberToText(Number % 100);
    }
    if (Number >= 200 && Number <= 999)
    {
        return NumberToText(Number / 100) + " Hundreds " + NumberToText(Number % 100);
    }

    if (Number >= 1000 && Number <= 1999)
    {
        return "One Thousand " + NumberToText(Number % 1000);
    }
    if (Number >= 2000 && Number <= 999999)
    {
        return NumberToText(Number / 1000) + " Thousands " + NumberToText(Number % 1000);
    }

    if (Number >= 1000000 && Number <= 1999999)
    {
        return "One Million " + NumberToText(Number % 1000000);
    }
    if (Number >= 2000000 && Number <= 999999999)
    {
        return NumberToText(Number / 1000000) + " Millions " + NumberToText(Number % 1000000);
    }

    if (Number >= 1000000000 && Number <= 1999999999)
    {
        return "One Billion " + NumberToText(Number % 1000000000);
    }
    else
    {
        return NumberToText(Number / 1000000000) + " Billions " + NumberToText(Number % 1000000000);
    }
   
}


int main()
{
    long long Number = ReadPostiveNumber();
   std::cout<< NumberToText(Number);
    
    return 0;
}