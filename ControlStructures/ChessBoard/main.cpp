#include<iostream>
using namespace std;

#define ugolochek_verhnij_levij		(char)218
#define ugolochek_verhnij_pravij	(char)191
#define ugolochek_nignij_levij		(char)192
#define ugolochek_nignij_pravij		(char)217
#define kvadratik					(char)254
#define horizontal_line				(char)196
#define vertical_line				(char)179

void main()
{
	//setlocale(LC_ALL, "");

	/*for (int i = 176; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << i << " - " << (char)i << " \n";
	}
	cout << "\n----------------------------------\n";
	cout << double(5 / 2) << endl;
	cout << (double)5 / 2 << endl;*/

	setlocale(LC_ALL, "Russian");	//¬ключаем –усский €зык
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	setlocale(LC_ALL, "C");	
	for (int i = 0; i <= n; i++)	//—четчик 'i' нумерует строки
	{
		for (int j = 0; j <= n; j++)//—четчик 'j' нумерует столбцы
		{
			if (i == 0 && j == 0)cout << ugolochek_verhnij_levij;
			else if (i == 0 && j == n)cout << ugolochek_verhnij_pravij;
			else if (i == n && j == 0)cout << ugolochek_nignij_levij;
			else if (i == n && j == n)cout << ugolochek_nignij_pravij;
			else if (i == 0 || i == n)cout << horizontal_line << horizontal_line;
			else if (j == 0 || j == n)cout << vertical_line;
			else cout << "  ";
			//cout << "* ";
		}
		cout << endl;
	}
}