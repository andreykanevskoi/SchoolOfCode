#include <fstream>
#include <iostream>

using namespace std;

struct pupil
{
	char surname[31];
	char name[20];
	int school;
	int points;
};

int main()
{
	fstream fileData;
	fileData.open("results2.txt", ios::in);
	const int N_MAX = 100;
	pupil allPupils[N_MAX];
	int curN;
	fileData >> curN;

	//считать из файла
	for (int i = 0; i < curN; i++)
		fileData >> allPupils[i].surname >> allPupils[i].name >> allPupils[i].school >> allPupils[i].points;
	fileData.close();

	//поиск двух максимальных значений баллов у школы №1
	int max1 = -1, max2 = -1;
	for (int i = 0; i < curN; i++)
		if (allPupils[i].school == 1 && allPupils[i].points > max2)
		{
			max2 = allPupils[i].points;
			if (max2 > max1)
			{
				int temp = max2;
				max2 = max1;
				max1 = temp;
			}
		}

	//подсчёт интересующих учеников
	int n1 = 0, n2 = 0;
	for (int i = 0; i < curN; i++)
	{
		if (allPupils[i].school == 1 && allPupils[i].points == max1)
			n1++;
		if (allPupils[i].school == 1 && allPupils[i].points == max2)
			n2++;
	}

	cout << n1 << ' ' << n2 << ' ' << max1 << ' ' << max2 << endl;

	int mainCase = 0;
	if (n1 == 0)
		mainCase = 1;		//учеников первой школы не нашлось
	if (n1 == 2)
		mainCase = 2;		//нашлось два ученика с максимальным баллом
	if (n1 == 1) 
	{
		if (n2 == 1)
			mainCase = 3;	//нашлось два ученика с max1 и max2
		if (n2 == 0)
			mainCase = 2;	//нашелся лишь один ученик с максимальным баллом
		if (n2 > 1)
			mainCase = 2;	//награжден будет лишь один ученик с max1 баллом
	}
	if (n1 > 2)
		mainCase = 4;		//участников с max1 больше двух
	//1 - вывести "NO"
	//2 - вывести всех учеников из первой школы, points = max1
	//3 - вывести всех учеников из первой школы с points = max1 | points = max2
	//4 - вывести n1 - количество учеников с points = max1

	cout << mainCase << endl;

	switch (mainCase)
	{
	case 1:
		cout << "NO" << endl;
		break;
	case 3:
		for (int i = 0; i < curN; i++)
			if (allPupils[i].school == 1 && allPupils[i].points == max2)
				cout << allPupils[i].surname << ' ' << allPupils[i].name << ' ' << allPupils[i].school << ' ' << allPupils[i].points << endl;
	case 2:
		for (int i = 0; i < curN; i++)
			if (allPupils[i].school == 1 && allPupils[i].points == max1)
				cout << allPupils[i].surname << ' ' << allPupils[i].name << ' ' << allPupils[i].school << ' ' << allPupils[i].points << endl;
		break;
	case 4:
		cout << n1 << endl;
	default:
		cout << "ERROR!" << endl;
		break;
	}

	return 0;
}