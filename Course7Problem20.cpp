#include <iostream>
#include <iomanip>

using namespace std;


void PrintMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d\t", 2, Arr[i][j]);
		}
		cout << "\n";
	}
}

bool IsPalindromeMatrix(short Matrix[3][3], short Rows, short Cols)
{


	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols / 2; j++)
		{
			if (Matrix[i][j] != Matrix[i][Cols - 1 - j])
			{
				return false;
			}
		}
	}

	return true;
}


int main()
{

	srand((unsigned)time(NULL));


	short Matrix[3][3] = { {10,2,10} , {5,1,5} , {7,8,7} };


	cout << "\n matrix \n";
	PrintMatrix(Matrix, 3, 3);

	if (IsPalindromeMatrix(Matrix, 3, 3))
		cout << "\n Matrix is palindrome\n";
	else 
		cout << "\n Matrix is not palindrome\n";
	


	return 0;
}