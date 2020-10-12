#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	//cout << (!true == false) << endl;
	//		Control structures
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature > 80)
	{
		cout << "Вы на другой планете" << endl;
	}
	if(temperature > 50)
	{
		cout << "Вы на экваторе" << endl;
	}
	if (temperature > 40)
	{
		cout << "Аццки жарко" << endl;
	}
	if (temperature > 30)
	{
		cout << "Жарко" << endl;
	}
	if (temperature > 15)
	{
		cout << "Тепло" << endl;
	}
	if (temperature > 0)
	{
		cout << "Прохладно" << endl;
	}
	else
	{
		cout << "Зима" << endl;
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