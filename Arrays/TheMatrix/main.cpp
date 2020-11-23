#include<iostream>
using namespace std;

#define delimiter "\n--------------------------------------------\n"

void main()
{
	setlocale(LC_ALL, "");
	const int m = 3;
	const int n = 3;
	int A[m][n];
	int B[m][n];
	int C[m][n]{};	//Результат сложения матриц A и B.
	
	//Заполняем наши матрицы:
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = rand() % 10;
		}
	}

	//Сложение матриц:
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	//Вывод матриц на экран:
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
	cout << delimiter << endl;;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}

	cout << delimiter << endl;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << C[i][j] << "\t";
		}
		cout << endl;
	}
}