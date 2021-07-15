#include<iostream>
using namespace std;

//#define DZ

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
#ifdef DZ
	int min, max;
	cout << "������� ����������� �������� � �������: "; cin >> min;
	cout << "������� ������������ �������� � �������: "; cin >> max;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = min + rand() % (max - min);
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // DZ

	int minRand, maxRand;
	do
	{
		cout << "������� ����������� �������� � �������: "; cin >> minRand;
		cout << "������� ������������ �������� � �������: "; cin >> maxRand;
		if (minRand >= maxRand) cout << "���� ������������ ������" << endl;
	} while (minRand>=maxRand);
	int arr[n];
for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand)+minRand;
	}
cout << endl;

//���������� �������
for (int i = 0; i < n; i++) // ������� i �������� ������� � ������� ����� ��������� ����������� ��������
{
	for (int j = i + 1; j < n; j++)
	{
		//arr[i] - ��������� �������
		//arr[j] - ������������ �������
		if (arr[j] < arr[i])
		{
			int buffer = arr[i];
			arr[i] = arr[j];
			arr[j] = buffer;
		}
	}
}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}