﻿// подключаем библиотеки, необходимой для ввода-вывода на консоль
#include <iostream>
// задаём пространство имён, определяющая область, на которую приходятся действия оператора или функции
using namespace std;
int main()
{
// настройка локальных параметров: выбор русского языка в консоли
	setlocale(LC_ALL, "Russian");
/* задаём ключ, который показывает на сколько у нас будут сдвигаться символы от первоначального положения:
   на два шага вправо от первоначального значения*/	
	const int k = 2;
// задаём количество букв в русском алфавите	
	const int n = 33;
// используем данную переменную для работы со строками
	char string[] = "Булочка "
		"с "
		"корицей "
		"лежит "
		"на "
		"самой "
		"верхней "
		"полке ";
	cout << "Строка до шифрования:" << endl;
	cout << string << endl;
// функция, отвечающая за сдвиг всех символов на два шага вправо	
	for (int i = 0; i < strlen(string); i++)
	{
// к каждой букве в строке добавляем ключ к, равный 2. Происходит смещение на две буквы и всей строки, в общем		
		string[i] = (string[i] + k) % (n + __toascii('А'));
	}
	cout << '\n' << "Строка после шифрования:" << endl;
	cout << string << endl;
// обратная функция: сдвиг всех символов на два шага влево, то есть возращение в первоначальное положение	
	for (int i = 0; i < strlen(string); i++)
	{
/* от каждой буквы в зашифрованной строке отнимаем ключ к, равный 2. Происходит возращение всей строки
    в первоначальное положение: строка до шифрования*/
		string[i] = (string[i] - k - (n + __toascii('А'))) % (n + __toascii('А'));
	}
	cout << '\n' << "Расшифрованная строка:" << endl;
	cout << string << endl;
	return 0;
}