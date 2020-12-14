#pragma once
#include<iostream>
using namespace std;

//		VCS - Version Constrol Systems
//Scram, Agile, ...
//Jira, SVN, Subversion, Git
//GitHub
//Commit

//			Перегрузка функций (Function overloading):

const int ROWS = 8;
const int COLS = 5;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int m, const int n);
void FillRand(double arr[ROWS][COLS], const int m, const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);
void Print(double arr[ROWS][COLS], const int m, const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int m, const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int m, const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);