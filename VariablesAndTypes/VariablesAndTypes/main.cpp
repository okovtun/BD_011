#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	/*cout << true << endl;
	cout << false << endl;
	cout << (bool)0.001 << endl;*/

	int a;	//signed - сможет хранить как положительные,
			//так и отрицательные целые числа.
	unsigned int b;//Может хранить только положительные целые числа.
	int unsigned c;

	cout << "short занимает " << sizeof(short) << " Байта;"<< endl;
	cout << "unsigned short:     " << 0 << "..." << USHRT_MAX << endl;
	cout << "  signed short:" << SHRT_MIN << "..." << SHRT_MAX << endl;
	cout << "\n---------------------------------------\n";
	cout << sizeof(long long) << endl;
	cout << ULLONG_MAX << endl;
}


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