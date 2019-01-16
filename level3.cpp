#include <iostream>

using namespace std;

int main()
{
	const int N_MAX = 30;
	int inputArray[N_MAX];
	int N;
	cin >> N;
	//ввод массива
	for (int i = 0; i < N; i++)
		cin >> inputArray[i];
	int min = 10001;
	//нахождение минимума
	for (int i = 0; i < N; i++)
		if (inputArray[i] % 5 != 0 && inputArray[i] < min)
			min = inputArray[i];
	//замены
	for (int i = 0; i < N; i++)
		if (inputArray[i] % 5 != 0)
			inputArray[i] = min;
	//вывод
	cout << "***************" << endl;
	for (int i = 0; i < N; i++)
		cout << inputArray[i] << endl;
	return 0;
}