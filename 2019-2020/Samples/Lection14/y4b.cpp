#include <iostream>
using namespace std;
int main()
{
	double a, b, res;
	cin >> a >> b;
	// считаем проценты
	res = b / a * 100;
	if (res < 1)
		cout << 0 << endl;
	if (res >= 1 && res < 11)
		cout << 1 << endl;
	if (res >= 11 && res < 51)
		cout << 2 << endl;
	if (res >= 51 && res < 71)
		cout << 3 << endl;
	if (res >= 71 && res < 85)
		cout << 4 << endl;
	if (res >= 85)
		cout << 5 << endl;
	return 0;
}
