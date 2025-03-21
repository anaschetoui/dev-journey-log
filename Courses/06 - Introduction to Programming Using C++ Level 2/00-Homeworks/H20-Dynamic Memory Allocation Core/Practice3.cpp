/*### Exercise 3: Memory Distribution Simulator
**Goal:** Distinguish between Stack and Heap variables.

**Requirements:**
1. Create a function named `SwapValues` that takes:
   - An integer by **Reference** (this represents a Stack variable).
   - A pointer to an integer (this represents a Heap variable).
2. The function should swap the values of the two.
3. In `main`:
   - Define a local integer `stackVar = 10;`.
   - Allocate a heap integer `int* heapVar = new int(20);`.
4. Print values -> Call `SwapValues` -> Print values again.
5. Don't forget to `delete` and explain in a comment:
   "Why did we not use delete for stackVar?"
*/

#include <iostream>
using namespace std;


void SwapValues(int& Intger, int* ptr)
{
	int T = Intger;

	Intger = *ptr;
	*ptr = T;
}

int main()
{
	int stackVar = 10;

	int* heapVar = new int(20);

	cout << "before swapping:\n";
	cout << "StackVar -> " << stackVar;
	cout << "\nheapVar -> " << *heapVar;

	SwapValues(stackVar, heapVar);

	cout << "\n\nAfter Swapping:\n";
	cout << "StackVar -> " << stackVar;
	cout << "\nheapVar -> " << *heapVar;
	cout << '\n';


	delete heapVar; // it delete the value from the Heap (20) but the still remain but it point to nothing
	// we cannot delete stackvar cuz it is a Local variable that we can't delete, it delete automaticlly in the end of the program by compiler.

	ptr = nullptr;// for safty ,to make sure the point will not point to somthing else.

	return 0;
}