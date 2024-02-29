#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "символы в win1251" << endl;
	for (int n = 0; n < 3; n++)
	{
		int count;
		cout << "Введите  вариант : 1, 2, 3"; cin >> count;
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
			cout << "В WIN1251 : " << static_cast<int>(a) << endl;
			cout << "В WIN1251 Заглавная  : " << static_cast<int>(a) - 32 << endl;
			break;
		}
		case 3:
		{
			char unsigned a;
			cout << "Введите символ : "; cin >> a;
			cout << "В WIN1251 : " << static_cast<int>(a) << endl;
			break;
		}
		
        default: // если count равно любому другому значению
			cout << "Проверьте ваш выбор" << endl;
	    }
		}
		system("pause");
	}

