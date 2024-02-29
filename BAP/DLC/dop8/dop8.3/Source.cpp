#include <iostream>

int main()
{
	using namespace std;
	cout << "3 variant: " << endl;
	double  q, z = 0, x;
	for (int i = 1; i <= 3; i++) {
		cin >> x;
		z = z + pow((x - 2), 2);
	}

	q = 8 * x + z;
	for (int i = 1; i <= 2; i++) {
		cin >> x;
		z = pow((x - 2), 2);
	}
	z = q + z;

	cout << " z = " << z << endl;


	cout << "11 varisnt: " << endl;
	double o = 1, y, s, a = 5.45;
	for (int i = 1; i <= 5; i++) {
		cin >> y;
		o = o * y * (i * i + 1);
	}
	o = o * 4;

	s = 2 * a + o * sin(a);
	cout << " o = " << o << endl << "s = " << s << endl;

	cout << "2 variant: " << endl;
	double c = -0.045, g = 1, b;
	for (int m = 1; m <= 4; m++)
	{
		cin >> b;
		g = g * pow((b + 1), 2);
	}
	g = c * g;
	cout << "g= " << g;
}