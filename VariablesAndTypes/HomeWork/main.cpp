#include<iostream>
#include<limits.h>
#include<float.h>

#define obm(type) "����� ���������� ������ ��� " << type << " ����� "
#define min "; ����������� �������� "
#define max "; ������������ �������� "

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	cout << "���������� ���� int �������� " << sizeof(int) << "����.\n";
	cout << "�������� ����������� ��������:\n";
	cout << "unsigned int:\t\t" << 0 << "..." << UINT_MAX << endl;
	cout << "  signed int: " << INT_MIN << "..." << INT_MAX << endl;




	//cout << obm(int) << sizeof(int) << " �����" << min << INT_MIN << max << INT_MAX << endl;
	/*cout << obm << "int ����� " << sizeof(int) << " �����" << min << INT_MIN << max << INT_MAX << endl;
	cout << obm << "unsigned int ����� " << sizeof(unsigned int) << " �����" << min << "0" << max << UINT_MAX << endl;
	cout << obm << "short ����� " << sizeof(short) << " �����" << min << SHRT_MIN << max << SHRT_MAX << endl;
	cout << obm << "unsigned short ����� " << sizeof(unsigned short) << " �����" << min << "0" << max << USHRT_MAX << endl;
	cout << obm << "long int ����� " << sizeof(long int) << " �����" << min << LONG_MIN << max << LONG_MAX << endl;
	cout << obm << "unsigned long int ����� " << sizeof(unsigned long int) << " �����" << min << "0" << max << ULONG_MAX << endl;
	cout << obm << "long long int ����� " << sizeof(long long int) << " ����" << min << LLONG_MIN << max << LLONG_MAX << endl;
	cout << obm << "unsigned long long int ����� " << sizeof(unsigned long long int) << " ����" << min << "0" << max << ULLONG_MAX << endl;
	cout << obm << "float ����� " << sizeof(float) << " �����" << min << FLT_MIN << max << FLT_MAX << endl;
	cout << obm << "double ����� " << sizeof(double) << " ����" << min << DBL_MIN << max << DBL_MAX << endl;
	cout << obm << "long double ����� " << sizeof(long double) << " ����" << min << LDBL_MIN << max << LDBL_MAX << endl;
	system("pause");*/
}