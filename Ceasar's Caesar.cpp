#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const int k = 2;
	const int n = 33;
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
	for (int i = 0; i < strlen(string); i++)
	{
		string[i] = (string[i] + k) % (n + __toascii('А'));
	}
	cout << '\n' << "Строка после шифрования:" << endl;
	cout << string << endl;
	for (int i = 0; i < strlen(string); i++)
	{
		string[i] = (string[i] - k - (n + __toascii('А'))) % (n + __toascii('А'));
	}
	cout << '\n' << "Расшифрованная строка:" << endl;
	cout << string << endl;
	return 0;
}
