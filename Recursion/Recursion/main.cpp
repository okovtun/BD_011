#include<iostream>
#include<conio.h>
using namespace std;

#define OFFSET_TOP "\n\n\n\n\n\n\n\n"
#define OFFSET_LEFT "\t\t\t\t\t\t"

void PrintField(char field[], const int n, char player);
void Move(char field[], const int n, char player);
void Check(char field[], const int n, char player);

void main()
{
	setlocale(LC_ALL, "");
	do
	{
		const int n = 9;
		char field[n] = {};
		//for (int i = 0; i < n; i++)field[i] = i + 49;
		PrintField(field, n, '0');
		cout << "Для выхода нажмите Escape, для того чтобы сыргать еще раз, нажмите любую клавишу.\n";
	} while (_getch() != 27);
}

void PrintField(char field[], const int n, char player)
{
	system("CLS");
	cout << OFFSET_TOP;
	for (int i = 6; i >= 0; i -= 3)
	{
		cout << OFFSET_LEFT << " ";
		for (int j = 0; j < 3; j++)
		{
			cout << field[i + j];
			if (j != 2)cout << " | ";
		}
		cout << endl;
		cout << OFFSET_LEFT;
		if (i != 0)cout << "--- --- ---";
		cout << endl;
	}
	//Move(field, n, player);
	Check(field, n, player);
}

void Move(char field[], const int n, char player)
{
	char key;
	bool busy;
	do
	{
		busy = false;
		////////////////////////////////////////////////////
		do
		{
			//Проверяет попадание игрока в поле
			key = _getch();
			if (key == 27)return;
			if ((key<'1' || key>'9') && key != 27)cout << "Нажимай на кнопки внимательней!!!\n";
		} while ((key<'1' || key>'9') /*&& key != 27*/);
		////////////////////////////////////////////////////

		//Проверяет, в какую клетку походил игрок, и если клетка занята, то игроку предлагается
		//походить еще раз.
		if (field[key - 49] != 0)
		{
			busy = true;
			cout << "Клетка уже занята\a\n";
		}
		else
			field[key - 49] = player;
	} while (busy);
	/*if (player == 'X')PrintField(field, n, '0');
	else PrintField(field, n, 'X');*/
	PrintField(field, n, player);
}

void Check(char field[], const int n, char player)
{
	bool game_over = false;
	//Проверка диагоналей:
	if (
		field[0] == field[4] && field[4] == field[8] && field[8] != 0 ||
		field[2] == field[4] && field[4] == field[6] && field[6] != 0
		)
		game_over = true;
	//Проверка горизонталей:
	for (int i = 0; i < 7; i += 3)
		if (field[i] == field[i + 1] && field[i] == field[i + 2] && field[i] != 0)game_over = true;
	//Проверка вертикалей:
	for (int i = 0; i < 3; i++)
		if (field[i] == field[i + 3] && field[i] == field[i + 6] && field[i] != 0)game_over = true;

	bool draw = true;
	for (int i = 0; i < n; i++)
	{
		if (field[i] == 0)
		{
			draw = false;
			break;
		}
	}
	if (!game_over && draw)
	{
		cout << "Ничья!\n";
		return;
	}

	if (game_over)
	{
		cout << player << " wins" << endl;
		return;
	}
	else
	{
		//PrintField(field, n, player);
		if (player == 'X')Move(field, n, '0');
		else Move(field, n, 'X');
	}
}