#include<iostream>
#include<conio.h>	//Console Input Output header
using namespace std;
using std::cin;
using std::cout;
using std::endl;

/*
-------------------------------
while		- цикл с предусловием
do...while	- цикл с постусловием
for			- цикл на заданное число итераций
Итерация - это однократное выполнение тела цикла.
Тело цикла - код, который нужно зациклить (многократно выполнить).
-------------------------------
*/

//#define WHILE_BASICS
//#define PALINDROME

#define Escape 27

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_BASICS
	int i = 0;	//Счетчик цикла
	int n;		//Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << ". Hello World!" << endl;
		//i++;
	}
#endif // WHILE_BASICS

#ifdef PALINDROME
	cout << 7 / 2 << endl;

	int number;	//Число, вводимое с клавиатуры
	int reverse_number = 0;
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse_number *= 10;
		reverse_number += buffer % 10;	//Операция % возвращает младший разряд числа
		buffer /= 10;
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse_number << endl;
	if (number == reverse_number)
	{
		cout << "Это Палиндром" << endl;
	}
	else
	{
		cout << "Как нибудь в другой раз ;-)\n";
	}
#endif // PALINDROME


	char key;	//Код клавиши
	do
	{
		key = _getch();//ASCII
		cout << (int)key << "\t" << key << endl;
	} while (key != Escape);
}