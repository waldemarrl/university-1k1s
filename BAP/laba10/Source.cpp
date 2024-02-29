#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int count;
	cout << "Ближний к среднему арифметическом(1) Наибольшие среди массивов(2)"; cin >> count;
	switch (count)
	{
	case 1:
	{
		const int N = 100, F = 100;
		int i, size, v[F], a[N], sum = 0, sred = 0, col = 99, kof = 0, k;
		cout << "Введите размер массива до 100 ";
		cin >> size;
		cout << "Массив А:" << endl;
		srand((unsigned)time(NULL));
		for (i = 0; i < size; i++)
		{
			a[i] = rand() % col;
			cout << a[i] << endl;
		}
		for (i = 0; i < size; i++)
		{
			sum += a[i];
		}
		sred = sum / size;
		cout << "Среднее арифметическое = " << sred << endl;
		for (i = 0; i < size; i++)
		{
			k = 0;
			k = a[i] - sred;
			v[i] = abs(k);
			cout << v[i] << endl;
		}
		for (kof; kof < 15; kof++)
		{
			for (i = 0; i < size; i++)
			{
				if (v[i] == kof)
					goto lop;
			}
		}
lop:
		cout << "Ближайшее число = " << a[i] << endl;
		system("pause");
	}
	case 2:
	{

		const int N = 100, F = 100;
		int amax = 0, bmax = 0, i, size, a[N], b[F], col = 99;
		cout << "Введите размер массива до 100 ";
		cin >> size;
		cout << "Массив А:" << endl;
		srand((unsigned)time(NULL));
		for (i = 0; i < size; i++)
		{
			a[i] = rand() % col;
			cout << a[i] << endl;
		}
		for (i = 0; i < size; i++)
		{
			if (a[i] > a[amax])
				amax = i;
		}
		cout << "MAX" << a[amax] << endl;
		cout << "Массив B :" << endl;
		for (i = 0; i < size; i++)
		{
			b[i] = rand() % col;
			cout << b[i] << endl;
		}
		for (i = 0; i < size; i++)
		{
			if (b[i] > b[bmax])
				bmax = i;
		}
		cout << "MAX" << b[bmax] << endl;
		int abmax = a[0];
		for (i = 0; i < 3; i++)
		{
			for (i = 0; i < size; i++)
			{
				if (b[i] != a[i])
				{
					if (a[i] > b[i])
						abmax = a[i];
					else
						abmax = b[i];
				}
				cout << abmax << endl;
			}
		}
		system("pause");
	   }
	}
}