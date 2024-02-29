#include <iostream>
using namespace std;

int main() {

	setlocale(LC_CTYPE, "RUS");
	printf("\tвариант 12\n");
	printf("\tметод трапеции\n");
	float a = 5, b = 11, n = 200, s = 0, h, x;
	x = a;
	for (int i = 1; i > 0; i++) {
		h = (b - a) / n;
		s = s + h * (exp(x) + 2 + exp(x + h) + 2);
		x = x + h;
		if (x > (b - h)) break;
	}
	printf("%f", s);

	printf("\n\tметод парабол\n");
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	float z, s1 = 0, s2 = 0, i = 1;
	for (int o = 1; o > 0; o++) {
		s2 = s2 + (exp(x) + 2);
		s1 = s1 + (exp(x) + 2);
		x = x + h;
		x = x + h;
		i = i + 1;
		if (i < n) break;
	}
	z = (h / 3) * ((exp(a) + 2) + 4 * (exp(a + h) + 2) + 4 * s1 + 2 * s2 + (exp(b) + 2));
	cout << z;

	printf("\n\tметод касательных\n");
	float e, x1, x2;
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &e);
	if (0 < (exp(a) - 3 - 1 / a) * (exp(x) + (1 / pow(x, 2)))) x1 = a;
	else x1 = b;
	do {
		x = x1;
		x1 = x - (exp(x) + 2 * (x * x) - 3 / (exp(x) + (4 * x)));
	} while (abs(x1 - x) > 2.7182);
	cout << x1;

	printf("\n\tметод дихотомии\n");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &e);
	do {
		x = (a + b) / 2;
		if ((exp(x) + (2 * (x * x)) - 3) * (exp(a) + (2 * (x * x)) - 3) <= 0)b = x;
		else a = x;
	} while (abs(a - b) > 2 * 2.7182);
	cout << x;
}