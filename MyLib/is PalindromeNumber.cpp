void PrintPalindromeNumber(int N)
{
	if (N == ReverseNumber(N))
	{
		cout << "Yes, it is a Palindorme number.\n";
	}
	else
		cout << "No, it is NOT a Palindorme number.\n";
}