#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//������ ��� ������� �(n) � �(n).���������� � ��� ���������� ���������, ������� �������� t, � ������ �� ������ ������� ������, ������� ���������� �� ����������.
	setlocale(LC_ALL, "Rus");
	const int n = 60;
	int A[n], B[n], t, size, cA = 0, cB = 0;
	cout << "������� ������ �������� (�� ����� 60)";
	cin >> size;

	for (int i = 0; i < size; i++)
		*(A + i) = rand() % 99;

	for (int i = 0; i < size; i++)
		*(B + i) = rand() % 99;

	cout << "\n������� t: ";
	cin >> t;

	for (int i = 0; i < size; i++)
		if (*(A + i) < t) cA++;

	for (int i = 0; i < size; i++)
		if (*(B + i) < t) cB++;

	if (cA > cB) {
		cout << "\n������ A[] (" << cA << " �������� ������ t = " << t << "):\n";
		for (int i = 0; i < size; i++)
			cout << "A[" << i << "] = " << *(A + i) << endl;
		cout << "\n������ B[]: (" << cB << " �������� ������ t = " << t << "):\n";
		for (int i = 0; i < size; i++)
			cout << "B[" << i << "] = " << *(B + i) << endl;
	}

	else if (cA < cB) {
		cout << "\n������ B[]: (" << cB << " �������� ������ t = " << t << "):\n";
		for (int i = 0; i < size; i++)
			cout << "B[" << i << "] = " << *(B + i) << endl;
		cout << "\n������ A[] (" << cA << " �������� ������ t = " << t << "):\n";
		for (int i = 0; i < size; i++)
			cout << "A[" << i << "] = " << *(A + i) << endl;
	}

	else if (cA == cB) cout << "\n������� ����� ���������� ���������� ���������, ������� t.";

	else cout << "\n������.";
}