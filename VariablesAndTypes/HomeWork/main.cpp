#include<iostream>
#include<limits.h>
#include<float.h>

#define obm(type) "Объем занимаемой памяти для " << type << " равен "
#define min "; минимальное значение "
#define max "; максимальное значение "

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	cout << obm(int) << sizeof(int) << " байта" << min << INT_MIN << max << INT_MAX << endl;
	/*cout << obm << "int равен " << sizeof(int) << " байта" << min << INT_MIN << max << INT_MAX << endl;
	cout << obm << "unsigned int равен " << sizeof(unsigned int) << " байта" << min << "0" << max << UINT_MAX << endl;
	cout << obm << "short равен " << sizeof(short) << " байта" << min << SHRT_MIN << max << SHRT_MAX << endl;
	cout << obm << "unsigned short равен " << sizeof(unsigned short) << " байта" << min << "0" << max << USHRT_MAX << endl;
	cout << obm << "long int равен " << sizeof(long int) << " байта" << min << LONG_MIN << max << LONG_MAX << endl;
	cout << obm << "unsigned long int равен " << sizeof(unsigned long int) << " байта" << min << "0" << max << ULONG_MAX << endl;
	cout << obm << "long long int равен " << sizeof(long long int) << " байт" << min << LLONG_MIN << max << LLONG_MAX << endl;
	cout << obm << "unsigned long long int равен " << sizeof(unsigned long long int) << " байт" << min << "0" << max << ULLONG_MAX << endl;
	cout << obm << "float равен " << sizeof(float) << " байта" << min << FLT_MIN << max << FLT_MAX << endl;
	cout << obm << "double равен " << sizeof(double) << " байт" << min << DBL_MIN << max << DBL_MAX << endl;
	cout << obm << "long double равен " << sizeof(long double) << " байт" << min << LDBL_MIN << max << LDBL_MAX << endl;
	system("pause");*/
}