#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "������� � win1251" << endl;
	int index = 0;
	for (index = 0; index < 3; index++)
	{
		int count;
		char unsigned a;
		cout << "�������  ������� : 1, 2, 3"; cin >> count;
		switch (count)
		{
		case 1:
		{
			cout << "������� ��������� ������ : "; cin >> a;
			cout << "� WIN1251 : " << static_cast<int>(a) << endl;
			cout << "� WIN1251 ���������  : " << static_cast<int>(a) - 32 << endl;
			break;
		}
		case 2:
		{
			cout << "������� ������ ������ : "; cin >> a;
			cout << "� WIN1251 : " << static_cast<int>(a)  - 32 << endl;
			cout << "� WIN1251 ���������  : " << static_cast<int>(a) - 16 << endl;
			break;
		}
		case 3:
		{
			cout << "������� ������ : "; cin >> a;
			cout << "� WIN1251 : " << static_cast<int>(a) << endl;
			break;
		}

		default: // ���� count ����� ������ ������� ��������
			cout << "��������� ��� �����" << endl;
		}
		system("pause");
	}