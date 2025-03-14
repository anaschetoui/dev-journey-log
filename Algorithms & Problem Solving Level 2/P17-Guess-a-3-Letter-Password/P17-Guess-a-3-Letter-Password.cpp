// P17-Guess-a-3-Letter-Password

#include <iostream>
using namespace std;

string Read3LetterPassword()
{
	string Pass = "";

	do
	{
		cout << "Enter 3Letter Password (Only Capital): ";
		cin >> Pass;

	} while ((Pass.length() != 3) ||
			 (Pass[0] < 'A' || Pass[0] > 'Z') ||
			 (Pass[1] < 'A' || Pass[1] > 'Z') ||
			 (Pass[2] < 'A' || Pass[2] > 'Z'));
	 
	return Pass;
}

void GuessPassword(string Password)
{
	short Counter = 0;
	string word = "";
	cout << '\n';
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				word += char(i);
				word += char(j);
				word += char(k);

				Counter++;
				cout << "Trial [" << Counter << "] " << ":" << word<<endl;

				if (Password == word)
				{
					cout << "\nPassword is " << word;
					cout << "\nFound after " << Counter << " Trial(s)\n";
					return;
				}
				word = "";
			}
			
		}
	}
	
}

int main()
{
	string Password = Read3LetterPassword();

	GuessPassword(Password);

	return 0;

}
