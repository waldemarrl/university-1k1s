#include <iostream>
#include <ctime>

int main()
{
	using namespace std;
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	const int N = 100;
	int i, sz, A[N], b[N], c[N], v[N], m = 0, n = 0, n1 = 0, k = 0, z = 0, l = 0;
	int rmx = 99;
	cout << "������� ������ ������� ";
	cin >> sz;
	cout << "������ �:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = rand() % rmx;
		cout << "[" << i + 1 << "]" << A[i] << endl;
	}
	for (i = 0; i < sz; i++) {
		m = m + A[i];
		k = k + 1;
	}
	z = m / k;
	cout << "������� �������������� ������� =" << z;
	cout << endl;
	cout << endl;
	for (i = 0; i < sz; i++)
	{
		if (A[i] >= z) // ���������� ������ �������� ������ �����
		{
			c[n] = A[i];
			n++;
		}
	}
	cout << endl;
	for (i = 0; i < sz; i++)
	{
		if (A[i] < z)
		{
			b[n1] = A[i]; // ���������� ������ �������� ������ �����
			n1++;
		}
	}
	for (i = 0; i < n; i++) {
		v[i] = c[i];  // ���������� 3 ������ ������
	}
	for (i = n; i < n + n1; i++) { // ���������� 3 ������ ������
		v[i] = b[l];
		l++;
	}
	cout << "������:";
	for (i = 0; i < sz; i++)
	{
		cout << v[i] << " ";
	}

}