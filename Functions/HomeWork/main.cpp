#include<iostream>

using namespace std;

//Олег, я сдаюсь код упал на сортировке двумерного массива и я не знаю почему это произошло.
//Так же не сделал shift... 
// В целом домашка далека от идеала :(


const int ROWS = 8;
const int COLS = 5;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int m, const int n);
void FillRand(double arr[ROWS][COLS], const int m, const int n);
void FillRand(char arr[ROWS][COLS], const int m, const int n);
void FillRand(float arr[ROWS][COLS], const int m, const int n);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int m, const int n);

template<typename T>void Sort(T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], const int m, const int n);

template<typename T>T Sum(T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int m, const int n);

template<typename T>double Avg(T arr[], const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int m, const int n);

template<typename T>T minValueIn(T arr[], const int n);
template<typename T>T maxValueIn(T arr[], const int n);

template<typename T>T minValueIn(T arr[ROWS][COLS], const int m, const int n);
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int m, const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива типа int: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое : " << Avg(arr, n) << endl;
	cout << "Минимальное значение : " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение : " << maxValueIn(arr, n) << endl;
	cout << "Отсортированный массив  :\n";
	Sort(arr, n);
	Print(arr, n);


	cout << "одномерный массив типа double: \n";
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "Сумма элементов массива: " << Sum(brr, n) << endl;
	cout << "Среднее арифметическое : " << Avg(brr, n) << endl;
	cout << "минимальное значение: " << minValueIn(brr, n) << endl;
	cout << "максимальное значение: " << maxValueIn(brr, n) << endl;
	cout << "Отсортированный массив  :\n";
	Sort(brr, n);
	Print(brr, n);


	cout << "одномерный массив типа char: \n";
	char crr[n];
	FillRand(crr, n);
	Print(crr, n);
	cout << "Сумма элементов массива: " << Sum(crr, n) << endl;
	cout << "Среднее арифметическое : " << Avg(crr, n) << endl;

	cout << "одномерный массив типа float: \n";
	float frr[n];
	FillRand(frr, n);
	Print(frr, n);
	cout << "Минимальное значение: " << minValueIn(frr, n) << endl;
	cout << "Максимальное значение: " << maxValueIn(frr, n) << endl;
	cout << "Сумма элементов массива: " << Sum(frr, n) << endl;
	cout << "Среднее арифметическое : " << Avg(frr, n) << endl;


	cout << "двумерный массив типа int: \n";
	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое : " << Avg(arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr2, ROWS, COLS) << endl;
	cout << "Сортировка массива: \n";
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);


	cout << "двумерный масив типа double:\n";
	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(brr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое : " << Avg(brr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr2, ROWS, COLS) << endl;


	cout << "двумерный масив типа char:\n";
	char crr2[ROWS][COLS];
	FillRand(crr2, ROWS, COLS);
	Print(crr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(crr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое : " << Avg(crr2, ROWS, COLS) << endl;


	cout << "двумерный масив типа float:\n";
	float frr2[ROWS][COLS];
	FillRand(frr2, ROWS, COLS);
	Print(frr2, ROWS, COLS);
	cout << "Минимальное значение в массиве: " << minValueIn(frr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(frr2, ROWS, COLS) << endl;
	cout << "Сумма элементов: " << Sum(frr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое: " << Avg(frr2, ROWS, COLS) << endl;
	cout << "Отсортированный float:\n";
	Sort(frr2, ROWS, COLS);
	Print(frr2, ROWS, COLS);
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = maxRand;
		maxRand = minRand;
		minRand = buffer;
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = maxRand;
		maxRand = minRand;
		minRand = buffer;
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 10;
	}
}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = maxRand;
		maxRand = minRand;
		minRand = buffer;
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(float arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = maxRand;
		maxRand = minRand;
		minRand = buffer;
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 10;
	}
}
void FillRand(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = double(rand() % 10000) / 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(float arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = float(rand() % 10000) / 100;
		}
	}
}

template<typename T>void Print(T arr[], const int n)
{


	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>void Print(T arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

template<typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>void Sort(T arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = i; k < m; k++)
			{
				/*int l;
				if (k == i)l = j + 1;
				else l = 0;*/
				for (int l = k == i ? j + 1 : 0; l < n; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

template<typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>T Sum(T arr[ROWS][COLS], const int m, const int n)
{
	T sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template<typename T>double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>double Avg(T arr[ROWS][COLS], const int m, const int n)
{
	return (double)Sum(arr, m, n) / (m * n);
}

template<typename T>T minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T>T maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T>T minValueIn(T arr[ROWS][COLS], const int m, const int n)
{
	T min = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int m, const int n)
{
	T max = arr[0][0];
	for (int i = 0; i < m; i++)
	{


		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}