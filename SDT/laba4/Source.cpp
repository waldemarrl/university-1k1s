#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    cout << "Стоимость поездки от БГТУ до дома, и до Нац. Цирка " << endl;
    for (int n = 0; n < 3; n++)
    {
        int count; // переменная для выбора в switch
        double a = 0.85 * 4, b = 1.70; // переменные для хранения операндов
        cout << "Выберите: 1 - Автобус; 2 - Тролейбус; 3 - Метро + Автобус или троллейбус; ";
        cin >> count;
        switch (count) // начало оператора switch
        {
        case 1: // если count = 1
        {
            cout << "стоимость  поездки" << " " << a << "руб" << endl;
            break;
        }
        case 2: // если count = 2
        {
            cout << "стоимость  поездки" << " " << a << "руб" << endl; // 
            break;
        }
        case 3: // если count = 3
        {
            cout << "стоимость  поездки" << " " << b << "руб" << endl; // выполнить умножение
            break;
        }
        default: // если count равно любому другому значению
            cout << "Проверьте ваш выбор" << endl;
        }
        system("pause");
    }
}