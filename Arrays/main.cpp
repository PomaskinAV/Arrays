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

	cout << "������� �������� ���������: ";
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
	cout << "����� ���� ��������� � �������: " << summ << endl;
	cout << "C������ �������������� �������� ��������� � �������: " << summ1 << endl;
	cout << "������������ �������� � �������: " << max << endl;
	cout << "����������� �������� � �������: " << min << endl;
}