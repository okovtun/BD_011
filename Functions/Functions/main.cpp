#include<iostream>
using namespace std;

int sum(int a, int b);	//�������� ������� (Function declaration - ���������� �������)
int dif(int a, int b);
int prod(int a, int b);
int division(int a, int b);

//////////////////////////////////////
//		Unresolved externals		//
//	LNK - Linker
//	LNK: unresolved external symbol found

void main()
{
	setlocale(LC_ALL, "");
	int c = sum(2, 3);	//����� ������� (Function call)
	cout << c << endl;
	cout << dif(8, 3) << endl;
	cout << prod(5, 3) << endl;
	cout << division(15, 8) << endl;
	//too many arguments in function call
	//too few arguments in function call
	//function doesn't take N arguments
}

int sum(int a, int b)//���������� ������� (Function definitio - ����������� �������)
{
	int c = a + b;
	return c;
}

int dif(int a, int b)
{
	return a - b;
}

int prod(int a, int b)
{
	return a * b;
}

int division(int a, int b)
{
	return a / b;
}


/*type name(parameters)	//��������� �������
{
	//���� �������
	group - of - statements;
}

void(�������)
return value;
return;*/