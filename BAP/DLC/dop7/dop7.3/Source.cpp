#include <stdio.h>
#include <iomanip>
#include <iostream>
using namespace std;
void main()
{
    setlocale(LC_CTYPE, "russian");
    float s, p, x, n, a = 105e-4, m = 4, i = 7;
    for (int n = 1; n <= 3; n++)
    {
        cout << "¬ведите x = ";  cin >> x;
        s = exp(-a * x) - log(i / x * m) / pow(log(m), 2);
        if (s > (2 * x))
            p = pow(-i * s, 2);
        else p = sin(-6 * s);
        cout << "s = " << s << endl;
        cout << "p = " << p << endl;
    }
}