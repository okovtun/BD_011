#pragma once
#include<iostream>

using namespace std;

//Олег, я сдаюсь код упал на сортировке двумерного массива и я не знаю почему это произошло.
//Так же не сделал shift... 
// В целом домашка далека от идеала :(


const int ROWS = 8;
const int COLS = 5;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int m, const int n);
void FillRand(double arr[ROWS][COLS], const int m, const int n);
void FillRand(char arr[ROWS][COLS], const int m, const int n);
void FillRand(float arr[ROWS][COLS], const int m, const int n);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int m, const int n);

template<typename T>void Sort(T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], const int m, const int n);

template<typename T>T Sum(T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int m, const int n);

template<typename T>double Avg(T arr[], const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int m, const int n);

template<typename T>T minValueIn(T arr[], const int n);
template<typename T>T maxValueIn(T arr[], const int n);

template<typename T>T minValueIn(T arr[ROWS][COLS], const int m, const int n);
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int m, const int n);