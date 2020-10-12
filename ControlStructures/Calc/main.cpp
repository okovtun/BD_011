#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define DARTS
//#define TEST

#define CONST_1	1
#define CONST_2 2
#define CONST_3 3
#define CONST_N 'N'

void main()
{
	setlocale(LC_ALL, "");
#ifdef DARTS
	int n;
	cout << "Введите число: ";
	cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "Вы попали" << endl;
	}
	else
	{
		cout << "Вы Firefox" << endl;
	}
#endif // DARTS

#ifdef TEST
	char answer;
	int score = 0;

	cout << "Вопрос 1:" << endl;
	cout << "На какой планете мы живем?" << endl;
	cout << "A - Меркурий;\n";
	cout << "B - Венера;\n";
	cout << "C - Земля;\n";
	cout << "D - Марс;\n";
	cout << "Ваш ответ: "; cin >> answer;
	if (answer == 'C' || answer == 'c')
	{
		cout << "Бинго!" << endl;
		score++;
	}
	else
	{
		cout << "Неа" << endl;
	}
	//////////////////////////////////////////////////////////////////////////
	cout << "Вопрос 2:" << endl;
	cout << "На каком континенте мы живем?" << endl;
	cout << "A - Меркурий;\n";
	cout << "B - Венера;\n";
	cout << "C - Земля;\n";
	cout << "D - Марс;\n";
	cout << "Ваш ответ: "; cin >> answer;
	if (answer == 'C' || answer == 'c')
	{
		cout << "Бинго!" << endl;
		score++;
	}
	else
	{
		cout << "Неа" << endl;
	}
	cout << "Вы набрали " << score << " баллов.\n";
#endif // TEST

	double a, b;	//Числа, вводимые пользователем
	char s;		//Sign - знак операции
	cout << "Введите выражение: ";
	cin >> a >> s >> b;
	//cout << a << s << b << endl;

	/*if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error: No operation" << endl;
	}*/

	switch (s)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}

	main();

	int var=0;
	switch (var)
	{
	case CONST_1: /*..code1..*/;break;
	case CONST_2: /*..code2..*/;break;
		//........
		//........
	case CONST_N: /*..codeN..*/	break;
	default: /*default code*/cout << "Sam ti error";
	}
}


/*
----------------------------------------------

----------------------------------------------
*/