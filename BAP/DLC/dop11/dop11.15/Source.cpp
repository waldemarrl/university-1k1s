#include <iostream>
using namespace std;

int main()
{
    /* 1.	Используя битовые операции проверить, кратно ли двум число А.*/


    setlocale(LC_CTYPE, "Russian");
    /*   int chislo;
       float i, j;
       char tmp[33];
       cout << "введите число";
       cin >> chislo;
       i = chislo / 2.;
       cout << "число при делении на 2: " << i << endl;
       j = chislo >> 1;
       cout << "число при сдвиге вправо на 2: " << j << endl;
       if (i == j) {
           cout << "число кратно 2" << endl;
       }
       else {
           cout << "число не кратно 2" << endl;
       }
       _itoa_s(chislo, tmp, 2);
       cout << "число в двоичной системе счисления" << tmp << endl;*/


       //2.	Установить в 0 в числе Аn битов влево от позиции p.
    int A, position, n, razn;
    char tmp[33];
    cout << "Введите A" << endl;
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << tmp << endl;
    cout << "Введите начальную позицию" << endl;
    cin >> position;
    cout << "Введите число битов" << endl;
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