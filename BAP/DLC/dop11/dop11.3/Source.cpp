#include <iostream>
using namespace std;

int main()
{

	/*1.	������ ����� ����� A.������������� ��� ���� � 2 �� 14, ������� ��� ����.������� ���������.*/

	/*unsigned a;
	char tA[33], tM[33];
	cout << "Enter number: ";
	cin >> a;
	_itoa_s(a, tA, 2);
	cout << "Binary number:   " << tA << endl;
	unsigned mask = (1u << 13) - 1;
	mask <<= 2;
	_itoa_s(mask, tM, 2);
	cout << "Mask: " << tM << endl;
	a ^= mask;
	_itoa_s(a, tA, 2);
	cout << "Inverted number: " << tA;*/

	/*2.	������������� � ����� � n ����� ����� �� ������� p, �������� ��� m ����� ����� �, ������� � ������� q.*/


	unsigned a, p, n, bits, m, b, q, c;
	char tA[33], tM[33], tB[33], tBit[33], tMB[33], tC[33];
	cout << "Enter number a: ";
	cin >> a;
	_itoa_s(a, tA, 2);
	cout << "Binary number a:  " << tA << endl;
	cout << "Enter p (position): ";
	cin >> p;
	cout << "Enter n (number): ";
	cin >> n;
	unsigned mask = (1u << n) - 1;  // 1u = 00000000000001; (1u << n) = 000000001000000 (n - 1 ����� ������ �� 1); (1u << n) - 1 = 000000001111111 (������ n ������)
	mask <<= p;                     //�������� ����� �� p ����� ��� ��� ����� �������� n ����� � ������� �
	_itoa_s(mask, tM, 2);
	cout << "Mask A: " << tM << endl;
	a ^= mask;                      // xor ^ ����������� ���� ������� � ����� ����� 1
	_itoa_s(a, tA, 2);
	cout << "Inverted number:  " << tA << endl;
	bits = a;
	bits >>= p;                     //�������� ������� �� � ��� ������ ����� �������� � ����� ������ ���� ��������������� ����
	cout << "Enter m: ";
	cin >> m;
	bits <<= (32 - m);             //����� ������� �� ���������� � ���������� bits ������ 
	bits >>= (32 - m);             //���� ��������������� ���� (m ����� �.�. ��� ���� �� �������)
	_itoa_s(bits, tBit, 2);
	cout << "Inverted " << m << " bits: " << tBit << "\nEnter number b: ";
	cin >> b;
	_itoa_s(b, tB, 2);
	cout << "Binary number b:  " << tB << "\nEnter position q: ";
	cin >> q;
	bits <<= q;                     //�������� ����� �� q �.�. ���� �������� ���� bits � ������� q
	c = b;
	c ^= bits;						// �-�� xor ^= �������� m ����� � b � ������� q ������ ������ bits �� ����� �
	_itoa_s(c, tC, 2);
	cout << "Changed number b: " << tC;

}