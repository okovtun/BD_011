#include<iostream>
#include<Windows.h>
using namespace std;

//#define PYTHAGORAS

void main()
{
	setlocale(LC_ALL, "");

#ifdef PYTHAGORAS
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//SetConsoleTitle(L"Table");
	//SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, 0);

	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout.width(5);
			cout /*<< i << "*" << j << "=" */ << i * j << " ";
		}
		cout << endl;
	}
#endif // PYTHAGORAS

	int n;
	cout << "Введите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true;	//Предполагаем, что число простое, но это нужно проверить
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)simple = false;
		}
		if(simple)cout << i << "\t";
	}
	cout << endl;
}