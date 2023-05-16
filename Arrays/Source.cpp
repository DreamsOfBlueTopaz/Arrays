//Arrays
#include<iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "");
#define ARRAYS
#ifdef ARRAYS
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
	for (int i = 0; i < SIZE; i++)              //запись с клавиатуры
	{
		int n;
		cout << "\t" << "Введите элемент  " << i << "\t"; cin >> arr[i];
		//arr[i] = n;
	}
	cout << endl << endl;
	for (int i = 0; i < SIZE; i++)              //вывод элементов горизонтально от 0 до последнего
	{
		cout << "\t" << arr[i] << "\t";
	}
	cout << endl << endl;
	for (int i = SIZE - 1; i >= 0; i--)         //вывод элементов горизонтально от последнего до 0
	{
		cout << "\t" << arr[i] << "\t";
	}
	cout << endl << endl;
	int Summa = 0;                         //вывод сумму элементов массива
	for (int i = 0; i < SIZE; i++)
	{
		Summa += arr[i];
		//Summa = Summa + arr[i];
	}
	cout << "Сумма элементов массива = " << Summa;
	cout << endl;
	cout << endl;
	double Sredne_Arifmeticheskoe = (double)Summa / SIZE;  //вывод средне-арифметического элементов массива
	cout << "Среднее-арифметическое элементов массива = " << Sredne_Arifmeticheskoe;
	cout << endl << endl;
	int Max = arr[0];                            //максимальное значение в массиве;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > Max)
		{
			Max = arr[i];

		}
	}
	cout << "Максимальное значение в массиве = " << Max;
	cout << endl << endl;
	int Min = arr[0];                             //минимальное значение в массиве;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < Min)
		{
			Min = arr[i];
		}
	}
	cout << "Минимальное значение в массиве = " << Min;
	cout << endl;
#endif
}