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
		while (input[i] == ' ' && i < input.length())
			i++;

		if (i != input.length())
		{
			words++;
			while (input[i] != ' ' && i != input.length())
				i++;
		}
	}
	cout << words << endl;
	return 0;
}
