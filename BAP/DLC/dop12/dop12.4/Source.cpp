#include <iomanip>
#include <iostream>
using namespace std;
int ex2()
{
	//���� ��� ������������������ x[1] ..x[n] � y[1] ..y[k] ����� �����.����� ������������ ����� ������������������, ���������� ���������������������� ����� �������������������, �.�.����� ������������ ������������������, ������� �������� ����� ������ ������������������.
	setlocale(LC_CTYPE, "Russian");
	const int N = 100;
	int u = 0, i, A[N], X[N], Y[N], T[N];
	int j, max = 0, par = 0, n, * pmax, * pk, * px, ct = 0, k;
	cout << "������� ������ ������������������ x: ";
	cin >> n;
	cout << "������� ������ ������������������ y: ";
	cin >> k;
	cout << "x ������������������: ";
	for (i = 0; i < n; i++)
	{
		X[i] = i + 1;
		cout << X[i] << " ";
	}
	cout << endl;
	cout << "y ������������������: ";
	for (i = 0; i < k; i++)
	{
		Y[i] = i * 2;
		cout << Y[i] << " ";
	}
	cout << endl;
	for (i = 0; i < n; i++) {
		px = &X[i];
		for (j = 0; j < n; j++) {
			if (*px == Y[j]) {
				T[ct] = *px;
				ct++;
			}
		}
	}
	cout << "������������ ������������������: ";
	for (i = 0; i < ct; i++)
		cout << T[i] << " ";
	cout << endl;
	return 0;
}
void main()
{
	ex2();
}