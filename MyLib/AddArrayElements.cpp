void AddElementsInArray(int arr[100], int& arrLength, int &Num)
{
	Num = ReadPositiveNumber("Please enter a number: ");
	arrLength++;
	arr[arrLength - 1] = Num;
}