#include<iostream>

using namespace std;

#define ugolochek_verhnij_levij            (char)218
#define ugolochek_verhnij_pravij           (char)191
#define ugolochek_nignij_levij             (char)192
#define ugolochek_nignij_pravij            (char)217
#define kvadratik                          (char)219
#define hirizontal_line                    (char)196
#define vertical_line                      (char)179


void main()
{
	//setlocale(LC_ALL, "");
	for (int i = 176; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << i << " - " << (char)i << " \n";
	}
	cout << "\n-----------------------------\n";
	cout << double(5 / 2) << endl;
	cout << (double)5 / 2 << endl;

	setlocale(LC_ALL, "Russian"); //Включаем русский язык
	int n;
	cout << "Введите размер фигуры: "; cin >> n; n++;
	setlocale(LC_ALL, "C"); // Возвращаем кодировку по умолчанию
	for (int i = 0; i <= n; i++) // Счетчик 'i' нумерует строки
	{
		for (int j = 0; j <= n; j++) // Счетчик 'j' нумерует столбцы
		{
			if (i == 0 && j == 0)cout << ugolochek_verhnij_levij;
			else if (i == 0 && j == n)cout << ugolochek_verhnij_pravij;
			else if (i == n && j == 0)cout << ugolochek_nignij_levij;
			else if (i == n && j == n)cout << ugolochek_nignij_pravij;
			else if (i == 0 || i == n)cout << hirizontal_line << hirizontal_line;
			else if (j == 0 || j == n)cout << vertical_line;
			else ((i + j) % 2 == 0 ? cout << kvadratik << kvadratik : cout << "  ");

			/*if (i == 1 && j == 1) cout << kvadratik;
			else if (i == 3 && j == 1)cout << kvadratik;
			else if (i == 5 && j == 1)cout << kvadratik;
			else if (i == 7 && j == 1)cout << kvadratik;

			if (i == 2 && j == 2) cout << kvadratik;
			else if (i == 4 && j == 2)cout << kvadratik;
			else if (i == 6 && j == 2)cout << kvadratik;
			else if (i == 8 && j == 2)cout << kvadratik;

			if (i == 1 && j == 3) cout << kvadratik;
			else if (i == 3 && j == 3)cout << kvadratik;
			else if (i == 5 && j == 3)cout << kvadratik;
			else if (i == 7 && j == 3)cout << kvadratik;*/




			//cout << "* ";
		}
		cout << endl;
	}



}