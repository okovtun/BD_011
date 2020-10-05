#include<iostream>
using namespace std;

//#define ASSIGNMENT_OPERATOR
//#define INCREMENT_DECREMENT

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
	int i = 0;
	int j = ++i;
	cout << j << endl;
	cout << i << endl;
#endif // INCREMENT_DECREMENT
	
	int a = 2;
	//a = a + 3;
	a += 3;
	cout << a << endl;
}