#include <ctime>
#include <iostream>
using namespace std;

void task1_3()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int size, i = 0;
	float* A, mult = 1, sum = 0;
	cout << "������� ������ �������: ";
	cin >> size;
	A = new float[size];
	for (i = 0; i < size; i++)
	{
		A[i] = 0.01 * (rand() % 10000) - 50;
		cout << A[i] << endl;
		if (A[i] < 0)
		{
			mult *= A[i];
		}
		if (A[i] > 0)
		{
			sum += A[i];
		}
	}
	cout << "�����: " << sum << endl;
	cout << "������������: " << mult << endl;
}

void task2_3() 
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int i = 0, j = 0, ** A, sz = 4, min = 100, max = 0, sMin = 0, sMax = 0;
	A = new int* [sz];
	for (i = 0; i < 4; i++)
	{
		A[i] = new int[sz];
		for (j = 0; j < 4; j++)
		{
			A[i][j] = rand() % 99;
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}

	for (i = 0; i < 4; i++)
	{
		if (i == 0)
		{
			for (j = 0; j < 4; j++)
			{
				if (A[i][j] < min)
				{
					min = A[i][j];
				}
			}
			sMin += min;
			min = 100;
		}

		if (i == 1)
		{
			for (j = 0; j < 4; j++)
			{
				if (A[i][j] > max)
				{
					max = A[i][j];
				}
			}
			sMax += max;
			max = 0;
		}

		if (i == 2)
		{
			for (j = 0; j < 4; j++)
			{
				if (A[i][j] < min)
				{
					min = A[i][j];
				}
			}
			sMin += min;
			min = 100;
		}

		if (i == 3)
		{
			for (j = 0; j < 4; j++)
			{
				if (A[i][j] > max)
				{
					max = A[i][j];
				}
			}
			sMax += max;
			max = 100;
		}
	}
	cout << "����� ����������� ��������� �������� �����: " << sMin << endl;
	cout << "����� ������������ ��������� ������ �����: " << sMax << endl;
}

void task1_9()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int size, i = 0;
	float* A, mult = 1, sum = 0, min = 100, count = 0;
	cout << "������� ������ �������: ";
	cin >> size;
	A = new float[size];
	for (i = 0; i < size; i++)
	{
		A[i] = 0.01 * (rand() % 10000) - 65;
		cout << A[i] << endl;
		if (A[i] > 0)
		{
			mult *= A[i];
		}
		if (A[i] < min)
		{
			min = A[i];
			count = i;
		}
	}
	for (i = 0; i < count; i++)
	{
		sum += A[i];
	}
	cout << "������������ ������������� ���������: " << mult << "\n";
	cout << "����� ��������� �� ������������ ��������: " << sum << "\n";
}

void task2_9()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int i = 0, j = 0, ** A, sz = 4, count = 0, stroka = 0, sum = 0;
	A = new int* [sz];
	for (i = 0; i < 4; i++)
	{
		A[i] = new int[sz];
		for (j = 0; j < 4; j++)
		{
			A[i][j] = rand() % 99 - 25;
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (A[i][j] > 0)
			{
				count++;
				sum += A[i][j];
			}
		}
		if (count == 4)
		{
			stroka = ++i;
			break;
		}
		else
		{
			count = 0;
			sum = 0;
		}
	}
	cout << "������ ������������� ������: " << stroka << endl;
	cout << "����� ��������� ���� ������: " << sum << endl;
	cout << "����� �������, ����������� �� ��� �����:\n";
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout << A[i][j] - sum << "\t";
		}
		cout << "\n";
	}
}

void task1_6()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int size, i = 0, number = 0, k = 0;
	float* A, min = 100, sum = 0;
	cout << "������� ������ �������: ";
	cin >> size;
	A = new float[size];
	for (i = 0; i < size; i++)
	{
		A[i] = 0.01 * (rand() % 10000) - 30;
		cout << A[i] << endl;
		if (abs(A[i]) < min)
		{
			min = A[i];
			number = i;
		}
	}
	for (i = 0; i < size; i++) 
	{
		if (A[i] < 0)
		{
			k = i;
			break;
		}
	}
	for (int j = k + 1; j < size; j++) 
	{
		sum += abs(A[j]);
	}
	cout << "����������� �� ������ ������� ������� A[" << number << "] = " << min << " = |" << abs(min) << "|" << endl;
	cout << "����� ������� ����� ������� �������������� ��������: " << sum << endl;
}

