#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//Заданы два массива А(n) и В(n).Подсчитать в них количество элементов, меньших значения t, и первым на печать вывести массив, имеющий наибольшее их количество.
	setlocale(LC_ALL, "Rus");
	const int n = 60;
	int A[n], B[n], t, size, cA = 0, cB = 0;
	cout << "Введите размер массивов (не более 60)";
	cin >> size;

	for (int i = 0; i < size; i++)
		*(A + i) = rand() % 99;

	for (int i = 0; i < size; i++)
		*(B + i) = rand() % 99;

	cout << "\nВведите t: ";
	cin >> t;

	for (int i = 0; i < size; i++)
		if (*(A + i) < t) cA++;

	for (int i = 0; i < size; i++)
		if (*(B + i) < t) cB++;

	if (cA > cB) {
		cout << "\nМассив A[] (" << cA << " элементы меньше t = " << t << "):\n";
		for (int i = 0; i < size; i++)
			cout << "A[" << i << "] = " << *(A + i) << endl;
		cout << "\nМассив B[]: (" << cB << " элементы меньше t = " << t << "):\n";
		for (int i = 0; i < size; i++)
			cout << "B[" << i << "] = " << *(B + i) << endl;
	}

	else if (cA < cB) {
		cout << "\nМассив B[]: (" << cB << " элементы меньше t = " << t << "):\n";
		for (int i = 0; i < size; i++)
			cout << "B[" << i << "] = " << *(B + i) << endl;
		cout << "\nМассив A[] (" << cA << " элементы меньше t = " << t << "):\n";
		for (int i = 0; i < size; i++)
			cout << "A[" << i << "] = " << *(A + i) << endl;
	}

	else if (cA == cB) cout << "\nМассивы имеют одинаковое количество элементов, меньших t.";

	else cout << "\nОшибка.";
}