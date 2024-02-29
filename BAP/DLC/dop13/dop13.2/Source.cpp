#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;

//Dop 2. ¬ заданном предложении указать слово, в котором дол€ гласных (A, E, I, O, U Ч строчных или прописных) максимальна.

void main()
{
    setlocale(LC_ALL, "ru");
    int count[10] = { 0,0,0,0,0,0,0,0,0,0 };
    const int N = 100;
    char str[N];
    cout << "Enter string: ";
    cin.getline(str, N);
    unsigned int m;
    m = strlen(str);
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        if (str[i] == 'a' || str[i] == 'A'
            || str[i] == 'e' || str[i] == 'E'
            || str[i] == 'i' || str[i] == 'I'
            || str[i] == 'o' || str[i] == 'O'
            || str[i] == 'u' || str[i] == 'U')
        {
            count[k]++; // элемент массива
        }
        if (str[i] == ' ')
        {
            k++; //индекс массива
        }
    }

    int max = count[0]; //кол гласных в 1 слове
    int word = 0;
    for (int i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            word = i;
        }
    }
    cout << "ћаксимальное число гласных: " << max << endl;
    cout << "—лово под номером: " << word + 1 << endl;
}