#include <iostream>
using namespace std;

int main()
{
    /* 1.	��������� ������� �������� ���������, ������ �� ���� ����� �.*/


    setlocale(LC_CTYPE, "Russian");
    /*   int chislo;
       float i, j;
       char tmp[33];
       cout << "������� �����";
       cin >> chislo;
       i = chislo / 2.;
       cout << "����� ��� ������� �� 2: " << i << endl;
       j = chislo >> 1;
       cout << "����� ��� ������ ������ �� 2: " << j << endl;
       if (i == j) {
           cout << "����� ������ 2" << endl;
       }
       else {
           cout << "����� �� ������ 2" << endl;
       }
       _itoa_s(chislo, tmp, 2);
       cout << "����� � �������� ������� ���������" << tmp << endl;*/


       //2.	���������� � 0 � ����� �n ����� ����� �� ������� p.
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