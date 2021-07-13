#include<iostream>
using namespace std;

//#define RANDOM_UNIQUE

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
#ifdef RANDOM_UNIQUE
	for (int i = 0; i < n; i++)
	{
	a: arr[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == arr[i]) goto a;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
#endif // RANDOM_UNIQUE


	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] == arr[j]) cout << arr[i] << "\t";
		}
	}
	//cout << endl;
}