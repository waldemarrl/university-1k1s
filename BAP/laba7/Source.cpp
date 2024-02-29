#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	{
		setlocale(LC_CTYPE, "russian");
		double f = -125 * pow(10, -6), y = 1.7, c, d, t = 1;
		do
		{
			c = 2 * (sin(f / 2)) + log10(t);
			if (c >= 3)
				d = y * exp(-2 * t) + f;
			else
				d = y - pow(y, 3);
			cout << "c = " << c << "\t";
			cout << "d = " << d << endl;
			t = t + 0.1;
			system("pause");
		} while (t < 2);
	}
	{
	
	 int f = 0, i = 0, x, z, k = 0;
	 int mas[10];
	    for (x = 1000; x <= 9999; x++)
		{
			for (i = 0; i < 10; i++)
				mas[i] = 0;
			z = x;
			while (z)
			{
				mas[z % 10]++;
				z /= 10;
			}
			for (i = 0; i < 10; i++)
				if (mas[i] > 1)
					break;
			if (i == 10)
			{
				cout << x << " ";
				k++;
				if (k % 10 == 0)
					cout << endl;
				if (k % 9999 == 0)
			    system("pause");


			}
		}
	}
}
