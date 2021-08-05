#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"

//#define HOME_WORK

void main()
{
	setlocale(LC_ALL, "");
#ifdef HOME_WORK
	cout << "Int: " << endl;
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
	Shift(arr, n);
	Print(arr, n);

	cout << endl;

	cout << "Double: " << endl;
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

	cout << "Short: " << endl;
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

	cout << "Float: " << endl;
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

	cout << "Char: " << endl;
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

	cout << "Int:" << endl;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	cout << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма всех элементов в массиве: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << endl;

	cout << "Double:" << endl;
	double i_arr_3[ROWS][COLS];
	FillRand(i_arr_3, ROWS, COLS);
	Print(i_arr_3, ROWS, COLS);
	Sort(i_arr_3, ROWS, COLS);
	cout << endl;
	Print(i_arr_3, ROWS, COLS);
	cout << "Сумма всех элементов в массиве: " << Sum(i_arr_3, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_3, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(i_arr_3, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(i_arr_3, ROWS, COLS) << endl;
	cout << endl;

	cout << "Short:" << endl;
	short i_arr_4[ROWS][COLS];
	FillRand(i_arr_4, ROWS, COLS);
	Print(i_arr_4, ROWS, COLS);
	Sort(i_arr_4, ROWS, COLS);
	cout << endl;
	Print(i_arr_4, ROWS, COLS);
	cout << "Сумма всех элементов в массиве: " << Sum(i_arr_4, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_4, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(i_arr_4, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(i_arr_4, ROWS, COLS) << endl;
	cout << endl;

	cout << "Float:" << endl;
	float i_arr_5[ROWS][COLS];
	FillRand(i_arr_5, ROWS, COLS);
	Print(i_arr_5, ROWS, COLS);
	Sort(i_arr_5, ROWS, COLS);
	cout << endl;
	Print(i_arr_5, ROWS, COLS);
	cout << "Сумма всех элементов в массиве: " << Sum(i_arr_5, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_5, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(i_arr_5, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(i_arr_5, ROWS, COLS) << endl;
	cout << endl;

	cout << "Char:" << endl;
	char i_arr_6[ROWS][COLS];
	FillRand(i_arr_6, ROWS, COLS);
	Print(i_arr_6, ROWS, COLS);
	Sort(i_arr_6, ROWS, COLS);
	cout << endl;
	Print(i_arr_6, ROWS, COLS);
	cout << "Сумма всех элементов в массиве: " << Sum(i_arr_6, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_6, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(i_arr_6, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(i_arr_6, ROWS, COLS) << endl;
	cout << endl;
}
