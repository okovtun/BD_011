/* Задание
Сделать шахматную доску.
*/

#include <iostream>
#include <conio.h>
using namespace std;


#define Esc 27
#define Enter 13
#define Delete 83
#define Backspace 8


#define line_vertical cout << (char)179
#define line_horizontal cout << (char)196
#define corner_left_top cout << (char)218
#define corner_left_bottom cout << (char)192
#define corner_right_top cout << (char)191
#define corner_right_bottom cout << (char)217

//#define fill_full cout << (char)219
//#define fill_none cout << (char)32

#define offset cout << (char)32 << (char)32

//#define ASCI_SYMBOL
//#define CHESSBOARD

void main()
{
	setlocale(LC_ALL, "Russian");
	//Объявление переменных
	char item_menu; //Переменная для меню...

	int fill_full = 219; //ASCII код полной заливки
	int fill_none = 32; //ASCII код пусого символа (пробел)

	int board_size = 8; //Размер доски
	int fill_size_width = 6; //Размер клетки длина

	int fill_size_height; //Размер заливки - высота

	int board_size_width, board_size_height; //Размер доски - длина и высота

	do
	{
		//Menu
		system("CLS"); //Очистка экрана
		cout << "\t  Chessboard 2.0\n";
		cout << "\t  Вывод \"Шахматной доски\" - произвольного размера.\n";
		cout << endl;
		cout << "\t  Настройки программы:\n";
		cout << "\t1 -- Выбрать символ \"заливки\" (по умолчанию 219) \t\t- значение \"";
		setlocale(LC_ALL, "C"); cout << (char)fill_full; setlocale(LC_ALL, "Russian");
		cout << "\"\n";
		cout << "\t2 -- Выбрать символ \"без заливки\" (по умолчанию 32) \t\t- значение \"";
		setlocale(LC_ALL, "C"); cout << (char)fill_none; setlocale(LC_ALL, "Russian");
		cout << "\"\n";
		cout << "\t3 -- Ввести количество клеток по горизонтали (по умолчанию 8) \t- значение " << board_size << "\n";
		cout << "\t4 -- Ввести размер клетки кратное двум (по умолчанию 6) \t- значение " << fill_size_width << "\n";
		cout << "\t5 -- Вернуть значения по умолчанию.\n";
		cout << "\t6 -- Запуск рисовки доски с учетом настроек.\n";
		cout << endl;
		cout << "\tEcsape -- выход\n";
		cout << endl;

		cout << ">>>";
		item_menu = _getch();

		switch (item_menu)
		{
		case '1': case '2':
		{
			system("CLS");
			cout << "\tТаблица ASCII символов с кодами\n";
			cout << endl;

			setlocale(LC_ALL, "C"); //Локаль С++
			for (int i = 0; i < 255; i++)
			{
				cout.width(3); //Размер поля cout
				switch (i) //Отсекём управляющие символы без отображения...
				{
				case 0: case 7: case 8: case 9: case 10: case 13: case 27: case 28: case 32: //Символы без отображения )))
				{
					cout << (int)i << " - " << " " << "  ";
					break;
				}
				default:
				{
					cout << (int)i << " - " << (char)i << "  ";
					break;
				}
				}
				if (i % 13 == 0) cout << endl; //Перенос строки
			}
			setlocale(LC_ALL, "Russian"); //Локаль Рус
			cout << endl;
			if (item_menu == '1') //Настройка символа заливки.
			{
				cout << "\tВведите код символа \"заливка\": "; cin >> fill_full;
			}
			else if (item_menu == '2') //Настройка символа без заливки.
			{
				cout << "\tВведите код символа \"без заливка\": "; cin >> fill_none;
			}
			break;
		}
		case '3': //Количество клеток
		{
			system("CLS");
			cout << "\tВведите количество клеточек по горизонтали: "; cin >> board_size;
			break;
		}
		case '4': //Размер клетки
		{
			system("CLS");
			cout << "\tВведите размер клетки кратное двум: "; cin >> fill_size_width;
			break;
		}
		case '5': //Возврат на default значения
		{
			fill_full = 219; //ASCII код полной заливки
			fill_none = 32; //ASCII код пусого символа (пробел)

			board_size = 8; //Размер доски
			fill_size_width = 6; //Размер клетки длина
			break;
		}
		case '6': //Вывод доски.
		{
			system("cls");
			//Инициализация и рассчеты
			if (board_size > 0 && fill_size_width > 0)
			{
				fill_size_width = fill_size_width * 10 / 2 / 10 * 2; //Округляем введёное число до нижнего четного

				fill_size_height = fill_size_width / 2;

				board_size_height = board_size * fill_size_height;
				board_size_width = board_size * fill_size_width;

				cout << "\tРазмер поля " << board_size << "х" << board_size << " клеток.\t";
				cout << "\tРазмер клетки " << fill_size_width << "х" << fill_size_height << " символов.\n";
				cout << "\t\"заливка\" - \"";
				setlocale(LC_ALL, "C"); cout << (char)fill_full; setlocale(LC_ALL, "Russian");
				cout << "\"\t\"без заливки\" - \"";
				setlocale(LC_ALL, "C"); cout << (char)fill_none; setlocale(LC_ALL, "Russian");
				cout << "\"" << endl;

				setlocale(LC_ALL, "C");
				for (int i = 0; i < (board_size_height)+2; i++) //Строчки
				{
					offset;
					for (int j = 0; j < (board_size_width)+2; j++) //Колонки
					{
						if (i == 0 || i == (board_size_height + 1) || j == 0 || j == (board_size_width + 1)) //Рамка
						{
							if (i == 0 && j == 0) //Левый верхний угол
							{
								corner_left_top; line_horizontal;
							}
							else if (i == (board_size_height + 1) && j == 0) //Левый нижний угол
							{
								corner_left_bottom; line_horizontal;
							}
							else if (i == 0 && j == (board_size_width + 1)) //Правый верхний угол
							{
								line_horizontal; corner_right_top;
							}
							else if (i == (board_size_height + 1) && j == (board_size_width + 1)) //Правый нижний угол
							{
								line_horizontal; corner_right_bottom;
							}
							else //Линии
							{
								if (i > 0 && i < (board_size_height + 1)) //Вертикальные
								{
									if (j > board_size_width) cout << " ";
									line_vertical;
									if (j < 1) cout << " ";
								}
								else if (j > 0 && j < (board_size_width + 1)) //Горизонтальные
								{
									line_horizontal;
								}
							}
						}
						else //Вывод поля
						{
							cout << (char)(!(((j - 1) / fill_size_width + (i - 1) / fill_size_height) % 2) ? fill_full : fill_none);
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

			break;
		}
		}
	} while (item_menu != Esc);

	cout << endl;
	cout << "\tДо новых встреч!\t";
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 3; i++) cout << (char)2;
	setlocale(LC_ALL, "Russian");
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