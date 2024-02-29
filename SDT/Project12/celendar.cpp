#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <iomanip>
#include <time.h> 
#include <ctime>
using namespace std;

int input_year();
int intput_month();
int today();
int newyear();
void output();


int calc_week(int year, int month, int day);
int calc_leap_year(int year);
void calc_core();

int input_year()
{
	int year;
	cout << "Введите год:";
	cin >> year;
	return year;
}

int input_month()
{
	int month;
	cout << "Введите месяц:";
	cin >> month;
	return month;
}

int newyear()
{
	int a=365, c =366, b =0;
	char buffer[80];
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	const char *ng =  "%j" ;
	strftime(buffer, 80, ng, timeinfo);
	b = a - atoi(buffer);
	cout << "Новый год через: " << b << endl;
	return 0;
}
int today()
{
	//time_t now = time(0);
	//char* dt = ctime(&now);
	//cout << "Текущая дата и время" << dt << endl;
	char buffer[80];
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	const char* format = "%A, %B %d, %Y %I:%M:%S";
	strftime(buffer, 80, format, timeinfo);
	cout << "Сегодня: " << buffer << endl;
	return 0;
}
void output(int year, int month, int week, int is_leap_year) {
	 const char* month_name[12] = { "Январь","Февраль","Март","Апрель","Май","Июнь","Июль","Август","Сентябрь","Октябрь","Ноябарь","Декабрь" };
	const char* week_name[7] = { " Пн "," Вт ","Ср ","Чт ","Пт ","Сб ","Вс " };
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	// В високосном году установите февраль на 29 дней
	if (is_leap_year) {
		days[1] = 29;
	}
	cout << endl;
	// Отображение года и месяца
	cout << "    " << month_name[month] << "  " << year << endl;
	// Отображение названия недели
	int i = 0;
	for (i = 0; i < 7; i++) {
		cout << week_name[i] << " ";
	}
	cout << endl;
	// Отображение пустого поля перед 1-м числом каждого месяца
	for (i = 0; i < week % 7; i++) {
		cout << "    ";
	}
	// Отображение даты
	for (i = 1; i <= days[month]; i++) {
		if (i < 10) cout << "  " << i << " ";
		else cout << " " << i << " ";
		if ((i + week) % 7 == 0) {
			cout << endl;
		}
	}
	cout << endl;
}

// Формула Целера 
int calc_week(int year, int month, int day)
{
	if (month <= 2)
	{
		month += 12;
		year--;
	}
	int century = year / 100;
	year %= 100;
	int days = (year + year / 4 + century / 4 -
		2 * century + 26 * (month + 1) / 10 + day - 2) % 7;
	while (days < 0)
	{
		days += 7;
	}
	return days;
}

// Рассчитываем, високосный ли год
int calc_leap_year(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return 1;
	}
	return 0;
}

void calc_core()
{
	for (int i = 0;; i++)
	{
		if (i == 1) cout << "Введите 0 для выхода из календаря" << endl;
		int year = input_year();
		if (year == 0) break;
		if (year <= 1582)
		{
			cout << "Ошибка! Введите год после 1582" << endl;
			break;
		}
		int month = input_month();
		if (month <= 0 || month >= 13)
		{
			cout << "Ошибка! Введите правильный месяц (1-12)" << endl;
			break;
		}
		int is_leap_year = calc_leap_year(year);
		int week = calc_week(year, month, 1);
		month--; 
		output(year, month, week, is_leap_year);
		today();
		newyear();
	}
}

//Основная функция
int main()
{
	setlocale(LC_ALL, "ru");
	calc_core();
	return 0;
}
