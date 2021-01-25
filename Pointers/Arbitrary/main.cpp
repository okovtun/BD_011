#include<iostream>
using namespace std;

int Sum(int n/*Количество передаваемых аргументов*/, 
	int value/*Первый аргумент*/, ...)
{
	int sum = 0;
	int* start = &value;
	for (int i = 0; i < n; i++)
	{
		sum += *start++;
	}
	return sum;
}
int Mul(int value ...)
{
	int product = 1;
	int* start = &value;
	while (*start != int())
		product *= *start++;
	return product;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << Sum(6, 2, 3, 5, 8, 13, 21) << endl;
	cout << Mul(6, 2, 3, 5, 8, 13, 21, int()) << endl;
	cout << int() << endl;
}