/*
Задание:
vector: с клавиатуры вводится последовательность чисел.
Требуется положительные числа записать в вектор и отсортировать
по невозрастанию. Отрицательные числа сохранить в другой вектор
и отсортировать по неубыванию. Результат - два вектора - вывести на экран,
каждый с новой строки. Наличие и положительных, и отрицательных чисел
гарантируется

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
	vector<int> nFirstResult;
	vector<int> nSecondResult;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int t;
		cin >> t;
		if (t > 0)
			nFirstResult.push_back(t);
		if (t < 0)
			nSecondResult.push_back(t);
	}
	for (int i = nFirstResult.size() - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (nFirstResult[j] < nFirstResult[j + 1])
			{
				int t = nFirstResult[j];
				nFirstResult[j] = nFirstResult[j + 1];
				nFirstResult[j + 1] = t;
			}
	for (int i = nSecondResult.size() - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (nSecondResult[j] > nSecondResult[j + 1])
			{
				int t = nSecondResult[j];
				nSecondResult[j] = nSecondResult[j + 1];
				nSecondResult[j + 1] = t;
			}
	for (int i = 0; i < nFirstResult.size(); i++)
		cout << nFirstResult[i] << ' ';
	cout << endl;
	for (int i = 0; i < nSecondResult.size(); i++)
		cout << nSecondResult[i] << ' ';
	cout << endl;
	return 0;
}
