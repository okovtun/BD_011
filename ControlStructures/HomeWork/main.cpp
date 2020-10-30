/* �������
������� ��������� �����.
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

#ifdef ASCI_SYMBOL //����� ������� ASCI ��� ������� :D
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
	cout << "  ������� ��� ���� :(\n";
	//���������� ����������
	int fill_size_width, fill_size_height; //������ ������� - ����� � ������

	int board_size; //������ �����

	int board_size_width, board_size_height; //������ ����� - ����� � ������

	//������������� � ��������
	offset;	cout << "������� ���������� ��������: "; cin >> board_size;
	offset;	cout << "������� ������ ������� (������� ����): "; cin >> fill_size_width;
	//fill_size_width = 6;
	if (board_size > 0 && fill_size_width > 0)
	{
		fill_size_width = fill_size_width * 10 / 2 / 10 * 2; //��������� ������� ����� �� ������� �������

		fill_size_height = fill_size_width / 2;

		//board_size = 8;

		board_size_height = board_size * fill_size_height;
		board_size_width = board_size * fill_size_width;


		setlocale(LC_ALL, "C");
		//corner_left_top;
		for (int i = 0; i < (board_size_height)+2; i++) //�������
		{
			offset;
			for (int j = 0; j < (board_size_width)+2; j++) //�������
			{
				if (i == 0 || i == (board_size_height + 1) || j == 0 || j == (board_size_width + 1)) //�����
				{
					if (i == 0 && j == 0) //����� ������� ����
					{
						corner_left_top;
					}
					else if (i == (board_size_height + 1) && j == 0) //����� ������ ����
					{
						corner_left_bottom;
					}
					else if (i == 0 && j == (board_size_width + 1)) //������ ������� ����
					{
						corner_right_top;
					}
					else if (i == (board_size_height + 1) && j == (board_size_width + 1)) //������ ������ ����
					{
						corner_right_bottom;
					}
					else //�����
					{
						if (i > 0 && i < (board_size_height + 1)) //������������
						{
							line_vertical;
						}
						else if (j > 0 && j < (board_size_width + 1)) //��������������
						{
							line_horizontal;
						}
					}
				}
				else //����� ����
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
		cout << "�������� ������ ���� ������ ����.\n";
	}

	offset;
	system("pause");

#endif // CHESSBOARD

	main();
}

//�����������
/*
-----------------------------------------------------
|													|
|	"������������ �������� ���"						|
|	����: ��011										|
|	�������: ������ ��������������� �� ����� C++	|
|													|
|	�����������: ������� �������					|
|	�������������: ������ ����						|
|													|
|	������������ - 2020								|
|													|
-----------------------------------------------------
*/