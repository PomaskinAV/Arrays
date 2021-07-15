#include<iostream>
using namespace std;

//#define DZ

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
#ifdef DZ
	int min, max;
	cout << "¬ведите минимальное значение в массиве: "; cin >> min;
	cout << "¬ведите максимальное значение в массиве: "; cin >> max;
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
		cout << "¬ведите минимальное значение в массиве: "; cin >> minRand;
		cout << "¬ведите максимальное значение в массиве: "; cin >> maxRand;
		if (minRand >= maxRand) cout << "Ѕудь внимательнее лошара" << endl;
	} while (minRand>=maxRand);
	int arr[n];
for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand)+minRand;
	}
cout << endl;

//—ортировка массива
for (int i = 0; i < n; i++) // —четчик i выбирает элемент в который нужно поместить минимальное значение
{
	for (int j = i + 1; j < n; j++)
	{
		//arr[i] - выбранный элемент
		//arr[j] - перебираемый элемент
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