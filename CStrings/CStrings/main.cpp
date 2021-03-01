#include<iostream>
#include<Windows.h>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;

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
void shrink(char str[]);
void remove_symbol(char str[], char symbol);
bool is_palindrome(char str[]);

void main()
{
	setlocale(LC_ALL, "Rus");
	system("CHCP 1251");
	system("CLS");
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	//char str[] = "Hello";
	const int n = 256;
	char str[n];
	//ASCII();
	cout << "Введите строку: ";
	//SetConsoleCP(1251);
	//cin >> str;
	cin.getline(str, n);
	//SetConsoleCP(866);
	cout << str << endl;
	cout << "Размер строки в Байтах:  " << sizeof(str) << endl;
	cout << "Размер строки в символах:" << StrLen(str) << endl;
	to_upper(str);
	cout << str << endl;
	capitalize(str);
	cout << str << endl;
	shrink(str);
	cout << str << endl;
	cout << (is_palindrome(str) ? "Да" : "Нет") << endl;
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
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'а' && str[i] <= 'я')
		{
			str[i] -= 32;
		}
		else if (str[i] == 'ё')str[i] -= 16;
	}
}

void to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'А' && str[i] <= 'Я')
		{
			str[i] += 32;
		}
		else if (str[i] == 'Ё')str[i] += 16;
	}
}

void capitalize(char str[])
{
	to_lower(str);
	if (str[0] >= 'a'&&str[0] <= 'z' || str[0] >= 'а' && str[0] <= 'я')str[0] -= 32;
	else if (str[0] == 'ё')str[0] -= 16;
	for (int i = 1; str[i]; i++)
	{
		if ((str[i] >= 'a'&&str[i] <= 'z' || str[i] >= 'а' && str[i] <= 'я') && str[i - 1] == ' ')str[i] -= 32;
		else if (str[i] == 'ё' && str[i - 1] == ' ')str[i] -= 16;
	}
}

void shrink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == ' ' && str[i + 1] == ' ')
		{
			for (int j = i; str[j]; j++)//Сдвигает часть строки влево
			{
				str[j] = str[j + 1];
			}
		}
	}
}

void remove_symbol(char str[], char symbol)
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == symbol)
		{
			for (int j = i; str[j]; j++)str[j] = str[j + 1];
		}
	}
}

bool is_palindrome(char str[])
{
	//Определяем длину строки
	int size = StrLen(str);
	char* buffer = new char[size + 1]{};
	//for (int i = 0; str[i]; i++)buffer[i] = str[i];
	strcpy(buffer, str);//String Copy. 
						//buffer - строка получатель, 
						//str - строка источник
	to_lower(buffer);
	remove_symbol(buffer, ' ');
	size = strlen(buffer);
	for (int i = 0; i < size / 2; i++)
	{
		if (buffer[i] != buffer[size - 1 - i])
		{
			delete[] buffer;
			return false;
		}
	}
	delete[] buffer;
	return true;
}