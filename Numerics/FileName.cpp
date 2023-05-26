#include<iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "");
//#define BINARY
#ifdef BINARY  
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_BIN_CAPACITY = 32; //максимально-возможная разрядность двоичного
	bool bin[MAX_BIN_CAPACITY] = {};
	int i = 0;
	while (decimal)
	{
		bin[i++] = decimal % 2; //получаем двоичный разряд числа, и сохраняем его в массив
		decimal /= 2;            //убираем полученный двоичный разряд из исходного числа
	}
	for (i--; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " "; //разделяем двоичноые на байты и тетрады;
	}
#endif
#define HEXADECIMAL
#ifdef HEXADECIMAL
	int decimal;
	cout << "Введите число: "; cin >> decimal;
	const int MAX_HEX_DECIMAL = 32;
	int hex[MAX_HEX_DECIMAL] = {};
	int i=0;
	while (decimal)
	{
		hex[i++] = decimal % 16;
		decimal /= 16;
	}
	for (i - 1; i >= 0; i--)
	{
		cout << hex[i];
	}
#endif



}