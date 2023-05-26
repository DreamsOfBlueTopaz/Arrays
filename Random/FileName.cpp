#include<iostream>
using namespace std;
#define tab "\t"

void main()

{
	setlocale(LC_ALL, "");
//#define SORTING_1
#ifdef SORTING_1

	const int n = 5;
	int arr[n];
	int minRand;
	int maxRand;
	/*do
	{
		cout << "Введите минимально возможное случайное число: "; cin >> minRand;
		cout << "Введите максимально возможное случайное число: "; cin >> maxRand;
		if (maxRand <= minRand)
		{
			cout << "Error: Нулевой диапазон" << endl;
			system("PAUSE");
			system("CLS");
		}
	} while (maxRand <= minRand);*/
	cout << "Введите минимально возможное случайное число: "; cin >> minRand;
	cout << "Введите максимально возможное случайное число: "; cin >> maxRand;
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (maxRand - minRand<10)
	{
		maxRand =minRand+ 10;
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif
	
//#define SORTING_2
#ifdef SORTING_2
	const int n = 5;
	int arr[n];
	int minRand;
	int maxRand;
	cout << "Введите минимальное значение: "; cin >> minRand;
	cout << "введите максимальное значение: "; cin >> maxRand;
	
	for (int i = 0; i < n; i++)//заполняем массив случайными числами в заданном диапазоне
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	for (int i = 0; i <n; i++)//сортировка
	{
		for (int j = 0; j <n-(i+1); j++)//но почему не работает на диапазоне от i+1 до n?
		{
			if (arr[j + 1] < arr[j])
			{
				int buffer = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	for (int i = 0; i < n; i++)//выводим отсортированный массив
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif
//#define UNIQUE
#ifdef UNIQUE
	const int n = 7;
	int arr[n];
	int minRand = 70;
	int maxRand = 80;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;         //задаем диапазон
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] == arr[i])
			{
				arr[i] = rand() % (maxRand - minRand) + minRand; //запись нового рандомного числа в диапазоне

				j = 0; i = 0;                                    //необходимо начать заново
			}
		}
	}
	for (int i = 0; i < n; i++)                                 //вывод массива
	{
		cout << arr[i] << tab;
	}
#endif
#define REPEATS
#ifdef REPEATS
	const int n = 10;
	int arr[n];
	int minRand = 0;
	int maxRand = 5;
	for (int i = 0; i < n; i++) //диапазон
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	cout << "Массив случайных чисел: " << endl;
	for (int i = 0; i < n; i++)//вывод массива
	{
		cout  << arr[i] << tab;
	}
	cout << endl;
	for (int i = 0; i < n; i++)//сортировка при необходимости
	{
		for (int j = i + 1; j < n; j++)
		{
			int buffer = 0;
			if (arr[i] > arr[j])
			{
				buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}

		}
	}
	for (int i = 0; i < n; i++)//вывод отсортированного масива
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	for (int i = 0; i < n; i++)//поиск дублей и их количества
	{
		for (int j = i+1; j < n; j++)
		{
			int counts = 0;    //считает повторы
			if (arr[i]==arr[j])
				{
					counts++;
					cout << endl << "Повторяющееся число: " << arr[i] << tab << "Количество повторов " << counts;
					break;
				}
				
		}
	}
#endif
}