#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int SIZE = 5;
	int arr[SIZE] = {};
	double summ = 0;
	double summ1 = 0;
	int max = arr[0], min = arr[0];

	cout << "Введите значения элементов: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
		cout << arr[i] << tab;
		summ += arr[i];
		summ1 = summ / SIZE;
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	cout << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	cout << "Сумма всех элементов в массиве: " << summ << endl;
	cout << "Cреднее арифметическое значение элементов в массиве: " << summ1 << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
	cout << "Минемальное значение в массиве: " << min << endl;
}