#include <iostream>
using namespace std;
void main()
{
	/*��� ������ x, ���������� k ���������, ������ y, ���������� n ���������, � ����� q.����� ����� ���� x[i] + y[j], �������� ������� � ����� q.*/
	setlocale(LC_ALL, "Rus");
	const int k = 30, j = 40;
	int n, x[k], y[j], d = 0, g = 0, q, U, X, Y;
	cout << "������� ������ ������� A (�� ����� 30)" << endl;
	cin >> n;
	cout << "������ ������� A ����� " << n << endl;
	cout << "������ A" << endl;
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
	cout << "������� ������ ������� B (�� ����� 40)" << endl;
	cin >> g;
	cout << "������ ������� B ����� " << g << endl;
	cout << "������ B" << endl;
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
	cout << "������� ����� q" << endl;
	cin >> q;
	U = *(pX)+*(pY);
	for (int f = 0; f < g; f++)
	{
		for (int z = 0; z < n; z++)
		{
			if (abs(*(pX + z) + *(pY + f) - q) <= abs(U - q))
			{
				U = *(pX + z) + *(pY + f);
				X = z;//����������� ����� �������� ������� X
				Y = f;//����������� ����� �������� ������� Y
			}
		}
	}
	cout << U << " " << X + 1 << " ������� ������� x" << " + " << Y + 1 << " ������� ������� Y";
}