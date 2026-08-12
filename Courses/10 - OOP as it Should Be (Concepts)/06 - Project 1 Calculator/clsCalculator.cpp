#include <iostream>
#include <string>
using namespace std;

class clsCalculator
{
private:
	float _Number = 0;
	float _Result = 0;
	string _Operation = "Clear";

public:

	void Add(float Number)
	{
		_Number = Number;
		_Operation = "Adding";

		_Result += Number;
	}

	void Subtract(float Number)
	{
		_Number = Number;
		_Operation = "Subtracting";

		_Result -= Number;
	}

	void Multiply(float Number)
	{
		_Number = Number;
		_Operation = "Multiplying";

		_Result *= Number;
	}

	void Divide(float Number)
	{

		_Number = Number;
		_Operation = "Dividing";

		Number == 0 ? _Result /= 1 : _Result /= Number;
	}

	void Clear()
	{
		_Number = 0;
		_Result = 0;
		_Operation = "Clear";
	}

	void PrintResult()
	{
		_Operation == "Clear" ? cout << "Result After " << _Operation << " is: " << _Result << endl :
			cout << "Result After " << _Operation << " " << _Number << " is: " << _Result << endl;
	}


};

int main()
{

	clsCalculator Calculator1;

	Calculator1.Add(10);
	Calculator1.PrintResult();

	Calculator1.Add(100);
	Calculator1.PrintResult();

	Calculator1.Subtract(20);
	Calculator1.PrintResult();

	Calculator1.Divide(0);
	Calculator1.PrintResult();

	Calculator1.Divide(2);
	Calculator1.PrintResult();

	Calculator1.Multiply(3);
	Calculator1.PrintResult();

	Calculator1.Clear();
	Calculator1.PrintResult();


	return 0;
}