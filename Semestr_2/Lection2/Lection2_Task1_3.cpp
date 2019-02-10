/*
Задание
C клавиатуры вводятся точки в формате x0, y0. 
Требуется найти пару точек, расстояние между которыми наибольшее, 
из возможных комбинаций полученных точек. 
Функцию подсчёта расстояния оформить отдельно: 
создать функцию GetDistanse(), принимающую на вход структуры Point, 
возвращающую double - расстояние между точками;

Выполнил 
Каневской Андрей

Школа Кода
2019г.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <vector>

struct Point
{
	int x;
	int y;
};

double GetDistance(Point pFirst, Point pSecond)
{
	return sqrt((pFirst.x - pSecond.x)*(pFirst.x - pSecond.x) +
				(pFirst.y - pSecond.y)*(pFirst.y - pSecond.y));
}

int main()
{
	freopen("input.txt", "r", stdin);
	std::vector<Point> vPoints;
	int nIndexOfFirstPointMax,
		nIndexOfSecondPointMax;

	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		Point t;
		std::cin >> t.x >> t.y;
		vPoints.push_back(t);
	}
	double dMax = -1;
	for (int i = 0; i < N - 1; i++)
		for (int j = i + 1; j < N; j++)
			if (GetDistance(vPoints[i], vPoints[j]) > dMax)
			{
				dMax = GetDistance(vPoints[i], vPoints[j]);
				nIndexOfFirstPointMax = i;
				nIndexOfSecondPointMax = j;
			}
	std::cout << vPoints[nIndexOfFirstPointMax].x << ' '
		<< vPoints[nIndexOfFirstPointMax].y << std::endl
		<< vPoints[nIndexOfSecondPointMax].x << ' '
		<< vPoints[nIndexOfSecondPointMax].y << std::endl
		<< dMax;
	return 0;
}
