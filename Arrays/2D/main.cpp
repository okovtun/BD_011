#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 5;	//Количество строк
	const int COLS = 8;	//Количество столбцов - количество элементов строки.
	int arr[ROWS][COLS] = {};
	/*{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};*/
	int minRand;
	int maxRand;
	cout << "Введите минимально возможное случайное число: "; cin >> minRand;
	cout << "Введите максимально возможное случайное число: "; cin >> maxRand;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand) + minRand;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}