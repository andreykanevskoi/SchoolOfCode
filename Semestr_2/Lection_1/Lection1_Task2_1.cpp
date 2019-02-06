/*
�������:
� �������������� vector ������ � ���������� ������� N, 
����� N ����� A[i] (int).  ������������� ������ �� ���������� 
� ������� �� �����.

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

	vector<int> nInputArray(N);

	for (int i = 0; i < N; i++)
		cin >> nInputArray[i];

	for (int i = N-1; i > 0; i--)
		for (int j = 0; j < i; j++)
		{
			if (nInputArray[j] > nInputArray[j + 1])
			{
				int t = nInputArray[j];
				nInputArray[j] = nInputArray[j + 1];
				nInputArray[j + 1] = t;
			}
		}

	for (int i = 0; i < N; i++)
		cout << nInputArray[i] << ' ';
	cout << endl;

	return 0;
}