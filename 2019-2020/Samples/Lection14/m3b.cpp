#include <iostream>
using namespace std;
int main()
{
	int F[31];
	int N;
	F[0] = 1;
	F[1] = 1;
	cin >> N;
	for (int i = 2; i < N; i++)
		F[i] = F[i - 1] + F[i - 2];
	for (int i = 0; i < N; i++)
		cout << F[i] << ' ';
	return 0;
}
