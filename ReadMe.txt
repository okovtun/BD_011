﻿https://github.com/okovtun/BD_011
https://www.youtube.com/watch?v=JcxXWXfzvh0&list=PLeqyOOqxeiIOAV6jwf66i0qm7tLMGSQZn&index=1&t=1316s

TODO:
Из файла 201 HW.txt (https://github.com/okovtun/BD_011/blob/master/Files/ColumnExchange/201%20HW.txt) создать новый файл, например 201ready.txt и в новом фале поменять местами столбики с MAC-адресом, и IP-адресом. Имя исходного фала и нового файладолжно вводиться с клавиатуры;


TODO:
В проект CStrings добавить функции:
bool is_ip_address(char str[]);	//Проверяет, является ли строка IP-адресом
bool is_mac_address(char str[]);//Проверяет, является ли строка MAC-адресом

DONE:
void to_upper(char str[]);	//переводит строку в верхний регистр				DONE
void to_lower(char str[]);	//переводит строку в нижний регистр				DONE
void capitalize(char str[]);	//первую букву каждого слова в предложении делает заглвыной	DONE

void shrink(char str[]);	//удаляет лишние пробелы из предложения, например: DONE 
							//Харашо      живет   на   свете          Винни Пух!
							//Харашо живет на свете Винни Пух!
bool is_palindrome(char str[]);	//Определяет, является ли строка палиндромом. DONE


bool is_int_number(char str[]);	//Определяет, является ли строка целым числом.					DONE
int  to_int_number(char str[]);	//Если строка - целое число, то функция возвращает его значение.DONE

bool is_bin_number(char str[]);	//Определяет, является ли строка Двоичным числом.				DONE
int  bin_to_dec(char str[]);	//Если строка - Двоичное число, то функция возвращает его десятичное значение.	DONE
bool is_hex_number(char str[]);	//Определяет, является ли строка Шестнадцатеричным числом.			DONE
int  hex_to_dec(char str[]);	//Если строка - Шестнадцатеричное число, то функция возвращает его десятичное значение.DONE

DONE:
1. Перегрузить функцию FillRand для типов float, double и char, как для одномерных, так и для двумерных массивов; DONE
2. Закоммитить шаблонные функции после проверки с каждым типом данных; 	DONE
3. Создать ветку "dynamic_templated_separated", и в этой ветке вынести функции в отдельные файлы.

DONE:
Создать ветку DynamicTemplated и в ней шаблонизировать все функции в проекте DynamicMemory:

1. Вывести двумерный динамический массив на экран используя арифметику указателей и оператор разыменования; NEDONE
2. Код, выделяющий память под массив вынести в функцию ??? Allocate(???);		DONE
3. Код, удаляющий двумерный массив вынести в функцию ??? Clear(???);			DONE
4. Написать функцию ??? push_row_back(???), которая добавляет строку в конец двумерного динамического массива;	DONE
5. Написать функцию ??? push_row_front(???), которая добавляет строку в начало двумерного динамического массива;DONE
6. Написать функцию ??? insert_row(???), которая вставляет строку в двумерный динамического массив по указанному индексу;DONE

7. Написать функцию ??? pop_row_back(???), которая удаляет строку в конец двумерного динамического массива;	DONE
8. Написать функцию ??? pop_row_front(???), которая удаляет строку в начало двумерного динамического массива;	DONE
9. Написать функцию ??? erase_row(???), которая удаляет строку из двумерный динамического массив по указанному индексу;


10. Написать функцию ??? push_col_back(???), которая добавляет столбик в конец двумерного динамического массива;	DONE
11. Написать функцию ??? push_col_front(???), которая добавляет столбик в начало двумерного динамического массива;	DONE
12. Написать функцию ??? insert_col(???), которая вставляет столбик в двумерный динамического массив по указанному индексу;	DONE

13. Написать функцию ??? pop_col_back(???), которая удаляет столбик в конец двумерного динамического массива;
14. Написать функцию ??? pop_col_front(???), которая удаляет столбик в начало двумерного динамического массива;
15. Написать функцию ??? erase_col(???), которая удаляет столбик из двумерного динамического массива по указанному индексу;

DONE:
В проект DynamicMemory добавить функции:
void insert();	//Вставляет значение в массив по указанному индексу;	DONE
void pop_back();//Удаляет значение с конца массива			DONE
void pop_front();//Удаляет значение с начала массива			DONE
void erase();	//Удаляет значение из массива по указанному индексу

DONE:
В проект DynamicMemory добавить алгоритм добавления элемента в конец массива.

DONE:
Есть массив, заполненный случайными числами. Необходимо создать еще два массива минимально возможного размера для четных и нечетных значиний из исходного массива.
В массив even вынести четные значения, а в массив odd - нечетные.

DONE:
Поменять местами две переменные без использования третьей переменной.
Это можно сделать арифметическими либо побитовыми операторами.
http://cplusplus.com/doc/tutorial/operators/

TOREAD:
http://cplusplus.com/doc/tutorial/arrays/

!!!Теперь домашки присылаем через GitHub, бросайте ссылку на репозиторий!!!

TODO:
1. Написать функцию 
	int Sum(int n, ...); 
   с произвольным числом параметров, которая будет возвращать сумму всех переданных в нее значений;
2. Написать функцию 
	int Mul(int n, ...); 
   с произвольным числом параметров, которая будет возвращать произведение всех переданных в нее значений;

DONE:
1. Проверка на ничью;
2. Предложить сыграть еще раз;

DONE:
Вместо циферки в клеточку должен ставиться крестик либо нолик.

DONE:
Написать перегруженные функции для одномерного и двумерного массива типа int, float, double, char:
... FillRand(...);
... Print(...);
... Sum(...);
... Avg(...);		//Возвращает среднее арифметическое элементов массива
... minValueIn(...);
... maxValueIn(...);
... Sort();	//Сортирует массив
... Shift();	//Циклически сдвигает массива на заданное число элементов в указанном направлении

DONE:
Добить Саррюса

DONE:
В проект Functions\Arrays добавить функции:
??? Sum(???);	//возвращает сумму элементов массива
??? Avg(???);	//возвращает среднее арифметическое элементов массива
??? minValueIn(???);	//возвращает минимальное значение из массива
??? maxValueIn(???);	//возвращает максимальное значение из массива
??? Sort(???);	//Сортирует массив в порядке возрастания

DONE:
1. Написать программу, которая перемножает две матрицы C=A*B; DONE
2. Вычислить определитель матрицы третьего парядка методом Саррюса;
3. Написать процедуру деления матриц.

DONE:
Одномерный массив из десяти элементов заполнить случайными числами, после чего найти в нем повторяющиеся значения, вывести их на экран, а также вывести на экран количество повторений каждого найденного значения.

DONE:
1. Массив, заполненный случайными числами, отсортировать в порядке возрастания;
2. Массив из 10ти элементов заполнить уникальными случайными числами, от 0 до 10;

DONE:
1. Добить циклический сдвиг массива на заданное число элементов влево.
2. Обеспечить такой же сдвиг массива, только вправо.

DONE:
1.	Объявить массив на 5 элементов, ввести все его элементы с клавиатуры, и вывести его на экран в прямом и в обратном порядке.
2.	Найти среднее арифметическое всех элементов введенного массива.
3.	Найти среднее арифметическое всех ненулевых элементов введенного массива.
4.	В вышеуказанном массиве найти минимальный и максимальный элемент и вывести их на экран.

===============================================================================================================

TOREAD:
http://cplusplus.com/doc/tutorial/control/

TODO:
Вывести в консоль все фигуры из файла Geometria1.txt

DONE:
0. Вывести на экран ряд Фибоначчи, до числа, введенного с клавиатуры;
1. Вывести на экран заданное количество чисел из ряда Фибоначчи;
2. Вывести на экран таблицу Умножения;
3. Вывести на экран таблицу Пифагора;
4. Вывести на экран ряд простых чисел, до введенного с клавиатуры. Простым называется число, котоое делится только на себя, и на единицу.

DONE:
1. При помощи цикла for вычислить факториал числа, введенного с клавиатуры;

			5! = 1*2*3*4*5 = 120;

2. При помощи цикла for возвести указанного число, в указанную степень. Основание и показатель степени вводятся с клавиатуры;
3. Используя цик for вывести на экран таблицу ASCII-символов по 16 в каждой строке;

TODO:
Написать калькулятор с накоплением результата.

DONE:
Написать программу 3Dshooter, которая выводит на экран действие пользователя, в зависимости от нажатой клавиши:
w - вперед
s - назад
a - влево
d - вправо
space - прыжок
enter - огонь
escape - выход.

DONE:
Пользователь вводит число, а программа говорит, введенное число Палиндром, или нет.
12321
1221
223353322
5

DONE:
0. Пользователь вводит число. Если это число в промежутке от 0 до 10, программа выдает "Вы попали", в противном случае - "Вы промазали".
1. Написать программу для тестирования на 5 вопросов, по 4 варианта ответа. Варианты ответа обозначаются буквами ABCD. Если пользователь ответил на вопрос правильно, то программа ему об этом говорит, и добавляет один бал, в противном случае, программа просто говорит, что ответ неправильный, и задается следующий вопрос.

На какой планете мы живем?
A. Меркурий;
B. Венера;
C. Земля;
D. Марс;
Ваш ответ: _

2. Написать программу "Калькулятор", которая умеет вычислять выражения вида 2+3
	2+3=5;

DONE:
Что будет выведено на экран:

----------------------------- 1 --------------------------------

int i = 3;
i = ++i + ++i;
cout << i << endl;

----------------------------- 2 --------------------------------

int i = 3;
i = i++ + ++i;
cout << i << endl;

----------------------------- 3 --------------------------------

int i = 3;
i = i++ + 1 + ++i * 2;
cout << i << endl;

----------------------------- 4 --------------------------------

int i = 3;
i = i++ + 1 + ++i *= 2;
cout << i << endl;

----------------------------- 5 --------------------------------

int i = 3;
i += i++ + 1 + ++i *= 2;
cout << i << endl;