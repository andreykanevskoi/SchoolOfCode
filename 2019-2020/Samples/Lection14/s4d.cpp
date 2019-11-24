#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	getline(cin, input);
	int abbr = 0;
	int i = 0;
	while (i < input.size())
	{
		// пропускаем пробелы
		while (input[i] == ' ' && i < input.size())
			i++;
		string word;
		// если строка не кончилась, мы оказались на слове
		// считываем это слово
		while (input[i] != ' ' && i < input.size())
		{
			word.push_back(input[i]);
			i++;
		}
		bool flag = true;
		// проверяем, аббривиатура ли это
		for (int j = 0; j < word.size(); j++)
			if (word[j] >= 'a' && word[j] <= 'z')
				flag = false;
		if (flag && word.size() > 0)
			abbr++;
	}
	cout << abbr << endl;
	return 0;
}
