#include <iostream>
#include <iomanip>
using namespace std;


void FillMatrixWithOrderedNumbers(int arr[3][3], short row, short cols)
{
   short N = 0;

	for (int i = 0; i < row; i++)
	{

		for (short j = 0; j < cols; j++)
		{
			N++;
			arr[i][j] =N;
			
		}
	}

}

void PrintMatrixWithOrderedNumber(int arr[3][3], short row, short cols)
{

	for (short i = 0; i < row; i++)
	{
		
		for (short j = 0; j < cols; j++)
		{
			cout << setw(8) << left <<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int arr[3][3];
	FillMatrixWithOrderedNumbers(arr, 3, 3);
	cout << "The Following is 3x3 Matrix with Ordered Number\n";
	PrintMatrixWithOrderedNumber(arr, 3, 3);


	return 0;
}