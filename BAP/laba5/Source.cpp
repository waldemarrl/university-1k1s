#include <iostream> 
#include <iomanip>
int main()

{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	float a, b;
	cout << "������� A ="; cin >> a;
	cout << "������� B ="; cin >> b;
	
	if(b < a)
		cout << "����� ������������" << endl;
	else
		cout << "����� ����������" << endl;
}