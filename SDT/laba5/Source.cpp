#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "������� � win1251" << endl;
	for (int n = 0; n < 3; n++)
	{
		int count;
		cout << "�������  ������� : 1, 2, 3"; cin >> count;
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
			cout << "� WIN1251 : " << static_cast<int>(a) << endl;
			cout << "� WIN1251 ���������  : " << static_cast<int>(a) - 32 << endl;
			break;
		}
		case 3:
		{
			char unsigned a;
			cout << "������� ������ : "; cin >> a;
			cout << "� WIN1251 : " << static_cast<int>(a) << endl;
			break;
		}
		
        default: // ���� count ����� ������ ������� ��������
			cout << "��������� ��� �����" << endl;
	    }
		}
		system("pause");
	}

