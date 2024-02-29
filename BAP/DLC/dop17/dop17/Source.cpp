#include <iostream>
#include <locale>

using namespace std;

//������ ���� � ������� � ���
void Lab_16_1();
short& Minimum(short* Buffer);
short& Maximum(short* Buffer);

//������ ���� � ������� � ���
void Lab_16_2();


int main()
{
	setlocale(LC_CTYPE, "Russian");
	short Count = 0;
	do {
		cout << "�������� ����� ������������: " << endl;
		cout << "1 - ������� ���� ���������� � ���������� ��������� � �������" << endl;
		cout << "2 - ������� ������ �������� �����" << endl;
		cin >> Count;
		switch (Count) {
		case 1: Lab_16_1(); break;
		case 2: Lab_16_2(); break;
		case 3: break;
		}
	} while (Count != 3);
	return 0;
}

void Lab_16_1()
{
	short* Array = new short[16];
	short Rows = 4, Columns = 4;
	/* ����������*/
	srand((unsigned)time(NULL));
	cout << "�������� �������" << endl;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			*(Array + i * Columns + j) = rand() % 10;
			cout << *(Array + i * Columns + j) << " ";
		}
		cout << endl;
	}
	/*���������� ������������ � �������������*/
	short SumOfMinimum = 0, SumOfMaximum = 0;
	for (short i = 0; i < Rows; i++)
	{
		if ((i + 1) % 2 != 0)
		{
			/*���������� � ������ �������� ������*/
			short* Buffer = new short[4];
			for (short j = 0; j < 4; j++)
			{
				*(Buffer + j) = *(Array + i * Columns + j);
			}
			/*	 � ������� ������� ������� �����������*/
			SumOfMinimum += Minimum(&Buffer[0]);
			delete[] Buffer;
		}
		else
		{
			short* Buffer = new short[4];
			for (short j = 0; j < 4; j++)
			{
				*(Buffer + j) = *(Array + i * Columns + j);
			}
			SumOfMaximum += Maximum(&Buffer[0]);
			delete[] Buffer;
		}
	}
	cout << "����� ����������� = " << SumOfMinimum << endl;
	cout << "����� ������������ = " << SumOfMaximum << endl;
	delete[] Array;
}

short& Minimum(short* Buffer)
{
	short Minimum = *Buffer;
	for (short i = 1; i < 4; i++)
	{
		if (*(Buffer + i) < Minimum)
			Minimum = *(Buffer + i);
	}
	return Minimum;
}

short& Maximum(short* Buffer)
{
	short Maximum = *Buffer;
	for (short i = 1; i < 4; i++)
	{
		if (*(Buffer + i) > Maximum)
			Maximum = *(Buffer + i);
	}
	return Maximum;
}

void Lab_16_2()
{
	char* Sentence = new char[256];
	cout << "������� �����������(����������� ������������� ������):";
	cin.getline(Sentence, 256, '.');
	short i = 0;
	short Length = strlen(Sentence);
	short MaxLength = 0;
	short CurrentProbel = 0, LastProbel = 0;
	while (i != Length)
	{
		if (*(Sentence + i) == ' ')
		{
			CurrentProbel = i;
			short LengthOfWord = CurrentProbel - LastProbel - 1;
			if (LengthOfWord > MaxLength)
			{
				MaxLength = LengthOfWord;
			}
			LastProbel = CurrentProbel; // ������ ������� ����� ���� �����
		}
		if ((i + 1) == Length)
		{
			short LengthOfWord = Length - LastProbel - 1;
			if (LengthOfWord > MaxLength)
			{
				MaxLength = LengthOfWord;
			}
		}
		i++;
	}
	cout << "������������ ���-�� ���� � �����: " << MaxLength;
}

