#include<iostream>
#include<conio.h>
using namespace std;

#define Escape		27
#define ArrowUp		72
#define ArrowDown	80
#define ArrowLeft	75
#define ArrowRight	77

void main()
{
	setlocale(LC_ALL, "");
	cout << double(7 / 2) << endl;
	cout << (double)7 / 2 << endl;
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		/*if (key == 'w' || key == 'W' || key == ArrowUp)
		{
			cout << "������" << endl;
		}
		else if (key == 's' || key == 'S' || key == ArrowDown)
		{
			cout << "�����" << endl;
		}
		else if (key == 'a' || key == 'A' || key == ArrowLeft)
		{
			cout << "�����" << endl;
		}
		else if (key == 'd' || key == 'D' || key == ArrowRight)
		{
			cout << "������" << endl;
		}
		else
		{
			if(key != -32)cout << "Error" << endl;
		}*/

		switch (key)
		{
		case ArrowUp:
		case 'w': case 'W': cout << "������" << endl; break;
		case ArrowDown:
		case 's':case 'S': cout << "�����" << endl; break;
		case ArrowLeft:
		case 'a': case 'A': cout << "�����" << endl; break;
		case ArrowRight:
		case 'd': case 'D': cout << "������" << endl; break;
		case ' ': cout << "������" << endl; break;
		case 13:  cout << "�����!" << endl; break;
		case Escape:cout << "Exit" << endl; break;
		case -32:break;
		default: cout << "Error" << endl; break;
		}
	} while (key != Escape);
}