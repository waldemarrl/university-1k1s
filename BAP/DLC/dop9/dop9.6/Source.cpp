#include <iostream>
using namespace std;

int main() {

	setlocale(LC_CTYPE, "RUS");
	printf("\t������� 6\n");
	printf("\t����� ��������\n");
	double a2 = 1, n, s, x, a = 0, h, s1, s2, i, z, b, e, x1, b2 = 5;
	n = 200;
	s = 0;
	x = a;
	for (int i = 1; i > 0; i++) {
		h = (b2 - a2) / n;
		s = s + h * ((1 + pow(x, 3)) + ((1 + pow(x + h, 3)))) / 2;
		x = x + h;
		if (x > (b2 - h)) break;
	}
	printf("%f", s);

	printf("\n\t����� �������\n");
	h = (b2 - a2) / (2 * n);
	x = a2 + 2 * h;
	s1 = 0;
	s2 = 0;
	i = 1;
	for (int o = 1; o > 0; o++) {
		s2 = s2 + ((1 + pow(x, 3)));
		x = x + h;
		s1 = s1 + ((1 + pow(x, 3)));
		x = x + h;
		i = i + 1;
		if (i < n) break;
	}
	z = (h / 3) * (((1 + pow(a2, 3)) + 4 * ((1 + pow(a2 + h, 3)) + 4 * s1 + 2 * s2 + ((1 + pow(b2, 3))))));
	cout << z;

	printf("\n\t����� �����������\n");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &e);
	if (0 < ((5 * x - 1 + pow(x, 3)) * (5 + 2 * pow(x, 2)))) { x1 = a; }
	else {
		x1 = b;
	}
	do {
		x = x1;
		x1 = x - (((5 * x - (5 * x - 1 + pow(x, 3) + pow(x, 3)) / (5 + 2 * pow(x, 2)))));
	} while (abs(x1 - x) > 2.7182);
	cout << x1;

	printf("\n\t����� ���������\n");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &e);
	do {
		x = (a + b) / 2;
		if (((5 * x - 1 + pow(x, 3)) * ((5 * a - 1 + pow(a, 3)) < 0)))b = x;
		else a = x;
	} while (abs(a - b) > 2 * 2.7182);
	cout << x;
}