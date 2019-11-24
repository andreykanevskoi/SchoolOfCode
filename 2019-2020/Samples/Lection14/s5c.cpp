#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	getline(cin, input);
	int words = 0;
	int i = 0;
	while (i < input.length())
	{
		// пропускаем пробелы
		while (input[i] == ' ' && i < input.length())
			i++;
		// если мы не в конце строки
		if (i != input.length())
		{	
			// считаем новое слово
			words++;
			// пропускаем слово по символам
			while (input[i] != ' ' && i != input.length())
				i++;
		}
	}
	cout << words << endl;
	return 0;
}
