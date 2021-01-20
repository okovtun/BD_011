#include<iostream>
using namespace std;

//#define POINTERS_BASICS
#define POINTERS_AND_ARRAYS

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;
	cout << a << endl;	//������� �������� ���������� 'a' �� �����
	cout << &a << endl;	//�������� ����� ���������� 'a' ����� ��� ����� �� �����
	cout << pa << endl;	//������� ����� ���������� 'a' ���������� � ��������� 'pa'
	cout << *pa << endl;//�������������� ����� � ��������� 'pa', � �������� �������� �� ������

	int* pb;
	int b = 3;
	pb = &b;
	//(int*) (int*)
		/*double price = 2.55;
		int count = price;
		cout << count << endl;*/
#endif // POINTERS_BASICS

#ifdef POINTERS_AND_ARRAYS
	const int n = 5;
	int arr[n] = { 3, 5, 8, 13, 21 };
	cout << arr << endl;
	cout << *arr << endl;

	//Pointer arithmetics: +, -, ++, --

	/*
	--------------------
	char*	- 1Byte;
	short*	- 2Byte;
	int*	- 4Byte;
	double* - 8Byte;
	--------------------
	*/

	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
#endif // POINTERS_AND_ARRAYS
	
	//Function doesn't take N arguments
	INT_MAX;
	//Type();
	cout << int() << endl;
	cout << double() << endl;
}