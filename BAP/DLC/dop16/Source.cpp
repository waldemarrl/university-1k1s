//dopa3



#include <iostream>
float integ(float(*) (float), float, float, float);
float f(float);
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float z, a, b, h;
	cout << "пределы:" << endl;
	cin >> a;
	cin >> b;
	cout << "точность:" << endl;
	cin >> h;
	z = integ(f, (float)a, (float)b, (float)h);
	cout << "Integral=" << z;
}
float integ(float(*f) (float), float a, float b, float h)
{
	float x, s = 0.0;
	x = a + h;
	while (x <= b)
	{
		s += h * f(x);
		x = x + h;
	}
	return s / 2;
}

float f(float x)
{
	return (exp(x) + 2);
}

//dopa2

//16	»з текста удалить те его части, которые заключены в кавычки.

#include <cstring>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	char* l;
	int k;
	setlocale(LC_CTYPE, "Russian");
	string s;
	cout << "Write something: " << endl;
getline(cin, s);
	k = 1;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '"')
		{
			k++;
		}
		if (k % 2 == 0)
		{
			if (s[i] != '"')
			{
				s[i] = ' ';
			}

		}


		cout << s[i];
	}
}
//dopa1
//14	Ќайти самое длинное и самое короткое слово в заданном предложении.

#include <iostream>
#include <sstream>

using namespace std;
int main()
{
	char* lol;
	char ch;
	char mas[1000];
	string s1 = ".!?", s2 = " ,;-:";
	int i, max = 0, min = 1000, flag2, flag1, num_ch, current_len, maxnum_sent, num_sent = 0, end_maxw, end_minw, num_sentmax, num_sentmin;
	current_len = 0;
	num_ch = -1;
	while (cin.get(ch))
	{
		num_ch++; mas[num_ch] = ch;

		flag1 = 0;
		for (i = 0; i < s1.length(); i++)
			if (ch == s1[i]) flag1 = 1;
		flag2 = 0;
		for (i = 0; i < s2.length(); i++)
			if (ch == s2[i]) flag2 = 1;

		if ((flag1 == 0) && (flag2 == 0) && (ch != '\n')) current_len++;
		else if (current_len > 0) {
			if (current_len > max) { max = current_len;  end_maxw = num_ch - 1; num_sentmax = num_sent; }
			if (current_len < min) { min = current_len;  end_minw = num_ch - 1; num_sentmin = num_sent; }
			current_len = 0;
		}
		if (flag1 == 1) num_sent++;
		if (ch == '\n') break;
	}

	if (num_sentmax == num_sentmin)
	{
		for (i = end_maxw; i > end_maxw - max; i--)
			mas[i] = '*';
		for (i = end_minw; i > end_minw - min; i--)
			mas[i] = '*';
	}
	cout << "min_dlina=" << min << endl;
	cout << "max_dlina=" << max << endl;
	for (i = 0; i <= num_ch; i++)
		cout << mas[i];

	return 0;
}