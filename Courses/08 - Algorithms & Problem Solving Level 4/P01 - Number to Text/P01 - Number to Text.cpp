/* P01 - Number to Text

Write a program to read a number and print the text of that number:

Enter a Number : 5843
Five Thousands Eight Hundred Forty Three

Enter a Number: 2147483647
Two Billions One Hundred Forty Seven Millions Four Hundreds Eight Three Tousands Six Hunderds Forty Seven.
*/

#include <iostream>
#include <string>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}


string NumberToText(long long Number)
{
	

	if (Number == 1)
		return "One";
	if (Number == 2)
		return "Two";
	if (Number == 3)
		return "Three";
	if (Number == 4)
		return "Four";
	if (Number == 5)
		return "Five";
	if (Number == 6)
		return "Six";
	if (Number == 7)
		return "Seven";
	if (Number == 8)
		return "Eight";
	if (Number == 9)
		return "Nine";
	if (Number == 10)
		return "Ten";
	if (Number == 11)
		return "Eleven";
	if (Number == 12)
		return "Twelve";
	if (Number == 13)
		return "Thirteen";
	if (Number == 14)
		return "Fourteen";
	if (Number == 15)
		return "Fifteen";
	if (Number == 16)
		return "Sixteen";
	if (Number == 17)
		return "Seventeen";
	if (Number == 18)
		return "Eighteen";
	if (Number == 19)
		return "Nineteen";
	if (Number == 20)
		return "Twenty";
	if (Number == 30)
		return "Thirty";
	if (Number == 40)
		return "Forty";
	if (Number == 50)
		return "Fifty";
	if (Number == 60)
		return "Sixty";
	if (Number == 70)
		return "Seventy";
	if (Number == 80)
		return "Eighty";
	if (Number == 90)
		return "Ninety";
	
	
	if(Number <=99)
	{
		int Reminder = Number % 10;
		Number = (Number / 10) * 10;
		return NumberToText(Number) + " " + NumberToText(Reminder);
	}


	if (Number >= 100 && Number <= 999)
	{
		int Reminder = Number % 100; 
		Number = Number /100; 

		if(Reminder == 0)
			return NumberToText(Number) + " Hundred";
		else 
			return NumberToText(Number) + " Hundred " + NumberToText(Reminder);
	}

	if (Number >= 1000 && Number <= 999999)
	{
		int Reminder = Number % 1000;
		Number = Number / 1000;

		if (Reminder == 0)
			return NumberToText(Number) + " Thousand ";
		else
			return NumberToText(Number) + " Thousand " + NumberToText(Reminder);
	}

	if (Number >= 1000000 && Number <= 999999999)
	{
		int Reminder = Number % 1000000;
		Number = Number / 1000000;

		if (Reminder == 0)
			return NumberToText(Number) + " Million";
		else
			return NumberToText(Number) + " Million " + NumberToText(Reminder);
	}

	if (Number >= 1000000000 && Number <= 2147483647)
	{
		int Reminder = Number % 1000000000;
		Number = Number / 1000000000;

		if (Reminder == 0)
			return NumberToText(Number) + " Billion";
		else
			return NumberToText(Number) + " Billion " + NumberToText(Reminder);
	}

	else
		return "Are you crazy just 0 - 2147483647 --> int capacity"; // we can convert to long long and we get more capacity
}


int main()
{
	int  Number =ReadNumber("Enter a Number: ");
	

	if (Number == 0)
		cout << "Zero";
	else
	cout << NumberToText(Number);
	

	system("Pause > 0");
	return 0;
}