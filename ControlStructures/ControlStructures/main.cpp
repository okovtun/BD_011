#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	//cout << (!true == false) << endl;
	//		Control structures
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature > 80)
	{
		cout << "�� �� ������ �������" << endl;
	}
	if(temperature > 50)
	{
		cout << "�� �� ��������" << endl;
	}
	if (temperature > 40)
	{
		cout << "����� �����" << endl;
	}
	if (temperature > 30)
	{
		cout << "�����" << endl;
	}
	if (temperature > 15)
	{
		cout << "�����" << endl;
	}
	if (temperature > 0)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "����" << endl;
	}

}
	/*
	|| - OR
	0+0+0+1+0+1+1+1 = 1
	1+0+0+0+1+0+1+0 = 1
	&& - AND
	1*1*1*0*1*1*1 = 0
	0*1*1*1*1*1*1 = 0
	*/