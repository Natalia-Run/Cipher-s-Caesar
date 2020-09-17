#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const int k = 2;
	const int n = 33;
	char string[] = "Булочка"
		"с"
		"корицей"
		"лежит"
		"на"
		"самой"
		"верхней"
		"полке";
	cout << string;
	for (int i = 0; i < strlen(string); i++)
	{
		string[i] = (string[i] + k) % (n + __toascii('А'));
	}
	cout << string;
	for (int i = 0; i < strlen(string); i++)
	{
		string[i] = (string[i] - k - (n + __toascii('А'))) % (n + __toascii('А'));
	}
	cout << string;
	return 0;
}
