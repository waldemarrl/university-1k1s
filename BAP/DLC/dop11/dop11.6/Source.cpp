#include <iostream>
using namespace std;

void main()
{
	/*1.	��������� ������� �������� ���������, ������ �� ������� ����� �.*/



	setlocale(LC_ALL, "Russian");
	int A, i; char tmp[33];
	cout << "������� �����: ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "����� � �������� ����: " << tmp << endl;
	if ((A & 3) == 0)
		cout << "����� ������ 4." << endl;
	else
		cout << "����� �� ������ 4." << endl;

	/*2.	���������� � 1 � ����� � n ����� ����� �� ������� p.*/

	unsigned int a, n, p, mask;
	char tA[33];
	char tM[33];
	cout << "Enter a: ";
	cin >> a;
	_itoa_s(a, tA, 2);
	cout << "Binary a: " << tA << "\nEnter number: ";
	cin >> n;
	cout << "Enter position: ";
	cin >> p;
	mask = (1u << n) - 1;
	mask <<= p;
	_itoa_s(mask, tM, 2);
	cout << "Mask: " << tM;
	a |= mask;
	_itoa_s(a, tA, 2);
	cout << "\nChanged a: " << tA;
}