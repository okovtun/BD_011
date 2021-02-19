#include<iostream>
using std::cin;
using std::cout;
using std::endl;

template<typename T>T** Allocate(const int m, const int n);
template<typename T>void Clear(T** arr, const int m);

void FillRand(int arr[], const int n, int maxRand = 100, int minRand = 0);
void FillRand(float arr[], const int n, int maxRand = 100, int minRand = 0);
void FillRand(double arr[], const int n, int maxRand = 100, int minRand = 0);
void FillRand(char arr[], const int n, int maxRand = 100, int minRand = 0);

void FillRand(int** arr, const int m, const int n);
void FillRand(float** arr, const int m, const int n);
void FillRand(double** arr, const int m, const int n);
void FillRand(char** arr, const int m, const int n);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T** arr, const int m, const int n);

template<typename T>void push_back(T*& arr, int& n, T value);
template<typename T>void push_front(T*& arr, int& n, T value);
template<typename T>void insert(T*& arr, int& n, T value, int index);

template<typename T>void push_row_back(T**& arr, int& m, const int n);
template<typename T>void push_row_front(T**& arr, int& m, const int n);
template<typename T>void insert_row(T**& arr, int& m, const int n, int index);

template<typename T>void pop_row_back(T**& arr, int& m, const int n);
template<typename T>void pop_row_front(T**& arr, int& m, const int n);

template<typename T>void push_col_back(T** arr, const int m, int& n);
template<typename T>void push_col_front(T** arr, const int m, int& n);
template<typename T>void insert_col(T** arr, const int m, int& n, int index);

template<typename T>void pop_back(T*& arr, int& n);
template<typename T>void pop_front(T*& arr, int& n);

//#define DEBUG_ASSERTION_FAILED_1
//#define DEBUG_ASSERTION_FAILED_2

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

typedef char DataType;

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

template<typename T>T** Allocate(const int m, const int n)
{
	//1) Создаем массив указателей:
	T** arr = new T*[m];
	//2) Выделяем память для строк двумерного динамического массива:
	for (int i = 0; i < m; i++)
	{
		arr[i] = new T[n];
	}
	return arr;
}
template<typename T>void Clear(T** arr, const int m)
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
void FillRand(float arr[], const int n, int maxRand, int minRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % (maxRand - minRand) + minRand)/10;
	}
}
void FillRand(double arr[], const int n, int maxRand, int minRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % (maxRand - minRand) + minRand)/10;
	}
}
void FillRand(char arr[], const int n, int maxRand, int minRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}


void FillRand(int** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(float** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = float(rand() % 100)/10;
		}
	}
}
void FillRand(double** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = double(rand() % 100)/10;
		}
	}
}
void FillRand(char** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand();
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
template<typename T>void Print(T** arr, const int m, const int n)
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

template<typename T>void push_back(T*& arr, int& n, T value)
{
	T* buffer = new T[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++;
}
template<typename T>void push_front(T*& arr, int& n, T value)
{
	//1. Создаем буферный массив нужного размера:
	T* buffer = new T[n + 1]{};
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
template<typename T>void insert(T*& arr, int& n, T value, int index)
{
	if (index >= n)return;
	T* buffer = new T[n + 1];
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

template<typename T>void push_row_back(T**& arr, int & m, const int n)
{
	//1) Создаем буферный массив указателей:
	T** buffer = new T*[m + 1];
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
	buffer[m] = new T[n] {};
	//6) После добавления строки в массив, количество его строк увеличивается на одну:
	m++;
}
template<typename T>void push_row_front(T**& arr, int & m, const int n)
{
	T** buffer = new T*[m + 1]{};
	for (int i = 0; i < m; i++)
		buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[0] = new T[n] {};
	m++;
}
template<typename T>void insert_row(T**& arr, int& m, const int n, int index)
{
	if (index > m)return;
	T** buffer = new T*[m + 1];
	for (int i = 0; i < index; i++)
		buffer[i] = arr[i];
	for (int i = index; i < m; i++)
		buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[index] = new T[n] {};
	m++;
}

template<typename T>void pop_row_back(T**& arr, int & m, const int n)
{
	T** buffer = new T*[--m]{};
	for (int i = 0; i < m; i++)
		buffer[i] = arr[i];
	delete[] arr[m];//Удаляем последнюю строку из памяти
	delete[] arr;	//Удаляем массив указателей	
	arr = buffer;	//Подменяем на новый массив указателей
}
template<typename T>void pop_row_front(T**& arr, int& m, const int n)
{
	T** buffer = new T*[--m];
	for (int i = 0; i < m; i++)
		buffer[i] = arr[i + 1];
	delete[] arr[0];
	delete[] arr;
	arr = buffer;
}

template<typename T>void push_col_back(T** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		//1) Создаем буферную строку нужного размера:
		T* buffer = new T[n + 1]{};
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
template<typename T>void push_col_front(T** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		T* buffer = new T[n+1] {};
		for (int j = 0; j < n; j++)
			buffer[j+1] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	n++;
}
template<typename T>void insert_col(T** arr, const int m, int & n, int index)
{
	for (int i = 0; i < m; i++)
	{
		T* buffer = new T[n + 1]{};
		for (int j = 0; j < index; j++)
			buffer[j] = arr[i][j];
		for (int j = index; j < n; j++)
			buffer[j + 1] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	n++;
}

template<typename T>void pop_back(T*& arr, int& n)
{
	T* buffer = new T[--n];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
}
template<typename T>void pop_front(T*& arr, int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)
		buffer[i] = arr[i + 1];
	delete[] arr;
	arr = buffer;
}