#include<iostream>
using namespace std;

//#define BINARY
#define HEXADECIMAL

void main()
{
	setlocale(LC_ALL, "");
	// dec Decimal (���������� ������� ���������)
	// bin Binary (�������� ������� ���������)
#ifdef BINARY
	unsigned long long int decimal; // ���������� ����� ��������� � ����������
	cout << "������� ���������� �����: "; cin >> decimal;
	const int n = 64; // ������������ ����������� ��������� �����
	bool bin[n] = {}; // ���� ������ ����� ������� ������� ��������� �����
	int i = 0;
	while (decimal)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		i++; // ��������� �� ��������� ������� �������
	}
	//for (; decimal; decimal /= 2, i++) bin[i] = decimal % 2;
	for (i--; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << "  ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
#endif // BINARY

#ifdef HEXADECIMAL
	int decimal; // ���������� ����� ��������� � ����������
	cout << "������� ���������� �����: "; cin >> decimal;
	const int n = 16;
	int hex[n] = {};
	int i = 0;
	/*while (decimal)
	{
		hex[i] = decimal % 16;
		decimal /= 16;
		i++;
	}*/
	for (; decimal; decimal /= 16, i++) hex[i] = decimal % 16;
	for (i--; i >= 0; i--)
	{
		switch (hex[i])
		{
		case (10): cout << "A"; break;
		case (11): cout << "B"; break;
		case (12): cout << "C"; break;
		case (13): cout << "D"; break;
		case (14): cout << "E"; break;
		case (15): cout << "F"; break;
		default: cout << hex[i];
		}
	}
	cout << endl;
#endif // HEXADECIMAL

}