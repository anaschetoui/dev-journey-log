void ReverseOrder(int arr[100], int arrReverse[100], int arrLength)
{
	int X = 1;
	for (int i = 0; i < arrLength; i++)
	{
		arrReverse[i] = arr[arrLength - i - 1];

	}
}