#include <iostream>
using namespace std;

//1.	������� 4 ���� ����� A, ������� � ������, � �������� �� � ����� B ������.//
void zad3() {
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, maskA, maskB;
	int n, m;
	cout << "������ �����="; cin >> A;
	cout << "������ �����="; cin >> B;
	_itoa_s(A, tmp, 2); cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2); cout << "B=" << tmp << endl;
	_itoa_s(pow(2, 5) - 1, tmp, 2);
	cout << tmp << endl;
	maskA = pow(2, 5) - 1;//1<<5 =01000=01111
	_itoa_s(maskA, tmp, 2);
	cout << tmp << endl;
	maskA = maskA << (5);//111100000
	_itoa_s(maskA, tmp, 2);
	cout << tmp << endl;//+
	_itoa_s(A & maskA, tmp, 2); // 
	cout << "����� �" << endl;
	cout << tmp << endl;
	maskB = 15;
	maskB = ~maskB;
	_itoa_s(B & maskB, tmp, 2);
	cout << "����� B" << endl;
	cout << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 5)), tmp, 2);//10011100 0001 =10011101
	cout << "� � ����������� ������" << tmp;
}
void zad4() {
	setlocale(LC_ALL, "ru");
	int A, position, n, razn;
	char tmp[33];
	cout << "������� A" << endl;
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << tmp << endl;
	cout << "������� ��������� �������" << endl;
	cin >> position;
	cout << "������� ����� �����" << endl;
	cin >> n;
	razn = position - n;
	while (position >= razn)
	{
		A |= 1 << position;
		_itoa_s(A, tmp, 2);
		position--;
	}
	cout << tmp << endl;

}
void main()
{
	zad3();
	zad4();
}