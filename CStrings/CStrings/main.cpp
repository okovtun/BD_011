#include<iostream>
#include<Windows.h>
using namespace std;

int StrLen(char str[]);

void main()
{
	setlocale(LC_ALL, "Rus");
	system("CHCP 1251");
	system("CLS");
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	//char str[] = "Hello";
	const int n = 20;
	char str[n];
	cout << "������� ������: ";
	//SetConsoleCP(1251);
	//cin >> str;
	cin.getline(str, n);
	//SetConsoleCP(866);
	cout << str << endl;
	cout << "������ ������ � ������:  " << sizeof(str) << endl;
	cout << "������ ������ � ��������:" << StrLen(str) << endl;
}

int StrLen(char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}