#include <iostream>
using namespace std;
void main()
{
	/*Дан массив x, содержащий k элементов, массив y, содержащий n элементов, и число q.Найти сумму вида x[i] + y[j], наиболее близкую к числу q.*/
	setlocale(LC_ALL, "Rus");
	const int k = 30, j = 40;
	int n, x[k], y[j], d = 0, g = 0, q, U, X, Y;
	cout << "Введите размер массива A (не более 30)" << endl;
	cin >> n;
	cout << "Размер массива A равен " << n << endl;
	cout << "Массив A" << endl;
	for (int f = 0; f < n; f++)
	{
		x[f] = rand() % 45;
	}
	cout << "====================" << endl;
	int* pX = x;
	for (int f = 0; f < n; f++)
	{
		cout << *(pX + f) << endl;
	}
	cout << "====================" << endl;
	cout << "Введите размер массива B (не более 40)" << endl;
	cin >> g;
	cout << "Размер массива B равен " << g << endl;
	cout << "Массив B" << endl;
	for (int f = 0; f < g; f++)
	{
		y[f] = rand() % 45;
	}
	cout << "====================" << endl;
	int* pY = y;
	for (int f = 0; f < g; f++)
	{
		cout << *(pY + f) << endl;
	}
	cout << "====================" << endl;
	cout << "Введите число q" << endl;
	cin >> q;
	U = *(pX)+*(pY);
	for (int f = 0; f < g; f++)
	{
		for (int z = 0; z < n; z++)
		{
			if (abs(*(pX + z) + *(pY + f) - q) <= abs(U - q))
			{
				U = *(pX + z) + *(pY + f);
				X = z;//Присваиваем номер элемента массива X
				Y = f;//Присваиваем номер элемента массива Y
			}
		}
	}
	cout << U << " " << X + 1 << " Элемент массива x" << " + " << Y + 1 << " Элемент массива Y";
}