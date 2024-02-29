#include <iostream>
#include <ctime>
#include <iomanip> 
using namespace std;


void Check(int row, int ctr) {
	int A[5][5] = { 1,2,3,4,5,
				2,1,0,8,1,
				3,0,0,9,0,
				4,8,9,3,7,
				5,0,1,7,0 };
	int j = 0;
	for (int i = row, j = 0; j < 5; j++)
	{
		if (A[i][j] == A[j][i]) {
			ctr++;
		}
	}
	if (ctr == 6) cout << row << "-ая строка совпадает с " << row << "-ым столбцом.\n";
}



//Доп 5. Путем перестановки элементов квадратной вещественной матрицы добиться того, чтобы ее максимальный элемент находился в левом верхнем
//		 углу, следующий по величине в позиции (2,2), следующий по величине  в позиции (3,3) и т. д., заполнив таким образом всю главную диагональ.

int main()
{
	setlocale(LC_ALL, "ru");
	srand((unsigned)time(NULL));
	int i = 0, j = 0, rI1 = 0, rJ1 = 0, rI2 = 0, rJ2 = 0, rI3 = 0, rJ3 = 0, rI4 = 0, rJ4 = 0, rI5 = 0, rJ5 = 0, rI6 = 0, rJ6 = 0;
	float e1 = 0, e2 = 0, e3 = 0, e4 = 0, e5 = 0, e6 = 0, max1 = 0, max2 = 0, max3 = 0, max4 = 0, max5 = 0, max6 = 0;
	float A[5][5];
	cout << "\n\t Изначальная матрица:\n\n";
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = 0.01 * (rand() % 9999);
			cout << A[i][j] << "\t";
		}
		cout << "\n\n";
	}
	e1 = A[0][0];
	e2 = A[1][1];
	e3 = A[2][2];
	e4 = A[3][3];
	e5 = A[4][4];
	cout << endl;
	for (i = 0; i < 5; i++) //Поиск максимального элемента
	{
		for (j = 0; j < 5; j++)
		{
			if (A[i][j] > max1)
			{
				max1 = A[i][j];
				rI1 = i;
				rJ1 = j;
			}
		}
	}
	A[0][0] = max1; // Вставка максимального элемента в A[0][0]
	A[rI1][rJ1] = e1; // Вставка элемента А[0][0] в место A max
	for (i = 0; i < 5; i++) //Поиск второго максимального элемента
	{
		for (j = 0; j < 5; j++)
		{
			if (A[i][j] > max2 && A[i][j] < max1)
			{
				max2 = A[i][j];
				rI2 = i;
				rJ2 = j;
			}
		}
	}
	A[1][1] = max2;
	A[rI2][rJ2] = e2;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (A[i][j] > max3 && A[i][j] < max2)
			{
				max3 = A[i][j];
				rI3 = i;
				rJ3 = j;
			}
		}
	}
	A[2][2] = max3;
	A[rI3][rJ3] = e3;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (A[i][j] > max4 && A[i][j] < max3)
			{
				max4 = A[i][j];
				rI4 = i;
				rJ4 = j;
			}
		}
	}
	A[3][3] = max4;
	A[rI4][rJ4] = e4;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (A[i][j] > max4 && A[i][j] < max3)
			{
				max4 = A[i][j];
				rI4 = i;
				rJ4 = j;
			}
		}
	}
	A[3][3] = max4;
	A[rI4][rJ4] = e4;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (A[i][j] > max5 && A[i][j] < max4)
			{
				max5 = A[i][j];
				rI5 = i;
				rJ5 = j;
			}
		}
	}
	A[4][4] = max5;
	A[rI5][rJ5] = e5;
	cout << setw(60) << setfill('=');
	cout << "\n\n\t   Новая матрица:\n\n\n";
	for (i = 0; i < 5; i++) //Вывод новой матрицы
	{
		for (j = 0; j < 5; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << "\n\n";
	}
}