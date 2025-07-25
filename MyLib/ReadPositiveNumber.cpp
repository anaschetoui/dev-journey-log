int ReadPositiveNumber(string Message)
{
	int Num;

	do
	{
		cout << Message;
		cin >> Num;
	} while (Num < 0);
	return Num;
}