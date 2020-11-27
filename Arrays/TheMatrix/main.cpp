#include<iostream>
#include<ctime>
using namespace std;

#define delimiter "\n--------------------------------------------\n"

//#define MUL_1
#define MUL_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef MUL_1
	const int m = 2;
	const int n = 3;
	int A[m][n];
	int B[n][m];
	int C[m][m]{};	//Результат сложения матриц A и B.

	//Заполняем наши матрицы:
	//srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			B[i][j] = rand() % 10;
		}
	}

	//Сложение матриц:
	/*for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}*/
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < n; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
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
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}

	cout << delimiter << endl;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << C[i][j] << "\t";
		}
		cout << endl;
	}
#endif // MUL_1

	const int m = 3;
	const int n = 5;
	const int n2 = 4;
	int A[m][n];
	int B[n][n2];
	int C[m][n2]{};	//Результат сложения матриц A и B.

	//Заполняем наши матрицы:
	//srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			B[i][j] = rand() % 10;
		}
	}

	//Сложение матриц:
	/*for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}*/
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			for (int k = 0; k < n; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
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
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}

	cout << delimiter << endl;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			cout << C[i][j] << "\t";
		}
		cout << endl;
	}
}