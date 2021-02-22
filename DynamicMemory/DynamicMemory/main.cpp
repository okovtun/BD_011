#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include"Arrays.h"
#include"Arrays.cpp"
#include"Memory.h"
#include"Memory.cpp"
#include"Print.h"
#include"Print.cpp"
#include"Random.h"
#include"Random.cpp"

//#define DEBUG_ASSERTION_FAILED_1
//#define DEBUG_ASSERTION_FAILED_2

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

typedef double DataType;

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef DEBUG_ASSERTION_FAILED_1
	int a = 2;
	int* pa = &a;
	delete pa;
#endif

#ifdef DYNAMIC_MEMORY_1
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];

	FillRand(arr, n);
	Print(arr, n);

	int value;
	/*cout << "Введите добавляемое значение: "; cin >> value;
	push_back_mutable(arr, n, value);
	Print(arr, n);

	cout << "Введите добавляемое значение: "; cin >> value;
	push_front_mutable(arr, n, value);
	Print(arr, n);*/

	int index;
	cout << "Введите добавляемое значение: "; cin >> value;
	cout << "Введите индекс: "; cin >> index;
	insert(arr, n, value, index);
	Print(arr, n);

	pop_back(arr, n);
	Print(arr, n);

	pop_front(arr, n);
	Print(arr, n);


#ifdef DEBUG_ASSERTION_FAILED_2
	int* buffer = arr;
	delete[] buffer;
#endif // DEBUG_ASSERTION_FAILED_2

	delete[] arr;
#endif // DYNAMIC_MEMORY_1

	int m;	//Количство строк
	int n;	//Количество столбцов (элементов строки)
	cout << "Введите количество строк: "; cin >> m;
	cout << "Введите количество элементов строки: "; cin >> n;
	DataType** arr = Allocate<DataType>(m, n);

	//3) Работа с двумерным динамическим массивом:
	FillRand(arr, m, n);
	Print(arr, m, n);
	cout << "Добавляем строку в конец:\n";
	push_row_back(arr, m, n);
	FillRand(arr[m - 1], n, 0, 100);
	Print(arr, m, n);
	cout << "Добавляем строку в начало:\n";
	push_row_front(arr, m, n);
	arr[0][3] = 123;
	Print(arr, m, n);

	int index;
	cout << "Введите индекс добавляемой строки: "; cin >> index;
	insert_row(arr, m, n, index);
	Print(arr, m, n);

	cout << "Добавление столбца в конец массива:\n";
	push_col_back(arr, m, n);
	Print(arr, m, n);
	
	cout << "Добавление столбца в начало массива:\n";
	push_col_front(arr, m, n);
	Print(arr, m, n);

	cout << "Введите индекс добавляемого столбца: "; cin >> index;
	insert_col(arr, m, n, index);
	Print(arr, m, n);

	cout << "Удаление последней строки:\n";
	pop_row_back(arr, m, n);
	Print(arr, m, n);

	cout << "Удаление нулевой строки:\n";
	pop_row_front(arr, m, n);
	Print(arr, m, n);

	Clear(arr, m);
}