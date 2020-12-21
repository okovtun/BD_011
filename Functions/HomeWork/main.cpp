#include"Functions.h"
#include"Functions.cpp"

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
