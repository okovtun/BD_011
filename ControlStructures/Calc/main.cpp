#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define Escape 27

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
	cout << "������� �����: ";
	cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "�� ������" << endl;
	}
	else
	{
		cout << "�� Firefox" << endl;
	}
#endif // DARTS

#ifdef TEST
	char answer;
	int score = 0;

	cout << "������ 1:" << endl;
	cout << "�� ����� ������� �� �����?" << endl;
	cout << "A - ��������;\n";
	cout << "B - ������;\n";
	cout << "C - �����;\n";
	cout << "D - ����;\n";
	cout << "��� �����: "; cin >> answer;
	if (answer == 'C' || answer == 'c')
	{
		cout << "�����!" << endl;
		score++;
	}
	else
	{
		cout << "���" << endl;
	}
	//////////////////////////////////////////////////////////////////////////
	cout << "������ 2:" << endl;
	cout << "�� ����� ���������� �� �����?" << endl;
	cout << "A - ��������;\n";
	cout << "B - ������;\n";
	cout << "C - �����;\n";
	cout << "D - ����;\n";
	cout << "��� �����: "; cin >> answer;
	if (answer == 'C' || answer == 'c')
	{
		cout << "�����!" << endl;
		score++;
	}
	else
	{
		cout << "���" << endl;
	}
	cout << "�� ������� " << score << " ������.\n";
#endif // TEST

	double a, b, c=0;	//�����, �������� �������������
	char s;		//Sign - ���� ��������

	cout << "������� ���������: ";
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
	cout << "��� ������ �� ��������� ������� Escape" << endl;
	do
	{
		//system("CLS");
		c=a;
		//cout << "������� ���������: ";
		switch (s)
		{
		case '+': /*c = a + b;*/ cout << c << " + " << b << " = " << (a += b)/* << endl*/; break;
		case '-': /*c = a - b;*/ cout << c << " - " << b << " = " << (a -= b)/* << endl*/; break;
		case '*': /*c = a * b;*/ cout << c << " * " << b << " = " << (a *= b) /*<< endl*/; break;
		case '/': /*c = a / b;*/ cout << c << " / " << b << " = " << (a /= b) /*<< endl*/; break;
		default: cout << "Error: No operation" << endl;
		}
		//cout << "��� ������ �� ��������� ������� Escape" << endl;
		s = _getch();
		if (s != Escape)
		{
			cout << s;
			cin >> b;
		}
	} while (s != Escape);

	//main();

	//int var = 0;
	//switch (var)
	//{
	//case CONST_1: /*..code1..*/; break;
	//case CONST_2: /*..code2..*/; break;
	//	//........
	//	//........
	//case CONST_N: /*..codeN..*/	break;
	//default: /*default code*/cout << "Sam ti error";
	//}
}


/*
----------------------------------------------

----------------------------------------------
*/