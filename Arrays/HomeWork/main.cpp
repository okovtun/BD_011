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

const char sz_loading[] = "Загрузка кода";
const char sz_source_arr[] = "--------- Изначально ---------";

void ShiftSelf()
{

	cout << "Н";
	Sleep(50);
	cout << "а";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "с";
	Sleep(50);
	cout << "к";
	Sleep(50);
	cout << "о";
	Sleep(50);
	cout << "л";
	Sleep(50);
	cout << "ь";
	Sleep(50);
	cout << "к";
	Sleep(50);
	cout << "о";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "и";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "к";
	Sleep(50);
	cout << "у";
	Sleep(50);
	cout << "д";
	Sleep(50);
	cout << "а";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "с";
	Sleep(50);
	cout << "д";
	Sleep(50);
	cout << "в";
	Sleep(50);
	cout << "и";
	Sleep(50);
	cout << "г";
	Sleep(50);
	cout << "а";
	Sleep(50);
	cout << "е";
	Sleep(50);
	cout << "м";
	Sleep(50);
	cout << "?";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "(";
	Sleep(50);
	cout << "-1";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "в";
	Sleep(50);
	cout << "п";
	Sleep(50);
	cout << "р";
	Sleep(50);
	cout << "а";
	Sleep(50);
	cout << "в";
	Sleep(50);
	cout << "о";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "1";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "в";
	Sleep(50);
	cout << "л";
	Sleep(50);
	cout << "е";
	Sleep(50);
	cout << "в";
	Sleep(50);
	cout << "о";
	Sleep(50);
	cout << ")";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << ":";
	Sleep(50);
	cout << " ";

}

void Initially()
{

	/*cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "И";
	Sleep(50);
	cout << "з";
	Sleep(50);
	cout << "н";
	Sleep(50);
	cout << "а";
	Sleep(50);
	cout << "ч";
	Sleep(50);
	cout << "а";
	Sleep(50);
	cout << "л";
	Sleep(50);
	cout << "ь";
	Sleep(50);
	cout << "н";
	Sleep(50);
	cout << "о";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";*/

	//cout << sizeof(sz_source_arr) << endl;
	for (int i = 0; i < sizeof(sz_source_arr); i++, Sleep(50))
		cout << sz_source_arr[i];
}

void ShiftLeft()
{

	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "C";
	Sleep(50);
	cout << "д";
	Sleep(50);
	cout << "в";
	Sleep(50);
	cout << "и";
	Sleep(50);
	cout << "г";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "в";
	Sleep(50);
	cout << "л";
	Sleep(50);
	cout << "е";
	Sleep(50);
	cout << "в";
	Sleep(50);
	cout << "о";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "н";
	Sleep(50);
	cout << "а";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "4";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";

}

void ShiftRight()
{

	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "C";
	Sleep(50);
	cout << "д";
	Sleep(50);
	cout << "в";
	Sleep(50);
	cout << "и";
	Sleep(50);
	cout << "г";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "в";
	Sleep(50);
	cout << "п";
	Sleep(50);
	cout << "р";
	Sleep(50);
	cout << "а";
	Sleep(50);
	cout << "в";
	Sleep(50);
	cout << "о";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "н";
	Sleep(50);
	cout << "а";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "2";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";

}

void Tire()
{

	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";
	Sleep(50);
	cout << "-";

}

void next()
{

	cout << "А";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "т";
	Sleep(50);
	cout << "е";
	Sleep(50);
	cout << "п";
	Sleep(50);
	cout << "е";
	Sleep(50);
	cout << "р";
	Sleep(50);
	cout << "ь";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "с";
	Sleep(50);
	cout << "а";
	Sleep(50);
	cout << "м";
	Sleep(50);
	cout << "о";
	Sleep(50);
	cout << "м";
	Sleep(50);
	cout << "у";

}

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

void downloadingComplete()
{

	cout << "З";
	Sleep(50);
	cout << "а";
	Sleep(50);
	cout << "г";
	Sleep(50);
	cout << "р";
	Sleep(50);
	cout << "у";
	Sleep(50);
	cout << "з";
	Sleep(50);
	cout << "к";
	Sleep(50);
	cout << "а";
	Sleep(50);
	cout << " ";
	Sleep(50);
	cout << "з";
	Sleep(50);
	cout << "а";
	Sleep(50);
	cout << "в";
	Sleep(50);
	cout << "е";
	Sleep(50);
	cout << "р";
	Sleep(50);
	cout << "ш";
	Sleep(50);
	cout << "е";
	Sleep(50);
	cout << "н";
	Sleep(50);
	cout << "а";
	Sleep(50);
	cout << ".";
	Sleep(1000);
	cout << "\b";
	cout << "..";
	Sleep(1000);
	cout << "\b\b";
	cout << "...";

}

void downloading()
{

	for (int i = 0; i < 101; i++)
	{
		cout << "\rЗагрузка кода: " << i << "%";
		Sleep(20);
	}

}


int main()
{

	setlocale(LC_ALL, "");

	////////////////////////////////////////////////////// Тирешки и текст

	downloading();

	cout << endl << endl;

	Tire();

	cout << endl << endl;

	downloadingComplete();

	system("cls");

	Initially();

	cout << endl << endl;

	////////////////////////////////////////////////////// Код

	const int y = 8;
	int arrr[y] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	for (int i : arrr)cout << i << " ";

	////////////////////////////////////////////////////// Текст

	cout << endl << endl;

	ShiftLeft();

	cout << endl << endl;

	////////////////////////////////////////////////////// Код

	const int n = 8;
	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	valarray<int> arrShiftLeft(arr, 8);
	arrShiftLeft = arrShiftLeft.cshift(4);

	for (int i : arrShiftLeft)cout << i << " ";

	////////////////////////////////////////////////////// Текст

	cout << endl << endl;

	ShiftRight();

	cout << endl << endl;

	////////////////////////////////////////////////////// Код

	const int k = 8;
	int array[k] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	valarray<int> arrShiftRight(array, 8);
	arrShiftRight = arrShiftRight.cshift(-2);

	for (int i : arrShiftRight)cout << i << " ";

	////////////////////////////////////////////////////// Тирешки и текст

	cout << endl << endl;

	Tire();

	cout << endl << endl;

	next();

	cout << endl << endl;

	Tire();

	cout << endl << endl;

	////////////////////////////////////////////////////// Код

	const int p = 8;
	int arrayy[p] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	int qwe = 0;

	ShiftSelf(); cin >> qwe;

	cout << endl;

	Tire();

	cout << endl << endl;

	valarray<int> arrShiftAnother(arrayy, 8);
	arrShiftAnother = arrShiftAnother.cshift(qwe);

	for (int i : arrShiftAnother)cout << i << " ";

	cout << endl << endl;

	////////////////////////////////////////////////////// Анимация

	animate();

}