#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 200000;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;*/

	////////////////	����� ����������	//////////////////
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;	//���� ������� ���������� ������? ���������, ��� �������� ����� �� �����������, ��
		//��� ����� ���������:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;	//��, �������� ����������� �����
				break;
			}
		}
		//if (met_before)continue;
		if (!met_before)
		{
			int count = 1;
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j])count++;
			}
			if (count > 10)cout << arr[i] << " ����������� " << count << " ���\n";
		}
	}
}