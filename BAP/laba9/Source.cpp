#include <iostream>
using namespace std;

int main() {

	setlocale(LC_CTYPE, "RUS");
	cout << "метод  трапеции " << endl;
	double a, b,e, n, s1 = 0, s2 = 0, s = 0, h, x, i = 1;
	cout << "метод  трапеции " << endl;
	cout << "¬ведите а = "; cin >> a;
	cout << "¬ведите b = "; cin >> b;
	cout << "¬ведите n = "; cin >> n;
	x = a;
	for (int i = 1; i > 0; i++) {
		h = (b - a) / n;
		s = s + h * (((pow(x, 3) + 3)) + (pow(x, 3) + 3 + h));
		x = x + h;
		if (x > (b - h)) break;
	}
	cout << "ѕлощадь равна = " << s << endl;

	system("pause");

	cout << "метод параболы" << endl;
	h = (b - a) / (2 * n);
	x = a + (2 * h);
	for (int o = 1; o > 0; o++)
	{
		s2 = s2 + ((pow(x, 3) + 3));
		x = x + h;
		s1 = s1 + ((pow(x, 3) + 3));
		x = x + h;
		i = i + 1;
		if (i < n) break;
	}
	s = (h / 3) * (4 * (pow(a, 3) + 3 + h) + 4 * s1 + 2 * s2 + (pow(b, 3) + 3));
	cout << "ѕлощадь равна = " << s << endl;

	system("pause");

	cout << "метод параболы" << endl;
	cout << "¬ведите е = "; cin >> e;
	do {
		x = (a + b) / 2;
		if ((exp(x) + (2 * (x * x)) - 3) * (exp(a) + (2 * (x * x)) - 3) <= 0)b = x;
		else a = x;
	} while (abs(a - b) > 2 * 2.7182);
	cout << x;
}