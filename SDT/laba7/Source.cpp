#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "символы в win1251" << endl;
	int index = 0;
	for (index = 0; index < 3; index++)
	{
		int count;
		char unsigned a;
		cout << "Введите  вариант : 1, 2, 3"; cin >> count;
		switch (count)
		{
		case 1:
		{
			cout << "Введите латинский символ : "; cin >> a;
			cout << "В WIN1251 : " << static_cast<int>(a) << endl;
			cout << "В WIN1251 Заглавная  : " << static_cast<int>(a) - 32 << endl;
			break;
		}
		case 2:
		{
			cout << "Введите руссий символ : "; cin >> a;
			cout << "В WIN1251 : " << static_cast<int>(a)  - 32 << endl;
			cout << "В WIN1251 Заглавная  : " << static_cast<int>(a) - 16 << endl;
			break;
		}
		case 3:
		{
			cout << "Введите символ : "; cin >> a;
			cout << "В WIN1251 : " << static_cast<int>(a) << endl;
			break;
		}

		default: // если count равно любому другому значению
			cout << "Проверьте ваш выбор" << endl;
		}
		system("pause");
	}