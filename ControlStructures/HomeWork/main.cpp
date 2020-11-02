
#include <iostream>
#include <conio.h>
using namespace std;

#define Esc 27
#define Enter 13
#define Delete 83
#define Backspace 8

#define TYPE long long int

TYPE factorial(TYPE number) //Рассчет факториала числа.
{
	float result = 1;
	for (int i = 1; i <= number; i++)
	{
		result *= i;
	}
	return result;
}

void main()
{

	setlocale(LC_ALL, "Russian");
	int pascal_cout_row; //Количесво выводимых строк
	int spases_count = 25; // Выравнивание триугольника
	cout << "\t   Вывод треугольника Паскаля.\n";
	cout << "\tТриугольник строится то 0 до 12 строчки... Дальше ошибка...\n";
	cout << "\tВведите количество выводимых строк: "; cin >> pascal_cout_row;
	cout << endl;

	for (TYPE n = 0; n <= pascal_cout_row; n++) //Номер строки
	{
		for (int i = 0; i < spases_count * 2; i++) cout << " "; //Выводим отступы для выравнивания треугольника...
		for (int r = 0; r <= n; r++) // Номер столбца
		{
			cout.width(4);
			cout << (factorial(n) / (factorial(r) * factorial(n - r))) << ""; //Вормула рассчета числа C = n! / (r! * (n-r)!)...
		}
		cout << "\n";
		spases_count--;
	} //Верно считает 0 - 12 строку треугольника. Дальше ошибка :(:(:(

	cout << "\n\n";

	main();
}