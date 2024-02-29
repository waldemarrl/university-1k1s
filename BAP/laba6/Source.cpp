#include <iostream> 
#include <iomanip>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
	{
		setlocale(LC_CTYPE, "Russian");
		float s = 5.9, m = 6, f = 1.2 * pow(10, 3), c, y, h;
		for (int n = 0; n < 5; n++)
		{
			printf("¬ведите с");
			scanf_s("%f", &c);
			y = (c + s) / log10(f) / exp(-s);
			h = (y - m) / log(y);
			printf("c=%5.2f\t", c);
			printf("h=%5.2f\n", h);
		}
	}
	system("pause");

	{
		float c = 0, s = 5.9, m = 6, f = 1.2 * pow(10, 3), y, h;
		while (c < 1)
		{
			y = (c + s) / log10(f) / exp(-s);
			h = (y - m) / log(y);
			cout << "c=" << c << "\t";
			cout << "h=" << h << endl;
			c = c + 0.1;
		}
	}
	system("pause");

	{
		setlocale(LC_CTYPE, "Russian");
		float c = 0.2, s, m = 6, f = 1.2 * pow(10, 3), y, h;
		for (int n = 0; n < 3; n++)
		{
			printf("¬ведите s");
			scanf_s("%f", &s);
			c = 0.2;
			
				while (c < 0.6)
				{
					y = (c + s) / log10(f) / exp(-s);
					h = (y - m) / log(y);
					cout << "s=" << s << "\n";
					cout << "c=" << c << "\n";
					cout << "h=" << h << endl;
					c = c + 0.1;
				}
			
			
		}
	}
}
