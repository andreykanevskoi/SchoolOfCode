#include <iostream>
using namespace std;

int main() {
	float a, b, c, D, x1, x2;
	
	cout << "a: ";
	cin >> a;
	
	cout << "b: ";
	cin >> b;
	
	cout << "c: ";
	cin >> c;

	D = b*b - 4*a*c;

	if (D > 0)
	{
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << "X1 = " << x1 << endl;
		cout << "X2 = " << x2 << endl;
	}
	else
	{
		if (D == 0)
		{
			x1 = x2 = -b / (2 * a);
			cout << "X1 = X2 = " << x1;
		}
		else
		{
			cout << "X1 and X2 don't exist!" << endl;
		}
	}

	return 0;
}
