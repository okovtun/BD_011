/* Задание
Сделать шахматную доску.
*/

#include <iostream>
#include <conio.h>
using namespace std;

/*
#define Esc 27
#define Enter 13
#define Delete 83
#define Backspace 8
*/

#define line_vertical cout << (char)179
#define line_horizontal cout << (char)196
#define corner_left_top cout << (char)218
#define corner_left_bottom cout << (char)192
#define corner_right_top cout << (char)191
#define corner_right_bottom cout << (char)217

#define fill_full cout << (char)219
#define fill_none cout << (char)32

#define offset cout << (char)32 << (char)32

//#define ASCI_SYMBOL
#define CHESSBOARD

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef ASCI_SYMBOL //Вывод таблицы ASCI для справки :D
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= 255; i++)
	{
		cout << (int)i << "- " << (char)i << "  ";
	}
	cout << (int)' ';
	setlocale(LC_ALL, "Russian");
#endif // ASCI_SYMBOL

#ifdef CHESSBOARD
	system("cls");
	cout << "  Сегодня без меню :(\n";
	//Объявление переменных
	int fill_size_width, fill_size_height; //Размер заливки - длина и высота

	int board_size; //Размер доски

	int board_size_width, board_size_height; //Размер доски - длина и высота

	//Инициализация и рассчеты
	offset;	cout << "Введите количество клеточек: "; cin >> board_size;
	offset;	cout << "Введите размер заливки (кратное двум): "; cin >> fill_size_width;
	//fill_size_width = 6;
	if (board_size > 0 && fill_size_width > 0)
	{
		fill_size_width = fill_size_width * 10 / 2 / 10 * 2; //Округляем введёное число до нижнего четного

		fill_size_height = fill_size_width / 2;

		//board_size = 8;

		board_size_height = board_size * fill_size_height;
		board_size_width = board_size * fill_size_width;


		setlocale(LC_ALL, "C");
		//corner_left_top;
		for (int i = 0; i < (board_size_height)+2; i++) //Строчки
		{
			offset;
			for (int j = 0; j < (board_size_width)+2; j++) //Колонки
			{
				if (i == 0 || i == (board_size_height + 1) || j == 0 || j == (board_size_width + 1)) //Рамка
				{
					if (i == 0 && j == 0) //Левый верхний угол
					{
						corner_left_top;
					}
					else if (i == (board_size_height + 1) && j == 0) //Левый нижний угол
					{
						corner_left_bottom;
					}
					else if (i == 0 && j == (board_size_width + 1)) //Правый верхний угол
					{
						corner_right_top;
					}
					else if (i == (board_size_height + 1) && j == (board_size_width + 1)) //Правый нижний угол
					{
						corner_right_bottom;
					}
					else //Линии
					{
						if (i > 0 && i < (board_size_height + 1)) //Вертикальные
						{
							line_vertical;
						}
						else if (j > 0 && j < (board_size_width + 1)) //Горизонтальные
						{
							line_horizontal;
						}
					}
				}
				else //Вывод поля
				{
					(!(((j - 1) / fill_size_width + (i - 1) / fill_size_height) % 2)) ? fill_full : fill_none;
				}
			}
			cout << endl;
		}
		setlocale(LC_ALL, "Russian");
	}
	else
	{
		cout << "Занчения должны быть больше ноля.\n";
	}

	offset;
	system("pause");

#endif // CHESSBOARD

	main();
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