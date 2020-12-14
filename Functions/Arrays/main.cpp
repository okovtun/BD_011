#include"Functions.h"

#define delimiter "\n-----------------------------------------------\n"

void main()
{
	//cout << FillRand << endl;
	setlocale(LC_ALL, "");
	const int n = 15;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое : " << Avg(arr, n) << endl;
	cout << "Минимальное знение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное знение в массиве: " << maxValueIn(arr, n) << endl;
	cout << "Отсортированный массив:\n";
	Sort(arr, n);
	Print(arr, n);
	cout << delimiter << endl;

	cout << "Одномерный массив типа double: \n";
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "Сумма элементов массива: " << Sum(brr, n) << endl;
	cout << "Среднее арифметическое : " << Avg(brr, n) << endl;
	cout << "Минимальное знение в массиве: " << minValueIn(brr, n) << endl;
	cout << "Максимальное знение в массиве: " << maxValueIn(brr, n) << endl;
	cout << "Отсортированный массив:\n";
	Sort(brr, n);
	Print(brr, n);
	cout << delimiter << endl;

	cout << "Двумерный массив типа int: \n";
	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое : " << Avg(arr2, ROWS, COLS) << endl;
	cout << delimiter << endl;

	cout << "Двумерный массив типа double:\n";
	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);

#ifdef DEBUG
	FillRand(arr, n, 1000, 2000);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое:  " << Avg(arr, n) << endl;
	cout << "Миниамльное занчение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное занчение в массиве: " << maxValueIn(arr, n) << endl;
	//cout << sizeof(arr) << endl;

	const int m = 10;
	int brr[m];
	FillRand(brr, m, 80);
	Print(brr, m);
	cout << "Сумма элементов массива: " << Sum(brr, m) << endl;
	cout << "Среднее арифметическое:  " << Avg(brr, m) << endl;
	cout << "Миниамльное занчение в массиве: " << minValueIn(brr, m) << endl;
	cout << "Максимальное занчение в массиве: " << maxValueIn(brr, m) << endl;

	const int SIZE_C = 12;
	int crr[SIZE_C];
	FillRand(crr, SIZE_C);
	Print(crr, SIZE_C);
	cout << "Сумма элементов массива: " << Sum(crr, SIZE_C) << endl;
	cout << "Среднее арифметическое:  " << Avg(crr, SIZE_C) << endl;
	cout << "Миниамльное занчение в массиве: " << minValueIn(crr, SIZE_C) << endl;
	cout << "Максимальное занчение в массиве: " << maxValueIn(crr, SIZE_C) << endl;
#endif // DEBUG


}

