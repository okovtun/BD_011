#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int a = 2;
	int* pa = &a;
	cout << a << endl;	//������� �������� ���������� 'a' �� �����
	cout << &a << endl;	//�������� ����� ���������� 'a' ����� ��� ����� �� �����
	cout << pa << endl;	//������� ����� ���������� 'a' ���������� � ��������� 'pa'
	cout << *pa << endl;//�������������� ����� � ��������� 'pa', � �������� �������� �� ������

	int* pb;
	int b;
	*pb = &b;
}