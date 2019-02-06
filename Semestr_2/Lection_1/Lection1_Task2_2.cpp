/*
�������:
� �������������� vector: 
� ���������� �������� ����� N (int). ��������� ������ ���������� 
��� ����� �� 0 �� N-1 ������������. ������� ��������� �� �����.

��������:
��������� ������

����� ����
2019�.
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