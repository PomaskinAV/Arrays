#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int ROWS = 10; // ���������� �����
	const int COLS = 5; // ���������� ��������� ������ (���������)
	int arr[ROWS][COLS];
	double summ = 0;
	int min, max;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
			summ += arr[i][j];
		}
	}
	min = max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j ++)
		{
			if (arr[i][j] < min) min = arr[i][j];
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "����� ��������� �������:" << summ << endl;
	cout << "������� �������������� �������� ��������� �������: " << summ/(ROWS*COLS) << endl;
	cout << "����������� �������� �������� � �������: " << min << endl;
	cout << "������������ �������� �������� � �������: " << max << endl;
	cout << endl;

	for(int m=0; m<(ROWS*COLS-1); m++)
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (i == ROWS - 1 && j == COLS - 1)
				{
					continue;
				}
				if (arr[i][j] > arr[i][j + 1])
				{
					int buffer = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = buffer;
				}
			}
		}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}