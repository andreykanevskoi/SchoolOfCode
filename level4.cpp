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

	//������� �� �����
	for (int i = 0; i < curN; i++)
		fileData >> allPupils[i].surname >> allPupils[i].name >> allPupils[i].school >> allPupils[i].points;
	fileData.close();

	//����� ���� ������������ �������� ������ � ����� �1
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

	//������� ������������ ��������
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
		mainCase = 1;		//�������� ������ ����� �� �������
	if (n1 == 2)
		mainCase = 2;		//������� ��� ������� � ������������ ������
	if (n1 == 1) 
	{
		if (n2 == 1)
			mainCase = 3;	//������� ��� ������� � max1 � max2
		if (n2 == 0)
			mainCase = 2;	//������� ���� ���� ������ � ������������ ������
		if (n2 > 1)
			mainCase = 2;	//��������� ����� ���� ���� ������ � max1 ������
	}
	if (n1 > 2)
		mainCase = 4;		//���������� � max1 ������ ����
	//1 - ������� "NO"
	//2 - ������� ���� �������� �� ������ �����, points = max1
	//3 - ������� ���� �������� �� ������ ����� � points = max1 | points = max2
	//4 - ������� n1 - ���������� �������� � points = max1

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