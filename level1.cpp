#include <iostream>

using namespace std;

int main()
{
	int N, max = -1;
	cin >> N;
	while (N > 0)
	{
		int t = N % 10;
		if (t < 5 && t > max)
			max = t;
		N /= 10;
	}
	if (max > 0)
		cout << max;
	else
		cout << "NO";
	return 0;
}