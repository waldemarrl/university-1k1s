#include <iostream>
#include <locale>

using namespace std;

void matrix();
int sum(int A, int first, ...);


void matrix()
{
	int row = 0, col = 0;
	cout << "Введите кол-во строчек и кол-во столбцов: " << endl;
	cin >> row >> col;
	int* matrix = new int[row * col];
	srand((unsigned)time(NULL));
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			*(matrix + i * col + j) = rand() % 6 - 3;
			cout << *(matrix + i * col + j) << " ";
		}
		cout << endl;
	}
	cout << endl;
	int point = 0, sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (*(matrix + i * col + j) > 0)
				point++;
		}
		if (point == row) {
			point = i;
			for (int i = 0; i < col; i++)
			{
				sum += *(matrix + point * col + i);
			}
			break;
		}
		else
			point = 0;
	}
	if (sum != 0)
	{
		cout << "Сумма элементов: " << sum << endl;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				*(matrix + i * col + j) -= sum;
			}
		}
	}

	else
		cout << "Положительная строка не найдена" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << *(matrix + i * col + j) << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int sum(int A, int first, ...)
{
	int *a = &first;
	int Min = *a, f, j, summ;
	while (A)
	{
		if (Min > *(++a))
			Min = *a;
		A--;
	}
	f = a[Min -1];
	j = a[Min + 1];
	summ = f + j;
	cout << summ << endl;
	return summ;
}


int main()
{
	setlocale(LC_CTYPE, "Russian");
	int count = 0;
	do {
		cout << "Выберите номер задания: Найти положительную строку и сумму элементов этой строки(1) Определить сумму элементов, расположенных между первым и последним нулевыми элементами(2)" << endl;
		cin >> count;
		switch (count)
		{
		case 1: matrix();
			break;
		case 2: cout << sum(6, 5, 12, 9, 8, 1, 2, 0 ,6, 8, 13, 7) << endl; 
			break;
		case 3: 
			break;
		default: cout << "Введите число от 1 до 3";
		}
	} while (count != 3);
	return 0;
}