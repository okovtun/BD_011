#include<iostream>

template<typename T>void Random(T& variable)
{
	if (typeid(variable) == typeid(int))
	{
		variable = rand() % 100;
	}
	else if (typeid(variable) == typeid(float) || typeid(variable) == typeid(double))
	{
		variable = double(rand() % 10000) / 100;
	}
	else if (typeid(variable) == typeid(char))
	{
		variable = rand();
	}
	else
	{
		variable = T();	//«аписываем в переменную значение по умолчанию
	}
}

template<typename T>void FillRand(T arr[], const int n, int maxRand, int minRand)
{
	for (int i = 0; i < n; i++)
	{
		//arr[i] = rand() % (maxRand - minRand) + minRand;
		Random(arr[i]);
	}
}
template<typename T>void FillRand(T** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//arr[i][j] = rand() % 100;
			Random(arr[i][j]);
		}
	}
}