#include <iostream>

using namespace std;

int main() {
	int C, sum = 0;
	cin >> C;

	while (C > 0)
	{
		sum = sum + (C % 10);	// C % 10 - остаток от деления С на 10
		C = C / 10;				
	}

	cout << sum << endl;

	return 0;
}
