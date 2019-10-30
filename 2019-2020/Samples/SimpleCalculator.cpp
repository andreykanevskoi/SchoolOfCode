#include <iostream>

using namespace std;

int main() {
	int a, b, res;
	char opr;
	bool error = false;
	cin >> a >> opr >> b;
	// выбирается ветка, взависимости от значения opr
	switch (opr)
	{
	case '+':
		res = a + b;
		break;
	case '-':
		res = a - b;
		break;
	case '*':
		res = a * b;
		break;
	case '/':
		res = a / b;
		break;
	// действия по умолчанию: ни одно из значений case не соответствует opr
	default:
		cout << "INVALID OPERATION!" << endl;
		error = true;
		break;
	}
	if (!error)
		cout << res << endl;
	return 0;
}
