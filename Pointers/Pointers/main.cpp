#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int a = 2;
	int* pa = &a;
	cout << a << endl;	//Выводим значение переменной 'a' на экран
	cout << &a << endl;	//Получаем адрес переменной 'a' прямо при выоде на экран
	cout << pa << endl;	//Выводим адрес переменной 'a' хранящийся в указателе 'pa'
	cout << *pa << endl;//Разыменовываем адрес в указателе 'pa', и получаем значение по адресу

	int* pb;
	int b;
	*pb = &b;
}