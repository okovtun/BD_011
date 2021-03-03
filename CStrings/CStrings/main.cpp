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

//Numeric functions
bool is_int_number(char str[]);//���������� ������� (Function declaration)
int  to_int_number(char str[]);
bool is_bin_number(char str[]);
int  bin_to_dec(char str[]);

//#define BASE_STRING_OPERATIONS

void main()
{
	setlocale(LC_ALL, "Rus");
	system("CHCP 1251");
	system("CLS");
#ifdef BASE_STRING_OPERATIONS
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
//char str[] = "Hello";
	const int n = 256;
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
	shrink(str);
	cout << str << endl;
	cout << (is_palindrome(str) ? "��" : "���") << endl;
	cout << str << endl;
#endif // BASE_STRING_OPERATIONS
	//ASCII();
	const int n = 256;
	char str[n] = {};
	cout << "������� ������: ";
	cin.getline(str, n);
	/*cout << (is_int_number(str) ? "�����" : "�� �����") << endl;
	cout << to_int_number(str) * 2 << endl;*/

	cout << "������ " << (is_bin_number(str) ? "" : "�� ") << "�������� �������� ������" << endl;
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

void shrink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == ' ' && str[i + 1] == ' ')
		{
			for (int j = i; str[j]; j++)//�������� ����� ������ �����
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
	//���������� ����� ������
	int size = StrLen(str);
	char* buffer = new char[size + 1]{};
	//for (int i = 0; str[i]; i++)buffer[i] = str[i];
	strcpy(buffer, str);//String Copy. 
						//buffer - ������ ����������, 
						//str - ������ ��������
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

bool is_int_number(char str[])//���������� ������� (����������� ������� - Function definition)
{
	for (int i = 0; str[i]; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9') && str[i] != ' ')return false;
		if (str[i] == ' ' && str[i + 1] == ' ')return false;
	}
	return true;
}
int  to_int_number(char str[])
{
	if (!is_int_number(str))return 0;
	int number = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == ' ')continue;
		number *= 10;//�������� ����� �� ������ ����� (����������� ������� ������)
		number += str[i] - 48;
	}
	return number;
}
bool is_bin_number(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] != '0' && str[i] != '1')return false;
	}
	return true;
}
int  bin_to_dec(char str[])
{
	//TODO: 
	//�������� �������� ��������� ����� � ���������� ��
}