#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    cout << "��������� ������� �� ���� �� ����, � �� ���. ����� " << endl;
    for (int n = 0; n < 3; n++)
    {
        int count; // ���������� ��� ������ � switch
        double a = 0.85 * 4, b = 1.70; // ���������� ��� �������� ���������
        cout << "��������: 1 - �������; 2 - ���������; 3 - ����� + ������� ��� ����������; ";
        cin >> count;
        switch (count) // ������ ��������� switch
        {
        case 1: // ���� count = 1
        {
            cout << "���������  �������" << " " << a << "���" << endl;
            break;
        }
        case 2: // ���� count = 2
        {
            cout << "���������  �������" << " " << a << "���" << endl; // 
            break;
        }
        case 3: // ���� count = 3
        {
            cout << "���������  �������" << " " << b << "���" << endl; // ��������� ���������
            break;
        }
        default: // ���� count ����� ������ ������� ��������
            cout << "��������� ��� �����" << endl;
        }
        system("pause");
    }
}