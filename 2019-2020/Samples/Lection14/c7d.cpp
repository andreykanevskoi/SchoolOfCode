#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	int pairs = 0;
	cin >> a >> b >> c;
	for (int x = -100; x <= 100; x++)
		for (int y = -100; y <= 100; y++)
			if (a * x + b * y == c)
			{
				cout << x << ' ' << y << endl;
				pairs++;
			}
	if (pairs == 0)
		cout << "NO" << endl;
	return 0;
}
