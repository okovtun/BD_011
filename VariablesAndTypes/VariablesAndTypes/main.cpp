#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	/*cout << true << endl;
	cout << false << endl;
	cout << (bool)0.001 << endl;*/

	int a;	//signed - ������ ������� ��� �������������,
			//��� � ������������� ����� �����.
	unsigned int b;//����� ������� ������ ������������� ����� �����.
	int unsigned c;

	cout << "short �������� " << sizeof(short) << " �����;"<< endl;
	cout << "unsigned short:     " << 0 << "..." << USHRT_MAX << endl;
	cout << "  signed short:" << SHRT_MIN << "..." << SHRT_MAX << endl;
	cout << "\n---------------------------------------\n";
	cout << sizeof(long long) << endl;
	cout << ULLONG_MAX << endl;
}


//���������� (Variable) - ��� ����������� ������� ������,
//���������� ������� ����� ���������� � �������� ���������� ��������.


//					type name;		//��������� ���������� ����������

/*
-------------------------------------
1. ���������� ����: bool (Boolean) 1 Byte 
	true - 1
	false- 0

2. ���������� ����: char (Character - ������) 1 Byte ASCII 256

3. �������� ����
	�������� - signed
	����������� - unsigned
-------------------------------------
*/