/*
Задание:
С использованием string ввести с клавиатуры строку. 
Составить для этой строки палиндром и вывести его на экран.

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

	int nCurChar = sInputString.length() - 2;
	while (nCurChar >= 0)
	{
		sInputString.push_back(sInputString[nCurChar--]);
	}

	cout << sInputString << endl;

	return 0;
}