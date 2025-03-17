/* Ternary Operator: Short Hand IF

Write programs to do the following :
• Using Ternary Operator :
• Program to check if the number is Positive or Negative.
• Prograh to check if the number is Zero, Positive or Negative. (used nested ternary operators).
*/

#include <iostream>
using namespace std;

int main()
{
	int Number = 5;

	//Positive OR Negative
	Number > 0 ? cout << "Number is Positive\n" : cout << "Number is Negative\n";

	//Zero,Positive OR Negative
	Number == 0 ? cout << "Number is Zero\n" : Number > 0 ? cout << "Number is Positive\n" : cout << "Number is Negative\n ";


	return 0;
}