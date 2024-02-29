#include <iomanip> 
#include <iostream>
#include <stdio.h>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(35) << setfill(probel) << probel; cout << setw(3) << setfill(c) << c << endl;
	cout << setw(37) << setfill(probel) << probel; cout << setw(3) << setfill(c) << c << endl;
	cout << setw(10) << setfill(probel) << probel; cout << setw(32) << setfill(c) << c << endl;
	cout << setw(10) << setfill(probel) << probel; cout << setw(32) << setfill(c) << c << endl;
	cout << setw(37) << setfill(probel) << probel; cout << setw(3) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel; cout << setw(3) << setfill(c) << c << endl;

	cout << setw(9) << setfill(probel) << probel; cout << setw(3) << setfill(c) << c << endl;
	cout << setw(7) << setfill(probel) << probel; cout << setw(3) << setfill(c) << c << endl;
	cout << setw(5) << setfill(probel) << probel; cout << setw(32) << setfill(c) << c << endl;
	cout << setw(5) << setfill(probel) << probel; cout << setw(32) << setfill(c) << c << endl;
	cout << setw(7) << setfill(probel) << probel; cout << setw(3) << setfill(c) << c << endl;
	cout << setw(9) << setfill(probel) << probel; cout << setw(3) << setfill(c) << c << endl;

	cout << setw(17) << setfill(probel) << probel; cout << setw(2) << setfill(c) << c << endl;
	cout << setw(16) << setfill(probel) << probel; cout << setw(4) << setfill(c) << c << endl;
	cout << setw(15) << setfill(probel) << probel; cout << setw(6) << setfill(c) << c << endl;
	cout << setw(17) << setfill(probel) << probel; cout << setw(2) << setfill(c) << c << endl;
	cout << setw(17) << setfill(probel) << probel; cout << setw(2) << setfill(c) << c << endl;
	cout << setw(17) << setfill(probel) << probel; cout << setw(2) << setfill(c) << c << endl;



	cout << setw(20) << setfill(probel) << probel; cout << setw(2) << setfill(c) << c << endl;
	cout << setw(20) << setfill(probel) << probel; cout << setw(2) << setfill(c) << c << endl;
	cout << setw(20) << setfill(probel) << probel; cout << setw(2) << setfill(c) << c << endl;
	cout << setw(18) << setfill(probel) << probel; cout << setw(6) << setfill(c) << c << endl;
	cout << setw(19) << setfill(probel) << probel; cout << setw(4) << setfill(c) << c << endl;
	cout << setw(20) << setfill(probel) << probel; cout << setw(2) << setfill(c) << c << endl;

	system ("pause");

	    float a = 3, a2, a4;
		a2 = a * a;//1
		a4 = a2 * a2;//2
		std::cout << "a=" << a << endl;
		std::cout << "a4=" << a4 << endl;
		return 0;
	}


