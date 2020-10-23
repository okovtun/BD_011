#include<iostream>
#include<conio.h>
using namespace std;

long double fact(int N)
{
	if (N < 0)  return 0;
	if (N == 0) return 1;
	else return N * fact(N - 1);
}

//#define FACTORIAL_1
//#define FACTORIAL_2
#define ASCII
//#define DEGREE

int main()
{
	setlocale(LC_ALL, "");
#ifdef FACTORIAL_1
	int N;
	cout << "¬ведите число дл€ факториала:";
	cin >> N;
	cout << "‘акториал дл€ числа" << N << "=" << fact(N) << endl;
#endif // FACTORIAL_1

#ifdef FACTORIAL_2
	int factorial;
	int N;
	int F = 1;
	cout << "¬ведите число дл€ факториала:";
	cin >> N;
	if (N < 0)
	{
		cout << "Error" << endl;
		return 0;
	}
	for (int i = 1; i <= N; ++i)
	{
		F *= i;
	}

	if (N >= 0)
	{
		cout << F << endl;
	}
	else
	{
		cout << "ќшибка : N < 0";
	}
	return 0;
}
#endif //FACTORIAL_2

#ifdef ASCII

for (int i = 0; i <= 255; i++)
{
	//printf(" %3d-%c", i, i);
	cout << (char)i << " ";
	if (i % 16 == 0) cout<<"\n";
}
cout<<"\n";
#endif //ASCII

#ifdef DEGREE

double a, b, d;
int n, i;
cout << "¬ведите число:" << endl;
cin >> a;
b = a;
d = a;
cout << "¬ведите степень:" << endl;
cin >> n;
if (n > 0)
{
	for (i = 1; i < n; i++)
	{
		a = d * b;
		d = a;
	}
}
else if (n < 0)
{
	a = 1;
	for (i = 0; i > n; i = i - 1)
	{
		a = a / b;
	}
}
else if (n == 0)
{
	a = 1;
}
cout << a << endl;
#endif DEGREE

return 0;
}