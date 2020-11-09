#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	cout << "������� �������� ��������� �������: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//����� ������� �� ����� � �������� �������:
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//����� ��������� �������:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;
	cout << "������� �������������� ��������� �������: " << (double)sum / n << endl;

	//������� �������������� ��������� ���������: 
	int number_of_nulls = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)number_of_nulls++;
	}
	cout << "������� �������������� ��������� ���������: " << (double)sum / (n - number_of_nulls) << endl;

	//����� ������������ � ������������� �������� � �������:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "����������� �������� � �������: " << min << endl;
	cout << "������������ �������� � �������: " << max << endl;
}

/*
-------------------------
������ (Array) - ��� ����� ���������� ������ ����, 
� ����������� ������� ������.

����������� � ������������.

			
			type name[SIZE];
			identiter - ��� ���.
SIZE (������) - 



-------------------------
*/