void task2_6()
{
	int i = 0, j = 0, pr = 1, mult = 1, counter = 0, number = 0, sd = 0;
	int const sz = 5;
	int	A[sz][sz] = { {3,-4,5,2,-8},{8,5,2,4,6},{9,3,-1,7,11},{4,6,1,9,7},{1,4,-2,9,10} };
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz; j++)
		{
			cout << A[i][j] << '\t';
		}
		cout << '\n';
	}
	
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz; j++)
		{
			if (A[i][j] > 0) 
			{
				++counter;
				pr *= A[i][j];
			}
		}
		if (counter == 5)
		{
			mult = pr;
			number = ++i;
			counter = 0;
			pr = 1;
		}
		else 
		{
			pr = 1;
			counter = 0;
		}
		if (number != 0) cout << "������������ ��������� " << number << "-� ������: " << mult << endl; 
	}
	
	int k, max = 0;
	for (k = 1; k <= 3; k++)
	{
		for (i = 0; i < sz; i++)
		{
			for (j = k; j < sz; j++)
			{
				if ((j - i) == k)
					sd += A[i][j];
			}
		}
		cout << "����� ��������� �" << k << ": " << sd << endl;
		if (sd > max)
			max = sd;
		sd = 0;
	}
	int l = 1;
	for (l = 1; l <= 3; l++) 
	{
		for (i = l; i < sz; i++)
		{
			for (j = 0; j < sz; j++)
			{
				if ((i - j) == l)
					sd += A[i][j];
			}
		}
		cout << "����� ��������� �" << k + l - 1 << ": " << sd << endl;
		if (sd > max)
			max = sd;
		sd = 0;
	}
	cout << "������������ ����� ��������� �����: " << max << endl;
}

void task1_7()
{
	
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int size, i = 0;
	int* A, counter = 0, sum = 0;
	double arifm = 0;
	cout << "������� ������ �������: ";
	cin >> size;
	A = new int[size];
	for (i = 0; i < size; i++)
	{
		A[i] = rand() % 99;
		cout << A[i] << endl;
		sum += A[i];
	}
	arifm = static_cast<double>(sum) / size; 
	for (i = 0; i < size; i++)
		if (A[i] > arifm)
			counter++;
	cout << "���������� ���������, ������� �������� ���������������, ������� " << arifm << ": " << counter << endl;
}

void task2_7()
{

	int A[4][3] = { {3,6,0},{4,9,1},{0,5,8},{2,4,6} };
	int counter = 0, numStr = 0, number = 0, numC = -1, maxNum = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << A[i][j] << '\t'; 
		}
		cout << '\n';
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (A[i][j] != 0)
				++counter; 
		}
		if (counter == 3) 
			++numStr;
		counter = 0;
	}
	cout << "� ������� " << numStr << " ��������� �����.\n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			number = A[i][j];
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (number == A[i][j])
						maxNum = A[i][j]; 
				}
			}

		}
	}
	cout << "������������ �������: " << maxNum << endl;
}

void var3()
{
	int c;
	do
	{
		cout << "������� �����:\n1 - ������ � ��������;\n2 - ������ � ��������;\n3 - ����� �� ���������.\n";
		cin >> c;
		switch (c)
		{
		case 1: task1_3(); break;
		case 2: task2_3(); break;
		case 3: break;
		}
	} while (c != 3);
}

void var9()
{
	int c;
	do
	{
		cout << "������� �����:\n1 - ������ � ��������;\n2 - ������ � ��������;\n3 - ����� �� ���������.\n";
		cin >> c;
		switch (c)
		{
		case 1: task1_9(); break;
		case 2: task2_9(); break;
		case 3: break;
		}
	} while (c != 3);
}

void var6()
{
	int c;
	do
	{
		cout << "������� �����:\n1 - ������ � ��������;\n2 - ������ � ��������;\n3 - ����� �� ���������.\n";
		cin >> c;
		switch (c)
		{
		case 1: task1_6(); break;
		case 2: task2_6(); break;
		case 3: break;
		}
	} while (c != 3);
}

void var7()
{
	int c;
	do
	{
		cout << "������� �����:\n1 - ������ � ��������;\n2 - ������ � ��������;\n3 - ����� �� ���������.\n";
		cin >> c;
		switch (c)
		{
		case 1: task1_7(); break;
		case 2: task2_7(); break;
		case 3: break;
		}
	} while (c != 3);
}

int main()
{
	setlocale(LC_ALL, "ru");
	int c;
	do
	{
		cout << "������� �����:\n1 - �������� �������  (3 �������);\n2 - �������������� �1 (9 �������);\n3 - �������������� �2 (6 �������);\n4 - �������������� �3 (7 �������);\n5 - ����� �� ���������.\n";
		cin >> c;
		switch (c)
		{
		case 1: var3(); break;
		case 2: var9(); break;
		case 3: var6(); break;
		case 4: var7(); break;
		}
	} while (c != 5);
}