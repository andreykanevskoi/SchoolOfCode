#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

/*
0 <= N <= 100
N записей о точках
вывести пару чисел:
сумма всех Х
сумма всех У
*/

struct Point
{
	double x;
	double y;
};

int main()
{
	const int N_MAX = 100;
	Point arrayPoints[100];//массив структур Point
	fstream inputFile("input.txt", ios::in);//открываем файл
	if (!inputFile.is_open()) return 0;	//если файл не открыт, завершить программу
	int quantityPoints = 0;//количество точек во входном файле
	inputFile >> quantityPoints; //считываем количество точек
	//считываем в цикле данные о каждой точке
	for (int i = 0; i < quantityPoints; i++)
		inputFile >> arrayPoints[i].x >> arrayPoints[i].y;
	double sumX = 0, sumY = 0;
	//проходим по всем структурам и считаем сумму
	for (int i = 0; i < quantityPoints; i++)
	{
		sumX += arrayPoints[i].x;
		sumY += arrayPoints[i].y;
	}
	fstream outputFile("output.txt", ios::out);	//открываем на запись файл
	outputFile << sumX << ' ' << sumY;	//записываем в файл квадрат
	outputFile.close();	//закрываем файл
	return 0;
}

