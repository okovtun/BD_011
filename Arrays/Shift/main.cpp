#include<iostream>
using namespace std;

//����������� ����� ������� �� 3 �������� �����:
//	1	2	3	4	5	6	7	8	9	10	- �������� ������.
//	2	3	4	5	6	7	8	9	10	1
//	3	4	5	6	7	8	9	10	1	2
//	4	5	6	7	8	9	10	1	2	3	- �������� ������.

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}