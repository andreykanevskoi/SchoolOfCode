/*
�������:
� �������������� string ������ � ���������� ������. 
��������� ��� ���� ������ ��������� � ������� ��� �� �����.

��������:
��������� ������

����� ����
2019�.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sInputString;
	
	cin >> sInputString;

	int nCurChar = sInputString.length() - 2;
	while (nCurChar >= 0)
	{
		sInputString.push_back(sInputString[nCurChar--]);
	}

	cout << sInputString << endl;

	return 0;
}