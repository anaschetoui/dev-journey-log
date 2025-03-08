// P11-Average-Pass-Fail// P10-Average-Of-3-Marks

#include <iostream>
using namespace std;

float ReadFloatNumber(string Message)
{
	float Number = 0.000f;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void ReadMarks(float& Mark1, float& Mark2, float& Mark3)
{
	Mark1 = ReadFloatNumber("Enter Mark1: ");
	Mark2 = ReadFloatNumber("Enter Mark2: ");
	Mark3 = ReadFloatNumber("Enter Mark3: ");
}

float CalculateMarksAverage(float Mark1, float Mark2, float Mark3)
{
	return (Mark1 + Mark2 + Mark3) / 3;
}

enum enPassFail {Fail=0,Pass=1};

enPassFail PassFail(float Average)
{
	return Average >= 50 ? enPassFail::Pass : enPassFail::Fail;
}

void PrintMarksAverage(float Average)
{
	cout << "avg = " << Average << endl;
	PassFail(Average) == enPassFail::Pass ? cout << "Pass\n" : cout << "Fail\n";
}

int main()
{
	float Mark1, Mark2, Mark3;

	ReadMarks(Mark1, Mark2, Mark3);

	float Avg = CalculateMarksAverage(Mark1, Mark2, Mark3);

	PrintMarksAverage(Avg);

	return 0;
}