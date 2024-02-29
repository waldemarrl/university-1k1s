#include <iostream>
#include <iomanip>
using namespace std;

void check()
{
	const int n = 3;
	int i = 0, m = 0, a = 0, b = 0, c = 0;
	int B[3], A[3][3] = { 1,4,5,1,2,4,3,5,1 };
	for (i =0; i <n; i++)
    {
		B[i] = A[i][i];
		A[i][i] = A[n - i - 1][n - i - 1];
		A[n - i - 1][n - i - 1] = B[i];
	}
	for (i = 0; i < n; i++)
	{
		for (a = 0; a < 1; a++)
			cout << B[i] << "\t";
	}
	cout << "Введите число: "; cin >> b;
	for (i = 0; i < n; i++)
	{
		if (B[i] != b);
		else
			goto go;
	}
	cout << "Cовпадений нет" << endl;
go:
	cout << "Есть совпадения: " << B[i] << endl;
}


int main()
{
	setlocale(LC_ALL, "ru");
	int count = 0;
lop:
	cout << "Задание(1), (2)"; cin >> count;
	switch (count)
	{
	case 1: check();
		break;
	case 2: 
		break;
	default:  goto lop;
	}
}