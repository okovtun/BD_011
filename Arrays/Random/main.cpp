#include<iostream>
#include<time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	//srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%10;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < n; i++)//—четчик 'i' выбирает элемент, в который нужно поместить минимальное значение.
	{
		for (int j = i+1; j < n; j++)
		{
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}