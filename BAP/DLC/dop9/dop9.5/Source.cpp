#include <iostream>
using namespace std;

int main() {

	setlocale(LC_CTYPE, "RUS");
	printf("\tвариант 5\n");
	printf("\tметод трапеции\n");
	double a1 = 8, n, s, x, h, s1, s2, i, a = 0, z, e, b, x1, b1 = 15;
	n = 200;
	s = 0;
	x = a;
	for (int i = 1; i > 0; i++) {
		h = (b1 - a1) / n;
		s = s + h * ((5 - pow(x, 2)) + (5 - pow(x + h, 2))) / 2;
		x = x + h;
		if (x > (b1 - h)) break;
	}
	printf("%f", s);

	printf("\n\tметод парабол\n");
	h = (b1 - a1) / (2 * n);
	x = a1 + 2 * h;
	s1 = 0;
	s2 = 0;
	i = 1;
	for (int o = 1; o > 0; o++) {
		s2 = s2 + (5 - pow(x, 2));
		x = x + h;
		s1 = s1 + (5 - pow(x, 2));
		x = x + h;
		i = i + 1;
		if (i < n) break;
	}
	z = (h / 3) * ((5 - pow(a1, 2)) + 4 * (5 - pow(a1 + h, 2)) + 4 * s1 + 2 * s2 + (5 - pow(b1, 2)));
	cout << z;

	printf("\n\tметод касательных\n");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &e);
	if (0 < ((2 - pow(x, 2) + x) * ((-2 * x) + 1))) x1 = a;
	else x1 = b;
	do {
		x = x1;
		x1 = x - ((2 - pow(x, 2) + x) / ((-2 * x) + 1));
	} while (abs(x1 - x) > 2.7182);
	cout << x1;

	printf("\n\tметод дихотомии\n");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &e);
	do {
		x = (a + b) / 2;
		if ((2 - pow(x, 2) + x) * (2 - pow(a, 2) + a) < 0)b = x;
		else a = x;
	} while (abs(a - b) > 2 * 2.7182);
	cout << x;
}