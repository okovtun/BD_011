#include<iostream>
#include<Windows.h>
using namespace std;

#define tab "\t"

int StrLen(char str[]);
void ASCII()
{
	for (int i = 0; i < 256; i++)
	{
		cout << i << tab << (char)i << endl;
	}
}
void to_upper(char str[]);
void to_lower(char str[]);
void capitalize(char str[]);

void main()
{
	setlocale(LC_ALL, "Rus");
	system("CHCP 1251");
	system("CLS");
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	//char str[] = "Hello";
	const int n = 20;
	char str[n];
	//ASCII();
	cout << "������� ������: ";
	//SetConsoleCP(1251);
	//cin >> str;
	cin.getline(str, n);
	//SetConsoleCP(866);
	cout << str << endl;
	cout << "������ ������ � ������:  " << sizeof(str) << endl;
	cout << "������ ������ � ��������:" << StrLen(str) << endl;
	to_upper(str);
	cout << str << endl;
	capitalize(str);
	cout << str << endl;
}

int StrLen(char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}

void to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= '�' && str[i] <= '�')
		{
			str[i] -= 32;
		}
		else if (str[i] == '�')str[i] -= 16;
	}
}

void to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= '�' && str[i] <= '�')
		{
			str[i] += 32;
		}
		else if (str[i] == '�')str[i] += 16;
	}
}

void capitalize(char str[])
{
	to_lower(str);
	if (str[0] >= 'a'&&str[0] <= 'z' || str[0] >= '�' && str[0] <= '�')str[0] -= 32;
	else if (str[0] == '�')str[0] -= 16;
	for (int i = 1; str[i]; i++)
	{
		if ((str[i] >= 'a'&&str[i] <= 'z' || str[i] >= '�' && str[i] <= '�') && str[i - 1] == ' ')str[i] -= 32;
		else if (str[i] == '�' && str[i - 1] == ' ')str[i] -= 16;
	}
}