//
//#include <iostream>
//#include <locale>
//
//using namespace std;
//
//void Matrix();
//double MinimumOfTheRow(double N, double First, ...);
//int MinimumOfTheRow(int N, int First, ...);
//
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	short Voice = 0;
//	do {
//		char* Sentence = new char[256];
//		cout << "�������� ����� �������: " << endl;
//		cout << "1 - ����� ������ � �������������� ����������" << endl; // � �������� ������� �� 2
//		cout << "2 - ���������� ������������ �� �����" << endl;
//		cin >> Voice;
//		switch (Voice)
//		{
//		case 1: Matrix(); break;
//		case 2: cout << MinimumOfTheRow(5, 14, 1, 4, 2, 0) << endl; break;
//		case 3: break;
//		}
//	} while (Voice != 3);
//	return 0;
//}
//
//void Matrix()
//{
//	// ������������� �������
//	short Rows = 0, Columns = 0; // ������, ������
//	cout << "������� ������� ������� (������, �������):";
//	cin >> Rows >> Columns;
//	double* Matrix = new double[Rows * Columns];
//	// ����������
//	srand((unsigned)time(NULL));
//	for (short i = 0; i < Rows; i++)
//	{
//		for (short j = 0; j < Columns; j++)
//		{
//			*(Matrix + i * Columns + j) = (rand() % 10) - 5;
//			cout << *(Matrix + i * Columns + j) << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	// ����� ������������� ������
//	short Temporary = 0;
//	for (short i = 0; i < Rows; i++)
//	{
//		short Counter = 0;
//		for (short j = 0; j < Columns; j++)
//		{
//
//			if (*(Matrix + j * Columns + i) < 0)
//			{
//				Counter++;
//			}
//			else
//			{
//				Counter = 0;
//			}
//		}
//		if (Counter == Rows)
//		{
//			Temporary = i;
//			cout << "������� ��������� �� ������������� ���������:" << Temporary << endl;
//			i = Rows;
//		}
//	}
//	// ���������� �������� ��������������� ������
//	double Average = 0;
//	for (short i = 0; i < Rows; i++)
//	{
//		Average += *(Matrix + Temporary * Columns + i);
//	}
//	Average /= Rows;
//	cout << "������� ��������������: " << Average << endl;
//	for (short i = 0; i < Rows; i++)
//	{
//		for (short j = 0; j < Columns; j++)
//		{
//			*(Matrix + i * Columns + j) -= Average;
//			cout << *(Matrix + i * Columns + j) << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	delete[] Matrix;
//}
//
//double MinimumOfTheRow(double N, double First, ...)
//{
//	double* D = &First;
//	double* Min = &First;
//	while (N--)
//	{
//		if (*(++D) < *Min)
//			*Min = *D;
//	}
//	return *Min;
//}
//
//int MinimumOfTheRow(int N, int First, ...)
//{
//	int* U = &First;
//	int* Min = &First;
//	while (N--)
//	{
//		if (*Min > * (++U))
//			*Min = *U;
//	}
//	return *Min;
//}
//
//

//
//
//#include <iostream>
//#include <locale>
//
//using namespace std;
//
//void FindZero();
//int SumOfNumbers(short N, int First, ...);
//
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	short Voice = 0;
//	do {
//		cout << "�������� ����� �������" << endl;
//		cout << "1 - ����� ����� � ������� " << endl;
//		cout << "2 - ����� ����� �� ������� " << endl;
//		cout << "3 - �����" << endl;
//		cin >> Voice;
//		switch (Voice)
//		{
//		case 1: FindZero(); break;
//		case 2: cout << SumOfNumbers(8, 1, 2, 5, 5, 3, 7, 4, 5) << endl; break;
//		case 3: break;
//		default: cout << "�����������" << endl;
//		}
//	} while (Voice != 3);
//	return 0;
//}
//
//void FindZero()
//{
//	// �������� ����� ����� � �������
//	short Rows = 0, Columns = 0;
//	cout << "������� ���-�� ����� � ��������: " << endl;
//	cin >> Rows >> Columns;
//	short* Matrix = new short[Rows * Columns]; // ������� �������
//	// ��������� ������ ���������� �������
//	for (short i = 0; i < Rows; i++)
//	{
//		for (short j = 0; j < Columns; j++)
//		{
//			*(Matrix + i * Columns + j) = rand() % 5;
//			cout << *(Matrix + i * Columns + j) << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	// find zeros
//	short Flag = 0;
//	for (short i = 0; i < Rows; i++)
//	{
//		for (short j = 0; j < Columns; j++)
//		{
//			if (*(Matrix + i * Columns + j) == 0)
//			{
//				Flag++;
//				break;
//			}
//		}
//	}
//	if (Flag = Rows)
//	{
//		for (short i = 0; i < Rows; i++)
//		{
//			for (short j = 0; j < Columns; j++)
//			{
//				if (*(Matrix + i * Columns + j) < 0)
//					*(Matrix + i * Columns + j) = 0;
//			}
//		}
//	}
//	// �����
//	for (short i = 0; i < Rows; i++)
//	{
//		for (short j = 0; j < Columns; j++)
//		{
//			cout << *(Matrix + i * Columns + j) << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	delete[] Matrix;
//}
//
//int SumOfNumbers(short N, int First, ...)
//{
//	int* Number = &First;
//	int Formula = 0;
//	while (N != 1)
//	{
//		int temp = *Number; // ������� ��-�� ����������� ++, ������� �� ��������� ���� �����������
//		int temp_2 = *(++Number); // pow(-1, N) * (*Number) * (*(++Number))
//		Formula += pow(-1, N) * temp * temp_2;
//		N--;
//	}
//	return Formula;
//}