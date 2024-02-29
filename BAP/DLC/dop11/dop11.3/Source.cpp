#include <iostream>
using namespace std;

int main()
{

	/*1.	¬вести целое число A.»нвертировать все биты с 2 по 14, включа€ эти биты.¬ывести результат.*/

	/*unsigned a;
	char tA[33], tM[33];
	cout << "Enter number: ";
	cin >> a;
	_itoa_s(a, tA, 2);
	cout << "Binary number:   " << tA << endl;
	unsigned mask = (1u << 13) - 1;
	mask <<= 2;
	_itoa_s(mask, tM, 2);
	cout << "Mask: " << tM << endl;
	a ^= mask;
	_itoa_s(a, tA, 2);
	cout << "Inverted number: " << tA;*/

	/*2.	»нвертировать в числе ј n битов влево от позиции p, заменить ими m битов числа ¬, начина€ с позиции q.*/


	unsigned a, p, n, bits, m, b, q, c;
	char tA[33], tM[33], tB[33], tBit[33], tMB[33], tC[33];
	cout << "Enter number a: ";
	cin >> a;
	_itoa_s(a, tA, 2);
	cout << "Binary number a:  " << tA << endl;
	cout << "Enter p (position): ";
	cin >> p;
	cout << "Enter n (number): ";
	cin >> n;
	unsigned mask = (1u << n) - 1;  // 1u = 00000000000001; (1u << n) = 000000001000000 (n - 1 нулей справа от 1); (1u << n) - 1 = 000000001111111 (просто n единиц)
	mask <<= p;                     //сдвигаем маску на p влево так как нужно получить n битов с позиции р
	_itoa_s(mask, tM, 2);
	cout << "Mask A: " << tM << endl;
	a ^= mask;                      // xor ^ инвертирует биты которые в маске равны 1
	_itoa_s(a, tA, 2);
	cout << "Inverted number:  " << tA << endl;
	bits = a;
	bits >>= p;                     //сдвигаем обратно на р уже вправо чтобы получить в самом начале наши инвертированные биты
	cout << "Enter m: ";
	cin >> m;
	bits <<= (32 - m);             //таким образом мы записываем в переменную bits только 
	bits >>= (32 - m);             //наши инвертированные биты (m битов т.к. так надо по условию)
	_itoa_s(bits, tBit, 2);
	cout << "Inverted " << m << " bits: " << tBit << "\nEnter number b: ";
	cin >> b;
	_itoa_s(b, tB, 2);
	cout << "Binary number b:  " << tB << "\nEnter position q: ";
	cin >> q;
	bits <<= q;                     //сдвигаем влево на q т.к. надо вставить биты bits с позиции q
	c = b;
	c ^= bits;						// ф-и€ xor ^= замен€ет m битов в b с позиции q нашими битами bits из числа а
	_itoa_s(c, tC, 2);
	cout << "Changed number b: " << tC;

}