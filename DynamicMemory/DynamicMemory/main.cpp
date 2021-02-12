#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int** Allocate(const int m, const int n);
void Clear(int** arr, const int m);

void FillRand(int arr[], const int n, int maxRand = 100, int minRand = 0);
void FillRand(int** arr, const int m, const int n);
void Print(int arr[], const int n);
void Print(int** arr, const int m, const int n);

void push_back(int*& arr, int& n, int value);
void push_front(int*& arr, int& n, int value);
void insert(int*& arr, int& n, int value, int index);

void push_row_back(int**& arr, int& m, const int n);
void push_row_front(int**& arr, int& m, const int n);
void insert_row(int**& arr, int& m, const int n, int index);
void push_col_back(int** arr, const int m, int& n);

void pop_back(int*& arr, int& n);
void pop_front(int*& arr, int& n);

//#define DEBUG_ASSERTION_FAILED_1
//#define DEBUG_ASSERTION_FAILED_2

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

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
	int** arr = Allocate(m, n);

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
	Clear(arr, m);
}

int** Allocate(const int m, const int n)
{
	//1) Создаем массив указателей:
	int** arr = new int*[m];
	//2) Выделяем память для строк двумерного динамического массива:
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
	}
	return arr;
}
void Clear(int ** arr, const int m)
{
	//4) Удаление двумерного динамического массива:
	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

void FillRand(int arr[], const int n, int maxRand, int minRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(int ** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int ** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void push_back(int*& arr, int& n, int value)
{
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++;
}
void push_front(int*& arr, int& n, int value)
{
	//1. Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1]{};
	//2. Копируем значения из исходного массива в буферный со смещением на 1 элемент:
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	//3. Удаляем исходный массив:
	delete[] arr;
	//4. Подменяем указатель на адрес нового массива:
	arr = buffer;
	//5. Добавляем значение в начало массива:
	arr[0] = value;
	//6. Увеличиваем размер массива:
	n++;
}
void insert(int*& arr, int& n, int value, int index)
{
	if (index >= n)return;
	int* buffer = new int[n + 1];
	/*for (int i = 0; i < index; i++)
	{
		buffer[i] = arr[i];
	}
	for (int i = index; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}*/
	for (int i = 0; i < n; i++)
	{
		//if (i < index)buffer[i] = arr[i]; else buffer[i + 1] = arr[i];
		//(i < index) ? buffer[i] = arr[i] : buffer[i + 1] = arr[i];
		(i < index ? buffer[i] : buffer[i + 1]) = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[index] = value;
	n++;
}

void push_row_back(int **& arr, int & m, const int n)
{
	//1) Создаем буферный массив указателей:
	int** buffer = new int*[m + 1];
	//2) Копируем адреса строк исходного массива в буферный массив указателей:
	for (int i = 0; i < m; i++)
	{
		buffer[i] = arr[i];
	}
	//3) Удаляем исходный массив указателей:
	delete[] arr;
	//4) Говорим что buffer - это наш новый массив:
	arr = buffer;
	//5) Теперь в нашем массиве есть место для добавления еще одной строки:
	buffer[m] = new int[n] {};
	//6) После добавления строки в массив, количество его строк увеличивается на одну:
	m++;
}

void push_row_front(int**& arr, int & m, const int n)
{
	int** buffer = new int*[m + 1]{};
	for (int i = 0; i < m; i++)
		buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[0] = new int[n] {};
	m++;
}

void insert_row(int**& arr, int& m, const int n, int index)
{
	if (index > m)return;
	int** buffer = new int*[m + 1];
	for (int i = 0; i < index; i++)
		buffer[i] = arr[i];
	for (int i = index; i < m; i++)
		buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[index] = new int[n] {};
	m++;
}

void push_col_back(int** arr, const int m, int & n)
{
	for (int i = 0; i < m; i++)
	{
		//1) Создаем буферную строку нужного размера:
		int* buffer = new int[n + 1]{};
		//2) Копируем исходную строку в буферную:
		for (int j = 0; j < n; j++)
			buffer[j] = arr[i][j];
		//3) Удаляем исходную строку:
		delete[] arr[i];
		//4) Подменяем адрес:
		arr[i] = buffer;
	}
	n++;
}

void pop_back(int*& arr, int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
}
void pop_front(int*& arr, int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)
		buffer[i] = arr[i + 1];
	delete[] arr;
	arr = buffer;
}