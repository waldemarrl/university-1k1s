#include <iostream>
#include <iomanip>
#include "Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "символы в win1251" << endl;

	for (int n = 0; n < 3; n++)
	{
	start:
		int count;
		cout << "Латинский символ(1) Русский символ(2) Символ(3)"; cin >> count;
		switch (count)
		{
		case 1:
		{
			char unsigned a;
			cout << "Введите латинский символ : "; cin >> a;
			cout << "В WIN1251 : " << static_cast<int>(a) << endl;
			cout << "В WIN1251 Заглавная  : " << static_cast<int>(a) - 32 << endl;
			break;
		}
		case 2:
		{
			char unsigned a;
			cout << "Введите руссий символ : "; cin >> a;
			cout << "В WIN1251 : " << static_cast<int>(a) - 32 << endl;
			cout << "В WIN1251 Заглавная  : " << static_cast<int>(a) - 16 << endl;
			break;
		}
		case 3:
		{
			char unsigned a;
			cout << "Введите символ : "; cin >> a;
			cout << "В WIN1251 : " << static_cast<int>(a) << endl;
			for (int f = 0; f < 3; f++)
			{
			start1:
				int countt;
				cout << "Продолжить(1) Закончить(2) Вернуться в начало(3) Модульный вариант(4)"; cin >> countt;
				switch (countt)
				{
				case 1:
				{
					char unsigned a;
					cout << "Введите символ : "; cin >> a;
					cout << "В WIN1251 : " << static_cast<int>(a) << endl;
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
					cout << "Это интегрированный .срр" << endl;
					cout << "Введите символы = "; cin >> b; cin >> j; cin >> l;
					int z = Header(b, j, l);
					int x = Header(j, l, b);
					int y = Header(l, b, j);
					cout << "В WIN1251 : " << x << y << z << endl;
					break;
				}
				default: // если count равно любому другому значению
					cout << "Проверьте ваш выбор" << endl;
					goto start1;
				}
			}
			break;

		default:
			cout << "Проверьте ваш выбор" << endl;
			goto start;
		}
		}
		system("pause");
	}
}
