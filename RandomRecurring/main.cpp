#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	/*const int n = 10;
	int arr[n];
	int cnt;
	for (int i = 0; i < n; i++)
	{
		arr[i] =1+ rand() % n;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != n)
		{
			cnt = 1;
			for (int j = i+1; j < n; j++)
			{
				if (arr[i] == arr[j])
				{
					arr[j] = n;
					cnt++;
				}
			}
		}
		if (cnt >= 2)
		{
			cout << arr[i] << " : " << cnt << endl;
		}
	}
	cout << endl;*/

	const int n = 10;
	int arr[n];
	int cnt;
	for (int i = 0; i < n; i++)
	{
		arr[i] =rand() % n;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cnt = 1;
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				cnt++;
			}
		}
		if (cnt >= 2)
		{
			cout << arr[i] << " : " << cnt << endl;
		}
	}
}