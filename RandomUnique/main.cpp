#include<iostream>
using namespace std;

//#define RANDOM_UNIQUE1
#define RANDOM_UNIQUE2

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef RANDOM_UNIQUE1
	const int n = 10;
	int arr[n];
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
#endif // RANDOM_UNIQUE1


#ifdef RANDOM_UNIQUE2
	const int n = 10;
	int arr[n];
	int a = 0;
	int i = 0;

	while (i<n)
	{
		a = rand()%10;
		for (int j = 0; j <= i; ++j)
		{
			if (arr[j] == a)
				break;
			else if (j == i)
			{
				++i;
				arr[j] = a;
				cout << arr[j] << "\t";
				break;
			}
		}
	}
#endif // RANDOM_UNIQUE2

}