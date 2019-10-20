#include <iostream>

using namespace std;

int main() {
	int C, max;

	cin >> C;
	max = C % 10;
	C /= 10;

	while (C > 0)
	{
		if (C % 10 > max)
			max = C % 10;
		C = C / 10;				
	}

	cout << max << endl;

	return 0;
}
