#include<iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 8;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(short arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(short arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(short arr[], const int n);
void Sort(float arr[], const int n);
void Sort(char arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
short Sum(short arr[], const int n);
float Sum(float arr[], const int n);
int Sum(char arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(short arr[], const int n);
float Avg(float arr[], const int n);
double Avg(char arr[], const int n);

int MinValueIn(int arr[], const int n);
double MinValueIn(double arr[], const int n);
short MinValueIn(short arr[], const int n);
float MinValueIn(float arr[], const int n);
int MinValueIn(char arr[], const int n);

int MaxValueIn(int arr[], const int n);
double MaxValueIn(double arr[], const int n);
short MaxValueIn(short arr[], const int n);
float MaxValueIn(float arr[], const int n);
int MaxValueIn(char arr[], const int n);

//void Shift(int arr[], const int n);

//#define HOME_WORK

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

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 100)/10;
	}
}
void FillRand(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 100) / 10;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
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
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << (int)arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
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
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				short buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], const int n)
{
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return summ;
}
double Sum(double arr[], const int n)
{
	double summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return summ;
}
short Sum(short arr[], const int n)
{
	short summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return summ;
}
float Sum(float arr[], const int n)
{
	float summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return summ;
}
int Sum(char arr[], const int n)
{
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return summ;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(short arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
float Avg(float arr[], const int n)
{
	return (float)Sum(arr, n) / n;
}
double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int MinValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
double MinValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
short MinValueIn(short arr[], const int n)
{
	short min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
float MinValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int MinValueIn(char arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

int MaxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
double MaxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
short MaxValueIn(short arr[], const int n)
{
	short max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
float MaxValueIn(float arr[], const int n)
{
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
int MaxValueIn(char arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
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