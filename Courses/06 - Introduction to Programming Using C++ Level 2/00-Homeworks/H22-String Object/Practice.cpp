/*
**Goal:** Practice String Methods (`substr`, `insert`, `find`, `append`, etc.) to clean and format a given text.

**Initial String:**
`string text = "welcome to moulay ismail university. i love cpp programming";`

**Requirements:**
1. **Length Check:** Print the total number of characters in the original string.
2. **Capitalization:** Access the first character and print it. (Bonus: If you can make it Capital).
3. **Word Extraction:** Extract the word "university" and store it in a new string.
4. **Professional Title:** Add the title "Professor Mohammed: " at the very beginning of the string (Position 0).
5. **Add a Footer:** Add " - Academic Year 2026" to the end of the text.
6. **Smart Search:**
   - Search for the word "CPP".
   - If found, print its position.
   - If NOT found, print "Word not found".
7. **Refinement:**Add a period `.` at the end and then Remove it (just to practice!).
8. **Reset:** Use `.clear()` at the very end and print the string to show it's now empty.

**Rule from Lesson #50:**
- Remember that `find` is **Case-sensitive**, so "CPP" is different from "cpp".
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text = "welcome to moulay ismail university. i love cpp programming";

	cout << text << endl;
	cout << text.length() << endl;

	cout << text.at(0) << endl;

	cout << text.substr(25, 10) << '\n';
	cout << text.insert(59, " Professor Mohammed") << endl;
	cout << text.append(" - Academic Year 2026") << "\n";

	if (text.find("cpp") == text.npos)
		cout << "Word not found\n";
	else
		cout << text.find("CPP") << '\n';

	text.push_back('.');

	cout << text << endl;

	text.clear();

	cout << text << endl;
	return 0;
}