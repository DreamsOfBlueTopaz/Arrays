#include<iostream>
using namespace std;
#define tab "\t"

void main()

{
	setlocale(LC_ALL, "");
//#define LESSON
#ifdef LESSON

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
	
#define SORTING_1
#ifdef SORTING_1
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
	
}