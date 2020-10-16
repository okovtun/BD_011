#include<iostream>
#include<conio.h>	//Console Input Output header
using namespace std;
using std::cin;
using std::cout;
using std::endl;

/*
-------------------------------
while		- ���� � ������������
do...while	- ���� � ������������
for			- ���� �� �������� ����� ��������
�������� - ��� ����������� ���������� ���� �����.
���� ����� - ���, ������� ����� ��������� (����������� ���������).
-------------------------------
*/

//#define WHILE_BASICS
//#define PALINDROME

#define Escape 27

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_BASICS
	int i = 0;	//������� �����
	int n;		//���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (n--)
	{
		cout << n << ". Hello World!" << endl;
		//i++;
	}
#endif // WHILE_BASICS

#ifdef PALINDROME
	cout << 7 / 2 << endl;

	int number;	//�����, �������� � ����������
	int reverse_number = 0;
	cout << "������� �����: "; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse_number *= 10;
		reverse_number += buffer % 10;	//�������� % ���������� ������� ������ �����
		buffer /= 10;
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse_number << endl;
	if (number == reverse_number)
	{
		cout << "��� ���������" << endl;
	}
	else
	{
		cout << "��� ������ � ������ ��� ;-)\n";
	}
#endif // PALINDROME


	char key;	//��� �������
	do
	{
		key = _getch();//ASCII
		cout << (int)key << "\t" << key << endl;
	} while (key != Escape);
}