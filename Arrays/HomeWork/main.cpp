#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	double c = 0;
	int b = 0;
	double d = 0;
	int arr[5];
	int max;
	int min;
	/*cout << "Ввдеите первое число массива: " << endl; cin >> arr[0];
	cout << "Ввдеите второе число массива: " << endl; cin >> arr[1];
	cout << "Ввдеите третье число массива: " << endl; cin >> arr[2];
	cout << "Ввдеите четвертое число массива: " << endl; cin >> arr[3];
	cout << "Ввдеите пятое число массива: " << endl; cin >> arr[4];*/

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	// 1. Прямой порядок
	cout << "Порядок по возрастанию: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	// 2. Обратный порядок
	cout << "ПОрядок по умньшению: ";
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		d += arr[i];
	}
	d = d / n;
	//2. 
	cout << "Среднее арифметическое всех элементов массива: " << d << endl;


#ifdef Sredn_arifm!=0 
	for (int i = 0; i < n; i++)
	{

		if (arr[i] != 0)
		{

			cout << i << endl;
			c += arr[i];
		}
	}
	cout << "Среднее арифметическое всех ненулевых элементов массива: " << c << endl;

#endif // Sredn_arifm!=0



	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
	}

	cout << "Max: " << max << endl;

	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];

	}
	cout << "Min: " << min << endl;
}