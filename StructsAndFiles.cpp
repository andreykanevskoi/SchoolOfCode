#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

/*
0 <= N <= 100
N ������� � ������
������� ���� �����:
����� ���� �
����� ���� �
*/

struct Point
{
	double x;
	double y;
};

int main()
{
	const int N_MAX = 100;
	Point arrayPoints[100];//������ �������� Point
	fstream inputFile("input.txt", ios::in);//��������� ����
	if (!inputFile.is_open()) return 0;	//���� ���� �� ������, ��������� ���������
	int quantityPoints = 0;//���������� ����� �� ������� �����
	inputFile >> quantityPoints; //��������� ���������� �����
	//��������� � ����� ������ � ������ �����
	for (int i = 0; i < quantityPoints; i++)
		inputFile >> arrayPoints[i].x >> arrayPoints[i].y;
	double sumX = 0, sumY = 0;
	//�������� �� ���� ���������� � ������� �����
	for (int i = 0; i < quantityPoints; i++)
	{
		sumX += arrayPoints[i].x;
		sumY += arrayPoints[i].y;
	}
	fstream outputFile("output.txt", ios::out);	//��������� �� ������ ����
	outputFile << sumX << ' ' << sumY;	//���������� � ���� �������
	outputFile.close();	//��������� ����
	return 0;
}

