#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int SIZE = 5;
	int arr[SIZE];
	double summ = 0;
	int max, min;
	cout << "������� �������� ���������: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
		cout << arr[i] << tab;
		summ += arr[i];
	}
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	cout << "����� ���� ��������� � �������: " << summ << endl;
	cout << "C������ �������������� �������� ��������� � �������: " << summ/SIZE << endl;
	cout << "������������ �������� � �������: " << max << endl;
	cout << "����������� �������� � �������: " << min << endl;
}