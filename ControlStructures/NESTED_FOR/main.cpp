#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n = 10;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << i << "\t" << j << endl;
		}
	}
}