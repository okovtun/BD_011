#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <conio.h>
#include <locale>
#include <stdio.h>
#include <io.h>
#include <Windows.h>
#include <fcntl.h>
#include <valarray>
#include <algorithm>


using namespace std;

/*
#define escape 27
#define enter 13
#define space 32
#define tab 9
#define BackSlash 92
*/
/*
#define UgolUpLeft (char)218
#define UgolUpRight (char)191
#define UgolDownLeft (char)192
#define UgolDownRight (char)217
#define HorizontalLine (char)196
#define VerticalLine (char)179
#define Kvadrat (char)219
#define space 32
*/

void animate()
{
	for (int i = 0; i < INFINITE; ++i)
	{
		cout << "---------+++++++++---------+++++++++---------\r" << "";
		Sleep(200);
		cout << "+++++++++---------+++++++++---------+++++++++\r" << "";
		Sleep(200);


	}
}

// На момент кодинга я очень тупил по этому делал для себя заметки что бы анализировать и меньше тупить

void Random(int* a, int n) // Ставлю в функции якобы массив(a) и число элементов(n)
{
	srand(time(NULL)); // Что бы каждый раз были рандомные цифры а не одни и те же сгенерированные рандомно 1 раз
	for (int i = 0; i < n; i++) // От 0 до 10
	{
		a[i] = rand() % 5; // Заполняю массив рандомными цифрами
	}
}

void Sorting(int* a, int n) // Делаю то же самое что и с первой функцией
{
	sort(a, a + n); // Сортирую, без этого никак
}

void Array(const int* a, int n) // То же самое
{
	cout << "Упорядоченный массив из рандомных чисел" << endl << endl; // Вывожу на экран текст

	for (int i = 0; i < n; i++, Sleep(50)) // От 0 до 10 с задержкой в 50 мс
	{
		cout << a[i] << " "; // Вывожу на экран массив
	}
	cout << endl << endl; // перехожу на новую строку 2 раза
}

void Povtorenie(const int* a, int n) // То же самое
{
	cout << "Повторение" << endl << endl; // Вывожу на экран текст с начинанием с новой строки 2 раза

	int povtor = 0; // Создаю переменную для записи повторов

	for (int i = 0; i < n; i++) // От 0 до 10
	{
		if (a[i] == a[i + 1]) // Если массив из 10 элементов равен массиву из 11 элементов то... ¯\_(@_@)_/¯
		{
			povtor++; // Записывается кол-во повторов
			continue; // Чтобы повторяющиеся элементы не повторялись @_@
		}
		if (povtor != 0) // Если переменная равна 0 то повторов нет а если больше нуля то такое вот
		{
			cout << a[i] << " | Повторяется " << povtor << " раз(а)" << endl; // Выводим повторяющиеся цифры которые от куда-то взялить(я до конца и не понял от куда) в консоль а потом выводим сколько раз они повторяются
		}
		povtor = 0; // Что бы каждый повторяющийся элемент не показывался шо он повторяется больше чем на самом деле
	}
}

// cout << a[i] == a[i + 1];

int main()
{
	setlocale(LC_ALL, ""); // Делаю русский язык

	const int elems = 10; // Делаю константу из 10 элементов
	int arr[elems]; // Делаю массив из 10 элементов

	Random(arr, elems); // Присваиваю функциям массив и число элементов
	Sorting(arr, elems); // Потом отсортировываем по возрастанию
	Array(arr, elems); // Выводим исходный массив
	Povtorenie(arr, elems); // Выводим повторы

	cout << endl; // На следуюзую строку

	animate(); // Выводим анимацию
}

// Я умер, спасибо))0))000)