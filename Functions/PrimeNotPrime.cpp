enum enPrimeNotPrime { NotPrime = 0,Prime=1 };

enPrimeNotPrime CheckPrime(int Num)
{
	int M = Num / 2;

	for (int i = 2; i <= M; i++)
	{
		if (Num % i == 0)
		return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}
