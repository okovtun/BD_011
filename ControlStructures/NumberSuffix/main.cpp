#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int money;
	cout << "������� �����: "; cin >> money;
	cout << "� ���: " << money << " ";
	if (money % 100 >= 10 && money % 100 <= 20 || money % 10 >= 5 && money % 10 < 10 || money % 10 == 0)
	{
		cout << " ������";
	}
	else if (money % 10 >= 2 && money % 10 <= 4)
	{
		cout << " �����";
	}
	else
	{
		cout << " �����";
	}
}