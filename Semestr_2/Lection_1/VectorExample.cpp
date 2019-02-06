#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	//��������� ������ int:
	vector<int> nArrayOfInt;

	//�������� ������� ����� ������ ���:
	nArrayOfInt = { 1, 2, 3, -4, 0 }; // 1 2 3 -4 0

	//����� �������� � ����� ��� �������:
	nArrayOfInt.push_back(2); // 1 2 3 -4 0 2

	//������� ������ �������:
	cout << nArrayOfInt[2] << endl; // 3

	//������ ������� ������:
	cout << nArrayOfInt.size() << endl; // 6

	//���������� string �������� �����������:
	vector<int> nNewIntArray = nArrayOfInt;
	cout << nNewIntArray[2] << endl; // 3
	cout << nNewIntArray.size() << endl; //6
	
	//���� ��������� "��������":
	//������� ������ ����� �� 5 ���������
	vector<int> nTheNewestIntArray(5);

	//���������� ��� ����� ����:
	cout << nTheNewestIntArray[0] << endl; // 0

	//��������� �������� ���� ��������� ����� ��������:
	vector<int> nAnotherIntArray(5, 7);
	cout << nAnotherIntArray[2] << endl; // 7

	//������ int ����� ������ ����� ���, �����, ��������� � �.�.
	vector<string> sText = { "Hello.", "My name is Andrey.", 
							"I like the vector of strings!" };

	//����� ������� �������:
	cout << sText[0] << endl; // "Hello."

	//����� ������ ��� �����, ��������
	cout << sText[0].length() << endl; // 6

	//����� ������ �� ���������:
	for (int i = 0; i < sText[0].length(); i++)
		cout << sText[0][i] << ' ';	// "H e l l o ."
	cout << endl;

	return 0;
}