#include<iostream>
#include<fstream>
using namespace std;
//cin/cout и fin/fout

//#define WRITE_TO_FILE
#define READ_FROM_FILE

void main()
{
	setlocale(LC_ALL, "");
#ifdef WRITE_TO_FILE
	//1) Создаем поток вывода (записи) в файл;
	ofstream fout;
	//2) Открываем поток:
	fout.open("File.txt", ios::app/*append*/);
	//3) Выводим нужную информацию в файл:
	fout << "Hello World!" << endl;;
	//4) Закрываем поток:
	fout.close();
	system("notepad file.txt");
#endif // WRITE_TO_FILE

	//1) Создаем поток:
	ifstream fin;
	//2) Открываем поток:
	fin.open("File.txt");
	//3) Чтение из файла:

	const int n = 256;
	char sz_buffer[n]{};	//sz - String zero (Строка, заканчивающаяся нулем) Венгерская нотация: 
							//https://ru.wikipedia.org/wiki/%D0%92%D0%B5%D0%BD%D0%B3%D0%B5%D1%80%D1%81%D0%BA%D0%B0%D1%8F_%D0%BD%D0%BE%D1%82%D0%B0%D1%86%D0%B8%D1%8F	
	if (fin.is_open())
	{
		while (!fin.eof())//eod() - функция, которая определяет, достигли мы конец файла, или нет (End Of File).
		{
			//fin >> sz_buffer;
			fin.getline(sz_buffer, n);
			cout << sz_buffer << endl;
		}
	}

	//4) Закрываем поток:
	fin.close();
}