#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	{
		const int n = 3;
		int i = 0, m = 0, a = 0, b = 0, c = 0;
		int B[3], max = B[0];
		int A[3][3] = { 1,4,5,
						1,2,4,
						3,5,1, };
		for (i = 0; i < n; i++)
		{
			B[i]= A[i][i];
			A[i][i] = A[n - i - 1][n - i - 1];
			A[n - i - 1][n - i - 1] = B[i];
		}
		for (i = 0; i < n; i++)
		{
			for (a = 0; a < 1; a++)
				cout << B[i] << "\t";

		}
		cout << endl;
		for (i = 0; i < n; i++)
		{
			if (B[i] > max)
			 max = B[i];

		}
		cout << max << endl;

		system("pause");
	}
}
