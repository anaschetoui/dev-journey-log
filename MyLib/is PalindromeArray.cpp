bool IsPalindromeArray(int arr[10], int arrLength)
{
	for(int i = 0; i < arrLength / 2; i++)
	{
		if (arr[i] != arr[arrLength - i - 1])
			return false;
	}
	return true;
}