#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);
void Sum(int arr[], const int n);
void Avg(int arr[], const int n);
void MinMax(int arr[], const int n);
void Shift(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	Sum(arr, n);
	Avg(arr, n);
	MinMax(arr, n);
	Shift(arr, n);
	Print(arr, n);

	cout << endl;

	///////////////////////////
	const int b_size = 8;
	int brr[b_size];
	FillRand(brr, b_size);
	Print(brr, b_size);
	Sort(brr, b_size);
	Print(brr, b_size);
	Sum(brr, b_size);
	Avg(brr, b_size);
	MinMax(brr, b_size);
	Shift(brr, b_size);
	Print(brr, b_size);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sum(int arr[], const int n)
{
	double summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	cout << "Сумма всех элементов в массиве: " << summ << endl;
}
void Avg(int arr[], const int n)
{
	double summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	cout << "Cреднее арифметическое значение элементов в массиве: " << summ / n << endl;
}
void MinMax(int arr[], const int n)
{
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
}
void Shift(int arr[], const int n)
{
	int number_of_shifts;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	char direction; // Направление сдвига
	cout << "Выберите направление (l-left, r-right): "; cin >> direction;
	if (direction == 'r')number_of_shifts = n - number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}