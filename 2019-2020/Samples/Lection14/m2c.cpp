#include <iostream>
using namespace std;
int main()
{
	long long int n, k, a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> k;
	int pairs = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] + a[j] == k)
				pairs++;
	cout << pairs << endl;
	return 0;
}
