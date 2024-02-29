#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    {

        int N = 9;
        int* arr = new int[N];
        arr[0] = 24;
        arr[1] = 12;
        arr[2] = 18;
        arr[3] = 6;
        arr[4] = 36;
        arr[5] = 96;
        arr[6] = 54;
        arr[7] = 72;
        arr[8] = 48;


        for (int i = 0; i < N - 1; i++)
            for (int j = i + 1; j < N; j++)
                if (arr[i] > arr[j])
                {
                    int buff = arr[i];
                    arr[i] = arr[j];
                    arr[j] = buff;
                }

        for (int i = N - 1; i >= 0; i--)
            for (int j = 0; j < i; j++)
                if (arr[i] % arr[j] != 0)
                {
                    for (int k = j; k < N - 1; k++)
                        arr[k] = arr[k + 1];
                    N--;
                }

        for (int i = 0; i < N; i++)
            cout << arr[i] << " ";

        delete[] arr;
        system("pause");
    }
    {
        const int N = 100, F = 100;
        int k = 0, amin = 0, bmin = 0, i, size, a[N], b[F], col = 99;
		int * pk = a, *pn = b;
        cout << "Введите размер массива до 100 ";
        cin >> size;
        cout << "Массив А:" << endl;
        srand((unsigned)time(NULL));
        for (pk = a; pk <(a + size); pk++)
        {
            *pk = rand() % col;
            cout << *pk << endl;
        }
        for (pn = a; pn <(b + size); pn++)
		{
			*pn = rand() % col;
			cout << *pn << endl;
		}
        cout << "MIN" << a[amin] << endl;
        cout << "Массив B :" << endl;
        for (i = 0; i < size; i++)
        {
            b[i] = rand() % col;
            cout << b[i] << endl;
        }
        for (i = 0; i < size; i++)
        {
            if (b[i] < b[bmin])
                bmin = i;
        }
        cout << "MIN" << b[bmin] << endl;
        for (i = 0; i < 2; i++)
        {
            for (i = 0; i < size; i++)
            {
                if (a[amin] != b[i])
                    bmin = 0;
                else
                    goto lop;
            }
            break;
        }
        cout << "Свопадения не найдены :)";
        return 0;
    lop:
        k = i;
        cout << "Одинаковый элемент!!! = " << b[k] << endl;

    }return 0;
}