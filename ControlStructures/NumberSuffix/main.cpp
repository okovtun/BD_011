#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int money;
	cout << "Введите сумму: "; cin >> money;
	cout << "С Вас: " << money << " ";
	if (money % 100 >= 10 && money % 100 <= 20 || money % 10 >= 5 && money % 10 < 10 || money % 10 == 0)
	{
		cout << " рублей";
	}
	else if (money % 10 >= 2 && money % 10 <= 4)
	{
		cout << " рубля";
	}
	else
	{
		cout << " рубль";
	}
}