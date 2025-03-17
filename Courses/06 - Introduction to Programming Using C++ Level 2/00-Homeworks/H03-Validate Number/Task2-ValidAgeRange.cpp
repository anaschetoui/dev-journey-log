/*Task 2: Valid Age Range

Create a program that asks for the user's Age. The program must validate two things:

    The input must be a number .

    The age must be between 1 and 100. If either condition is false, tell the user why and ask them to try again.
*/

#include <iostream>
#include <limits> // for --> cin.ignore(numeric_limits<streamsize>::max(), '\n');
using namespace std;

int ReadAge()
{
    int Age = 0;


    cout << "Enter your Age: ";
    cin >> Age;

    while (cin.fail() || (Age < 1 || Age > 100))
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error: Enter a numeric value: ";
        }
        else
        {

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error: Age must be between 1 and 100: ";
        }

        cin >> Age;
    }

    return Age;
}

int main()
{
    int Age = ReadAge();

    cout << "\nYour Age is " << Age << endl;

    return 0;
}