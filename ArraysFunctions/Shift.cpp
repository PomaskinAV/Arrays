#include"Shift.h"
void Shift(int arr[], const int n)
{
	int number_of_shifts;
	cout << "������� ���������� ������� �����: "; cin >> number_of_shifts;
	char direction; // ����������� ������
	cout << "�������� ����������� (l-left, r-right): "; cin >> direction;
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