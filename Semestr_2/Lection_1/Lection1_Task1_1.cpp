/*
Задание:
С использованием string ввести с клавиатуры строку. Вывести её наоборот.

Выполнил:
Каневской Андрей

Школа Кода 
2019г.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sInputString;

	cin >> sInputString;

	for (int i = sInputString.length() - 1; i >= 0; i--)
		cout << sInputString[i];

	return 0;
}