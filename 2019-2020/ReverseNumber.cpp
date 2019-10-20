#include <iostream>

using namespace std;

int main() {
	int C, 
		newC = 0;

	cin >> C;

	while (C > 0)
	{
		newC = newC * 10 + C % 10;
		C /= 10;
	}

	cout << newC << endl;

	return 0;
}

