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
		cout << "������� ���������� ��������� ��������� �����: "; cin >> minRand;
		cout << "������� ����������� ��������� ��������� �����: "; cin >> maxRand;
		if (maxRand <= minRand)
		{
			cout << "Error: ������� ��������" << endl;
			system("PAUSE");
			system("CLS");
		}
	} while (maxRand <= minRand);*/
	cout << "������� ���������� ��������� ��������� �����: "; cin >> minRand;
	cout << "������� ����������� ��������� ��������� �����: "; cin >> maxRand;
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
	cout << "������� ����������� ��������: "; cin >> minRand;
	cout << "������� ������������ ��������: "; cin >> maxRand;
	
	for (int i = 0; i < n; i++)//��������� ������ ���������� ������� � �������� ���������
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	for (int i = 0; i <n; i++)//����������
	{
		for (int j = 0; j <n-(i+1); j++)//�� ������ �� �������� �� ��������� �� i+1 �� n?
		{
			if (arr[j + 1] < arr[j])
			{
				int buffer = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	for (int i = 0; i < n; i++)//������� ��������������� ������
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif
	
}