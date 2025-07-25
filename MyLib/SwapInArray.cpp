void SwapNumbers(int& N1, int& N2)
{
	int Temp;
	Temp=N2;
	N2 = N1;
	N1 = Temp;
	
}
void SwapInArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		int index1 = RandomNumbers(1, arrLength);
		int index2 = RandomNumbers(1, arrLength);
		SwapNumbers(arr[index1-1],arr[index2-1]);
	}
}