#include <iostream>
#include "clsUtil.h"
using namespace std;



int main()
{
	clsUtil::Srand();

	cout << clsUtil::RandomNumber(1, 100) << endl;
	cout << clsUtil::RandomNumber(1, 100) << endl;
	cout << clsUtil::RandomNumber(1, 100) << endl;


	cout << "\n";
	cout << clsUtil::GetRandomCharacter(clsUtil::CapitalLetter);

	cout << "\n";
	cout << "One Key: " << clsUtil::GenerateKey() << endl;
	cout << "keys: \n";
	clsUtil::GenerateKeys(10, clsUtil::CapitalLetter);
	cout << endl;

	system("Pause > 0");

	return 0;


}