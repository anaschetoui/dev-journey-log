/*  Lesson #26 - Setw Manipulator
*
Build a professional-looking receipt for a store.
1. Create a table with 3 columns: **Item Name**, **Quantity**, and **Price**.
2. Use the following widths:
   - Item Name: `(20)`
   - Quantity: `(10)`
   - Price: `s(10)`
3. Add at least 3 items (e.g., Laptop, Mouse, Keyboard).
4. **Challenge:** Ensure the headers and the data are perfectly aligned to the right .

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	//header
	cout << string(44, '-') << '\n';

	cout
		<< "|"
		<< left << setw(20) << "Item Name"
		<< "|"
		<< setw(10) << "Quantity"
		<< "|"
		<< setw(10) << "Price"
		<< "|\n";
	cout << string(44, '-') << '\n';
	//Rows
	cout
		<< "|"
		<< left << setw(20) << "Laptop"
		<< "|"
		<< setw(10) << right << "20"
		<< "|"
		<< setw(10) << right << "499.99$"
		<< "|\n";

	cout
		<< "|"
		<< left << setw(20) << "Mouse"
		<< "|"
		<< setw(10) << right << "69"
		<< "|"
		<< setw(10) << right << "30$"
		<< "|\n";

	cout
		<< "|"
		<< left << setw(20) << "Keyboard"
		<< "|"
		<< setw(10) << right << "10"
		<< "|"
		<< setw(10) << right << "25$"
		<< "|\n";

	cout << string(44, '-') << '\n';

	return 0;
}