#include<iostream>
using namespace std;

//#define ASSIGNMENT_OPERATOR
#define INCREMENT_DECREMENT
//#define COMPAUND_ASSIGNMENTS

void main()
{
	setlocale(LC_ALL, "");
#ifdef ASSIGNMENT_OPERATOR
	//const int a = 2+3;	//Assignment
//cout << a << endl;
//a = 3;
	int a, b, c;
	a = b = c = 0;
	//	   <-----
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	/*int i = 0;
	int j = ++i;
	cout << j << endl;
	cout << i << endl;*/

	int i = 3;
	i += i++ + 1 + (++i *= 2);
	cout << i << endl;

	i += 5;	//Îïåðàòîð ÏÐÈÁÀÂÈÒÜ
	i -= 3;	//Îïåðàòîð ÎÒÍßÒÜ
	i *= 2;
#endif // INCREMENT_DECREMENT

#ifdef COMPAUND_ASSIGNMENTS
	int a = 2;
	//a = a + 3;
	a += 3;
	cout << a << endl;
#endif // COMPAUND_ASSIGNMENTS

}