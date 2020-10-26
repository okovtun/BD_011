#include<iostream>
using namespace std;

#define FIBONACCI_1

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество чисел Фибоначчи: ";	cin >> n;
	unsigned long long int a = 0;
	unsigned long long int b = 1;
	unsigned long long int c;

	double da = 0;
	double db = 1;
	//double dc;
	for (int i = 0; i < n; i++)
	{
		cout << i << " - " << a << "\t\t\t\t";
		c = a + b;
		a = b;
		b = c;

		cout << da << "\n";
		//dc = da + db;
		da = db;
		db = da+db;
	}
	cout << endl;
}