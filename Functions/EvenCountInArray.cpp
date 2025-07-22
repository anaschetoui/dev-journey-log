int CountEven(int arr[100], int arrLength)
{
	int count = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] % 2 == 0)
			count++;

	}
	return count;
}