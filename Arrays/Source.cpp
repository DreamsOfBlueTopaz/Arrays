//Arrays
#include<iostream>
using namespace std;

void main()
{

	setlocale(LC_ALL, "");

	/*const int SIZE = 5;
	int arr[SIZE];
	arr[2] = 123;
	cout << arr[2]  << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr [i] << "\t";
	}
	cout << endl;*/
	const int SIZE = 5;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)              //������ � ����������
	{
		int n;
		cout << "\t" << "������� �������  " << i << "\t"; cin >> n;
		arr[i] = n;
	}
	cout << endl << endl;
	for (int i = 0; i < SIZE; i++)              //����� ��������� ������������� �� 0 �� ����������
	{
		cout << "\t" << arr[i] << "\t";
	}
	cout << endl << endl;
	for (int i = SIZE - 1; i >= 0; i--)         //����� ��������� ������������� �� ���������� �� 0
	{
		cout << "\t" << arr[i] << "\t";
	}
	cout << endl << endl;
	int Summa = arr[0];                         //����� ����� ��������� �������
	for (int i = 0; i < SIZE; i++)
	{
		Summa = Summa + arr[i];
	}
	cout << "����� ��������� ������� = " << Summa;
	cout << endl;
	cout << endl;
	int Sredne_Arifmeticheskoe = Summa / SIZE;  //����� ������-��������������� ��������� �������
	cout << "�������-�������������� ��������� ������� = " << Sredne_Arifmeticheskoe;
	cout << endl << endl;
	int Max = arr[0];                            //������������ �������� � �������;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > Max)
		{
			Max = arr[i];
			
		}
	}
	cout << "������������ �������� � ������� = " << Max;
	cout << endl << endl;
	int Min = arr[0];                             //����������� �������� � �������;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < Min)
		{
			Min = arr[i];

		}
	}
	cout << "����������� �������� � ������� = " << Min;
	cout << endl;
}