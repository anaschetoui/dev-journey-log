// P33-Grade-A-B-C-D-E-F

#include <iostream>
using namespace std;

int ReadGrade()
{
	int Grade = 0;

	do {
		cout << "Enter Your Grade: ";
		cin >> Grade;
	} while (Grade < 0 || Grade >100);

	return Grade;
}

char GetGrade(int Grade)
{

	if (Grade >= 90)
		return 'A';

		else if (Grade >= 80)
			return 'B';
			
			else if (Grade >= 70)
				return 'C';
				
				else if (Grade >= 60)
					return 'D';
					
					else if (Grade >= 50)
						return 'E';

						else
							return 'F';

}

int main()
{
	int Gradee = ReadGrade();

	cout << GetGrade(Gradee);

	return 0;
}