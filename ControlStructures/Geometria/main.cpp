#include<iostream>
#include<conio.h>
using namespace std;

//#define ROMBUS

void main()
{
	setlocale(LC_ALL, "");

	/*char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (true);*/

	int n;
	cout << "������� ������ ������: "; cin >> n;
#ifdef ROMBUS
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}
		cout << "/";
		for (int j = 0; j < i; j++)cout << "  ";
		cout << "\\";
		cout << endl;
	}
#endif // ROMBUS
	//int counter = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2)cout << "+ ";else cout << "- ";
			//((i + j) % 2 == 0) ? cout << "+ " : cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;
		//if(n%2==0)counter++;
	}
}