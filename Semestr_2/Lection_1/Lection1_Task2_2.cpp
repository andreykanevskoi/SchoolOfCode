/*
Задание:
С использованием vector: 
С клавиатуры вводится число N (int). Составить решето Эратосфена 
для чисел от 0 до N-1 включительно. Вывести результат на экран.

Выполнил:
Каневской Андрей

Школа Кода
2019г.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;

	cin >> N;

	vector<bool> EratosphenesTable(N, true);

	EratosphenesTable[0] = EratosphenesTable[1] = false;
	for (int i = 2; i < N; i++)
		if (EratosphenesTable[i])
		{
			for (int j = 2 * i; j < N; j += i)
				EratosphenesTable[j] = false;
		}

	for (int i = 0; i < N; i++)
		cout << i << ' ' << EratosphenesTable[i] << endl;

	return 0;
}