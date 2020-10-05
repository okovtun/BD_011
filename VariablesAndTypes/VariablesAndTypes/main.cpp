#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define INTEGER_TYPES
//#define FLOATING_POINTS
//#define NAMES
//#define CONSTANTS
//#define TYPE_CONVERSIONS

void main()
{
	setlocale(LC_ALL, "Rus");
	/*cout << true << endl;
	cout << false << endl;
	cout << (bool)0.001 << endl;*/

#ifdef INTEGER_TYPES
	int a;	//signed - сможет хранить как положительные,
//так и отрицательные целые числа.
	unsigned int b;//Может хранить только положительные целые числа.
	int unsigned c;

	cout << "short занимает " << sizeof(short) << " Байта;" << endl;
	cout << "unsigned short:     " << 0 << "..." << USHRT_MAX << endl;
	cout << "  signed short:" << SHRT_MIN << "..." << SHRT_MAX << endl;
	cout << "\n---------------------------------------\n";
	cout << sizeof(long long) << endl;
	cout << ULLONG_MAX << endl;
#endif // INTEGER_TYPES

#ifdef FLOATING_POINTS
	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << "\t" << FLT_MAX << endl;

	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "\t" << DBL_MAX << endl;
#endif // FLOATING_POINTS

#ifdef NAMES
	//Идентификатор (identifier) - это имя!!!
	/*
	----------------------
	1. ABC...Zabc...z0123456789_;
	2. НЕ может начинаться символом цифры;
	3. Регистрозависимы.
	----------------------
	*/

	//int _1stPlace;
	//double Weight;
	//int camelCaseStyle;
	//int CamelCaseStyle;
	//short PascalStyle;
	//int distance_to_the_lake;	//snake_case_style


	double price_of_coffee;
	int number_of_cups;

	cout << "Сколько стоит чашка кофе: "; cin >> price_of_coffee;
	cout << "Сколько чашек Вы хотите: "; cin >> number_of_cups;
	double total_price = price_of_coffee * number_of_cups;
	cout << "С Вас " << total_price << " рублей" << endl;

	//Проинициализировать
	//Инициализация - это присвоение начального значения

	//cout << Weight << endl;
#endif

#ifdef CONSTANTS
	int speed = 0;
	const int MAX_SPEED = 250;
	//MAX_SPEED = 350;
	//l-value = r-value;
//http://cplusplus.com/doc/tutorial/constants/
	//Numerals
	cout << sizeof(long double) << endl;
	cout << typeid(.5f).name() << endl;
	5;	//Числовая константа типа int
	speed;

	//Literals
	cout << '\n';
	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;

#endif

#ifdef TYPE_CONVERSIONS
	double money;
	cout << "Введите денежную сумму: "; cin >> money;
	cout << money << endl;
	int grn = money;
	cout << grn << " грн.\t";
	int cop = (money - grn+1e-10)*100;
	cout << cop << " коп.\n";
#endif

	/*+3;
	-3;
	8 - 3;
	5 * 3;
	*3;*/
	//cout << 11. % 3 << endl;
}

/*
---------------------------
Statement - утверждение.
---------------------------



*/


//Переменная (Variable) - это именованная область памяти,
//содержимое которой может изменяться в процессе выполнения прграммы.


//					type name;		//Синтаксис объявления переменной

/*
-------------------------------------
1. Логические типы: bool (Boolean) 1 Byte
	true - 1
	false- 0

2. Символьные типы: char (Character - Символ) 1 Byte ASCII 256

3. Числовые типы
	знаковые - signed
	беззнаковые - unsigned
-------------------------------------
*/