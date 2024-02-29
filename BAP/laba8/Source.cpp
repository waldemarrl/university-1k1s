#include <iostream>
#include <iomanip>
#include <cstdlib> 
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	{
		double t = 0.45, x, g, g1 = 0;
		const int size = 6;
		for (int n = 0; n <= size; n++)
		{

			cout << "Введите Х = "; cin >> x;
			g = t + ((x + 1) / x);
			cout << "g = " << g << "\n";
			g1 = g1 + g;
			cout << "g1 = " << g1 << endl;

		}
	}
	system("pause");
	{
		const int N = 6;
		int a[N], max = -100000000, min = 100000000;
		cout << " Dtbnt y = " << endl;
		for (int i = 0; i < N; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < N; i++)
		{
			if (a[i] < min)
				min = a[i];
		}
		cout << "min = " << min << "\n";
		{
			double  g, g1 = 1;
			const int size = 6;
			for (int n = 0; n <= size; n++)
			{
				g = (min - 5) + min;
				cout << "g = " << g << "\t";
				g1 = g1*(min - 5) + min;
				cout << "g1 = " << g1 << endl;
			}
		}
	}
	system("pause");
}

