/*
TODO:
1. Написать программу, которая перемножает две матрицы C = A * B;
2. Вычислить определитель матрицы третьего парядка методом Саррюса;
*/
#include <iostream>
#include <conio.h>

using namespace std;

#define Esc 27

void main()
{
	setlocale(LC_ALL, "Russian");
	char input_char;

	do
	{
		//Приветствие.
		system("CLS");
		cout << "\t ======+=========+=========+=========+=========+====== \n";
		cout << "\t|                       МАТРИЦЫ                       |\n";
		cout << "\t|-----------------------------------------------------|\n";
		cout << "\t|    Вашему вниманию представляется программа по      |\n";
		cout << "\t| вычислению матриц.                                  |\n";
		cout << "\t|    Матрицы генерируются псевдослучайным образом.    |\n";
		cout << "\t|                                                     |\n";
		cout << "\t|    Выберите задание для проверки:                   |\n";
		cout << "\t|                                                     |\n";
		cout << "\t|    1. Произведение матрицы A * B = C                |\n";
		cout << "\t|    2. Определитель матрицы (методом Саррюса)        |\n";
		cout << "\t|                                                     |\n";
		cout << "\t|    'Escape' - завершение программы.                 |\n";
		cout << "\t|                                                     |\n";
		cout << "\t ======+=========+=========+=========+=========+====== \n";
		cout << "\t>>>";

		input_char = _getch(); //Ожидаем нажание клавиши. И помещаем её в переменную.

		switch ((int)input_char)
		{
		case '1': //Произведение матриц
		{
			system("CLS");
			//Размеры матрицы
			const int M = 3; //Количество строк
			const int N = 5; //Количество элементов в строке
			const int K = 3; //Количество элементов в строке второй матрици

			int A[M][N] = {};
			int B[N][K] = {};
			int C[M][K] = {}; //Результат умножения матриц A и B

			int min_rand = -10;
			int max_rand = 10;

			//Определим количество цыфр в числах. Для правильного размера cout.with.
			int size_min_digit = 1;
			int size_max_digit = 1;
			int size_digit = 0;

			size_digit = min_rand;
			while ((size_digit /= 10) != 0)	size_min_digit++;
			size_digit = max_rand;
			while ((size_digit /= 10) != 0) size_max_digit++;

			size_digit = ((size_min_digit > size_max_digit) ? size_min_digit : size_max_digit) + 1;
			//Количество найдено. +1 место под знак '-'.

			//Заполняем наши матрици
			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < N; j++)
				{
					A[i][j] = rand() % (max_rand - min_rand) + min_rand; //Генерация случайного числа в диапазоне.
				}
			}

			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < K; j++)
				{
					B[i][j] = rand() % (max_rand - min_rand) + min_rand; //Генерация случайного числа в диапазоне.
				}
			}

			//Произведение матриц
			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < K; j++)
				{
					for (int p = 0; p < N; p++)
					{
						C[i][j] += A[i][p] * B[p][j];
					}
				}
			}

			//Вывод матриц на экран
			cout << "Matrix A:\n";
			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < N; j++)
				{
					cout.width(size_digit);
					cout << A[i][j] << "  ";
				}
				cout << endl;
			}
			cout << endl;

			cout << "Matrix B:\n";
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < K; j++)
				{
					cout.width(size_digit);
					cout << B[i][j] << "  ";
				}
				cout << endl;
			}
			cout << endl;

			cout << "Matrix C = A * B\n";
			size_digit = --size_digit * 2 + 1;
			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < K; j++)
				{
					cout.width(size_digit);
					cout << C[i][j] << "  ";
				}
				cout << endl;
			}
			system("PAUSE");
			break;
		}
		case '2': //Определитель матрицы методом Саррюса
		{
			system("CLS");

			const int M = 3; //Размер матрицы (по условию матрица третьего порядка. Поэтому её размер 3 х 3.
			int A[M][M]; //Сама матрица

			int min_rand = -10;
			int max_rand = 10;

			//Определим количество цыфр в числах. Для правильного размера cout.with.
			int size_min_digit = 1;
			int size_max_digit = 1;
			int size_digit = 0;

			size_digit = min_rand;
			while ((size_digit /= 10) != 0)	size_min_digit++;
			size_digit = max_rand;
			while ((size_digit /= 10) != 0) size_max_digit++;

			size_digit = ((size_min_digit > size_max_digit) ? size_min_digit : size_max_digit) + 1;
			//Количество найдено. +1 место под знак '-'.

			//Заполняем матрицу
			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < M; j++)
				{
					A[i][j] = rand() % (max_rand - min_rand) + min_rand;
				}
			}

			cout << "Matrix A:\n";
			//Вывод матрици
			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < M; j++)
				{
					cout.width(size_digit);
					cout << A[i][j] << "  ";
				}
				cout << endl;
			}

			//Расчет оприделителя матрици методом Саррюса.
			int a = 1;
			int b = 1;
			int determinant_Sarrus = 0;

			for (int n = 0; n < M; n++)
			{
				for (int i = 0, j = M - 1; i < M; i++, j--)
				{
					a *= A[i][i]; //Спадающая диагональ
					b *= A[i][j]; //Восходящая диагональ
				}

				determinant_Sarrus += a - b; //Сохраняем результаты прохода
				a = 1; b = 1; //Обнуляем (присваиваем 1) переменным для расчетов диагоналей

				//Двигаем Матрицу справа налево на один столбик
				for (int i = 0; i < M; i++)
				{
					for (int j = 0; j < M - 1; j++)
					{
						A[i][j] ^= A[i][j + 1];
						A[i][j + 1] ^= A[i][j];
						A[i][j] ^= A[i][j + 1];
					}
				}
			}

			cout << endl;
			cout << "Определитель матрицы методом Саррюса = " << determinant_Sarrus << endl << endl;

			system("PAUSE");
			break;
		}
		default:
			break;
		}
	} while (input_char != Esc);

	//Пращаемся.
	system("CLS");
	cout << endl << endl;
	cout << "\t ======+=========+=========+=========+=========+====== \n";
	cout << "\t|                                                     |\n";
	cout << "\t|                   До новых встреч!                  |\n";
	cout << "\t|                                                     |\n";
	cout << "\t ======+=========+=========+=========+=========+====== \n";
	cout << endl;
}
//Исполнитель
/*
-----------------------------------------------------
|													|
|	"Компьютерная академия ШАГ"						|
|	Курс: БД011										|
|	Предмет: Основы програмирования на языке C++	|
|													|
|	Исполнитель: Курицын Алексей					|
|	Преподаватель: Ковтун Олег						|
|													|
|	Екатеринбург - 2020								|
|													|
-----------------------------------------------------
*/