#include <iostream>
#include <iomanip>
#include "Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� � win1251" << endl;

	for (int n = 0; n < 3; n++)
	{
	start:
		int count;
		cout << "��������� ������(1) ������� ������(2) ������(3)"; cin >> count;
		switch (count)
		{
		case 1:
		{
			char unsigned a;
			cout << "������� ��������� ������ : "; cin >> a;
			cout << "� WIN1251 : " << static_cast<int>(a) << endl;
			cout << "� WIN1251 ���������  : " << static_cast<int>(a) - 32 << endl;
			break;
		}
		case 2:
		{
			char unsigned a;
			cout << "������� ������ ������ : "; cin >> a;
			cout << "� WIN1251 : " << static_cast<int>(a) - 32 << endl;
			cout << "� WIN1251 ���������  : " << static_cast<int>(a) - 16 << endl;
			break;
		}
		case 3:
		{
			char unsigned a;
			cout << "������� ������ : "; cin >> a;
			cout << "� WIN1251 : " << static_cast<int>(a) << endl;
			for (int f = 0; f < 3; f++)
			{
			start1:
				int countt;
				cout << "����������(1) ���������(2) ��������� � ������(3) ��������� �������(4)"; cin >> countt;
				switch (countt)
				{
				case 1:
				{
					char unsigned a;
					cout << "������� ������ : "; cin >> a;
					cout << "� WIN1251 : " << static_cast<int>(a) << endl;
					break;
				}
				case 2:
				{
					return 0;
				}
				case 3:
				{
					goto start;
					break;
				}
				case 4:
				{
					char unsigned b;
					char unsigned j;
					char unsigned l;
					cout << "��� ��������������� .���" << endl;
					cout << "������� ������� = "; cin >> b; cin >> j; cin >> l;
					int z = Header(b, j, l);
					int x = Header(j, l, b);
					int y = Header(l, b, j);
					cout << "� WIN1251 : " << x << y << z << endl;
					break;
				}
				default: // ���� count ����� ������ ������� ��������
					cout << "��������� ��� �����" << endl;
					goto start1;
				}
			}
			break;

		default:
			cout << "��������� ��� �����" << endl;
			goto start;
		}
		}
		system("pause");
	}
}
