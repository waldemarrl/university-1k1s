#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;

//Dop 1. В заданной последовательности слов найти все слова, имеющие заданное окончание.

int main()
{
    char k;
    int o;
    setlocale(LC_CTYPE, "Russian");
    string s;
    cout << "Предложение: " << endl;
    getline(cin, s);
    cout << "Окончание: " << endl;
    cin >> k;
    o = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == ' ')
        {
            if (s[i - 1] = k) {
                o++;
            }

        }
    }
    cout << "Совпадает окончание: ";

    cout << o;
}