#include"Functions.h"
#include"Functions.cpp"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� ������� ���� int: " << Sum(arr, n) << endl;
	cout << "������� �������������� : " << Avg(arr, n) << endl;
	cout << "����������� �������� : " << minValueIn(arr, n) << endl;
	cout << "������������ �������� : " << maxValueIn(arr, n) << endl;
	cout << "��������������� ������  :\n";
	Sort(arr, n);
	Print(arr, n);


	cout << "���������� ������ ���� double: \n";
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "����� ��������� �������: " << Sum(brr, n) << endl;
	cout << "������� �������������� : " << Avg(brr, n) << endl;
	cout << "����������� ��������: " << minValueIn(brr, n) << endl;
	cout << "������������ ��������: " << maxValueIn(brr, n) << endl;
	cout << "��������������� ������  :\n";
	Sort(brr, n);
	Print(brr, n);


	cout << "���������� ������ ���� char: \n";
	char crr[n];
	FillRand(crr, n);
	Print(crr, n);
	cout << "����� ��������� �������: " << Sum(crr, n) << endl;
	cout << "������� �������������� : " << Avg(crr, n) << endl;

	cout << "���������� ������ ���� float: \n";
	float frr[n];
	FillRand(frr, n);
	Print(frr, n);
	cout << "����������� ��������: " << minValueIn(frr, n) << endl;
	cout << "������������ ��������: " << maxValueIn(frr, n) << endl;
	cout << "����� ��������� �������: " << Sum(frr, n) << endl;
	cout << "������� �������������� : " << Avg(frr, n) << endl;


	cout << "��������� ������ ���� int: \n";
	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "������� �������������� : " << Avg(arr2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr2, ROWS, COLS) << endl;
	cout << "���������� �������: \n";
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);


	cout << "��������� ����� ���� double:\n";
	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(brr2, ROWS, COLS) << endl;
	cout << "������� �������������� : " << Avg(brr2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr2, ROWS, COLS) << endl;


	cout << "��������� ����� ���� char:\n";
	char crr2[ROWS][COLS];
	FillRand(crr2, ROWS, COLS);
	Print(crr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(crr2, ROWS, COLS) << endl;
	cout << "������� �������������� : " << Avg(crr2, ROWS, COLS) << endl;


	cout << "��������� ����� ���� float:\n";
	float frr2[ROWS][COLS];
	FillRand(frr2, ROWS, COLS);
	Print(frr2, ROWS, COLS);
	cout << "����������� �������� � �������: " << minValueIn(frr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(frr2, ROWS, COLS) << endl;
	cout << "����� ���������: " << Sum(frr2, ROWS, COLS) << endl;
	cout << "������� ��������������: " << Avg(frr2, ROWS, COLS) << endl;
	cout << "��������������� float:\n";
	Sort(frr2, ROWS, COLS);
	Print(frr2, ROWS, COLS);
}
