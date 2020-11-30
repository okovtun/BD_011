#include<iostream>
using namespace std;

void FillRand(int arr[], const int n, int minRand=0, int maxRand = 100);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n, 1000, 2000);
	Print(arr, n);
	cout << sizeof(arr) << endl;

	const int m = 10;
	int brr[m];
	FillRand(brr, m, 80);
	Print(brr, m);

	const int SIZE_C = 12;
	int crr[SIZE_C];
	FillRand(crr, SIZE_C);
	Print(crr, SIZE_C);
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = maxRand;
		maxRand = minRand;
		minRand = buffer;
	}
	//Заполнение случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void Print(int arr[], const int n)
{
	//Вывод на экран:
	cout << sizeof(arr) << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}