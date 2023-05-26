#include<iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "");
//#define BINARY
#ifdef BINARY  
	int decimal;
	cout << "������� ���������� �����: "; cin >> decimal;
	const int MAX_BIN_CAPACITY = 32; //�����������-��������� ����������� ���������
	bool bin[MAX_BIN_CAPACITY] = {};
	int i = 0;
	while (decimal)
	{
		bin[i++] = decimal % 2; //�������� �������� ������ �����, � ��������� ��� � ������
		decimal /= 2;            //������� ���������� �������� ������ �� ��������� �����
	}
	for (i--; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " "; //��������� ��������� �� ����� � �������;
	}
#endif
#define HEXADECIMAL
#ifdef HEXADECIMAL
	int decimal;
	cout << "������� �����: "; cin >> decimal;
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