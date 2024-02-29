#include <iostream> 
#include <iomanip>
int main()

{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	float a, b;
	cout << "Введите A ="; cin >> a;
	cout << "Введите B ="; cin >> b;
	
	if(b < a)
		cout << "Дробь неправильная" << endl;
	else
		cout << "Дробь правильная" << endl;
}