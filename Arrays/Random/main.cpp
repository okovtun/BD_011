#include<iostream>
#include<time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;


}