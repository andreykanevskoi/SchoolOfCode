#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;
int main() 
{
	system("color 60"); // цвет консоли
	freopen("input.txt", "r", stdin);	// считывать из cin как из input.txt
	freopen("output.txt", "w", stdout); // выводить в output.txt как в cout
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = toupper(s[i]);
		else
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = tolower(s[i]);
	}
	cout << s << endl;
	return 0;
}
