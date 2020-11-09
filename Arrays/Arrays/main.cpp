#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	cout << "Введите значения элементов массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Вывод массива на экран в обратном порядке:
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Сумма элементов массива:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее арифметическое элементов массива: " << (double)sum / n << endl;

	//Среднее арифметическое ненулевых элементов: 
	int number_of_nulls = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)number_of_nulls++;
	}
	cout << "Среднее арифметическое ненулевых элементов: " << (double)sum / (n - number_of_nulls) << endl;

	//Поиск минимального и максимального значения в массиве:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
}

/*
-------------------------
Массив (Array) - это набор переменных одного типа, 
в непрерывной области памяти.

Статические и динамические.

			
			type name[SIZE];
			identiter - это имя.
SIZE (размер) - 



-------------------------
*/