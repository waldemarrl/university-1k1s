#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;


//Dop 3. ��������������� �������� �����������, ������ �� ���� ��� ����� � ��������� �������� � ������������� ����� � ������� ��������. 

void main()
{
    setlocale(LC_ALL, "ru");
    const int N = 100;
    char str[N];
    cout << "Enter string: ";
    cin.getline(str, N);
    unsigned int m;
    m = strlen(str);

    for (int i = m - 1; i >= 0; i--)
    {
        cout << str[i];
        if (str[i] == ' ')
        {
            i--;
            while (str[i] != ' ')
            {
                i--;
            }
        }
    }
}
