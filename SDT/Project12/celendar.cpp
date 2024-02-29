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
	cout << "������� ���:";
	cin >> year;
	return year;
}

int input_month()
{
	int month;
	cout << "������� �����:";
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
	cout << "����� ��� �����: " << b << endl;
	return 0;
}
int today()
{
	//time_t now = time(0);
	//char* dt = ctime(&now);
	//cout << "������� ���� � �����" << dt << endl;
	char buffer[80];
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	const char* format = "%A, %B %d, %Y %I:%M:%S";
	strftime(buffer, 80, format, timeinfo);
	cout << "�������: " << buffer << endl;
	return 0;
}
void output(int year, int month, int week, int is_leap_year) {
	 const char* month_name[12] = { "������","�������","����","������","���","����","����","������","��������","�������","�������","�������" };
	const char* week_name[7] = { " �� "," �� ","�� ","�� ","�� ","�� ","�� " };
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	// � ���������� ���� ���������� ������� �� 29 ����
	if (is_leap_year) {
		days[1] = 29;
	}
	cout << endl;
	// ����������� ���� � ������
	cout << "    " << month_name[month] << "  " << year << endl;
	// ����������� �������� ������
	int i = 0;
	for (i = 0; i < 7; i++) {
		cout << week_name[i] << " ";
	}
	cout << endl;
	// ����������� ������� ���� ����� 1-� ������ ������� ������
	for (i = 0; i < week % 7; i++) {
		cout << "    ";
	}
	// ����������� ����
	for (i = 1; i <= days[month]; i++) {
		if (i < 10) cout << "  " << i << " ";
		else cout << " " << i << " ";
		if ((i + week) % 7 == 0) {
			cout << endl;
		}
	}
	cout << endl;
}

// ������� ������ 
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

// ������������, ���������� �� ���
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
		if (i == 1) cout << "������� 0 ��� ������ �� ���������" << endl;
		int year = input_year();
		if (year == 0) break;
		if (year <= 1582)
		{
			cout << "������! ������� ��� ����� 1582" << endl;
			break;
		}
		int month = input_month();
		if (month <= 0 || month >= 13)
		{
			cout << "������! ������� ���������� ����� (1-12)" << endl;
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

//�������� �������
int main()
{
	setlocale(LC_ALL, "ru");
	calc_core();
	return 0;
}
