#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"

//void Shift(int arr[], const int n);

#define HOME_WORK

void main()
{
	setlocale(LC_ALL, "");
#ifdef HOME_WORK
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма всех элементов в массиве: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endl;
	/*Shift(arr, n);
	Print(arr, n);*/

	cout << endl;

	///////////////////////////
	const int b_size = 8;
	double brr[b_size];
	FillRand(brr, b_size);
	Print(brr, b_size);
	Sort(brr, b_size);
	Print(brr, b_size);
	cout << "Сумма всех элементов в массиве: " << Sum(brr, b_size) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, b_size) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(brr, b_size) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(brr, b_size) << endl;
	/*Shift(brr, b_size);
	Print(brr, b_size);*/

	cout << endl;

	const int c_size = 8;
	short crr[c_size];
	FillRand(crr, c_size);
	Print(crr, c_size);
	Sort(crr, c_size);
	Print(crr, c_size);
	cout << "Сумма всех элементов в массиве: " << Sum(crr, c_size) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(crr, c_size) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(crr, c_size) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(crr, c_size) << endl;

	cout << endl;

	const int d_size = 8;
	float drr[d_size];
	FillRand(drr, d_size);
	Print(drr, d_size);
	Sort(drr, d_size);
	Print(drr, d_size);
	cout << "Сумма всех элементов в массиве: " << Sum(drr, d_size) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(drr, d_size) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(drr, d_size) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(drr, d_size) << endl;

	cout << endl;

	const int e_size = 8;
	char err[e_size];
	FillRand(err, e_size);
	Print(err, e_size);
	Sort(err, e_size);
	Print(err, e_size);
	cout << "Сумма всех элементов в массиве: " << Sum(err, e_size) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(err, e_size) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(err, e_size) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(err, e_size) << endl;

	cout << endl;
#endif // HOME_WORK

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
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