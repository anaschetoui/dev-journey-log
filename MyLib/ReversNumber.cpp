int ReverseNumber(int N)
{
	int Reminder = 0;
	int N2 = 0;
	int Reminder2 = 0;
	while (N > 0)
	{
		Reminder = N % 10;
		N = N / 10;
		N2 = (N2 * 10) + Reminder;

	};
	return N2;
}