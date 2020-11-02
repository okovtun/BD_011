
#include <iostream>
#include <conio.h>
using namespace std;

#define Esc 27
#define Enter 13
#define Delete 83
#define Backspace 8

#define TYPE long long int

TYPE factorial(TYPE number) //������� ���������� �����.
{
	float result = 1;
	for (int i = 1; i <= number; i++)
	{
		result *= i;
	}
	return result;
}

void main()
{

	setlocale(LC_ALL, "Russian");
	int pascal_cout_row; //��������� ��������� �����
	int spases_count = 25; // ������������ ������������
	cout << "\t   ����� ������������ �������.\n";
	cout << "\t����������� �������� �� 0 �� 12 �������... ������ ������...\n";
	cout << "\t������� ���������� ��������� �����: "; cin >> pascal_cout_row;
	cout << endl;

	for (TYPE n = 0; n <= pascal_cout_row; n++) //����� ������
	{
		for (int i = 0; i < spases_count * 2; i++) cout << " "; //������� ������� ��� ������������ ������������...
		for (int r = 0; r <= n; r++) // ����� �������
		{
			cout.width(4);
			cout << (factorial(n) / (factorial(r) * factorial(n - r))) << ""; //������� �������� ����� C = n! / (r! * (n-r)!)...
		}
		cout << "\n";
		spases_count--;
	} //����� ������� 0 - 12 ������ ������������. ������ ������ :(:(:(

	cout << "\n\n";

	main();
}