#include <iostream>
#include <string>

using namespace std;

//������� ��������� ���� �����
int nIsStrLonger(string firstString, string secondString)
{
	int nResult = 0; //���� ������ ����� �� �����

	if (firstString.length() > secondString.length())
		nResult = 1; //���� ������ ������ �������

	if (firstString.length() < secondString.length())
		nResult = -1;//���� ������ ������ �������

	return nResult;
}

int main()
{
	//��������� ��������� ���������
	string a = "Hello, world!";

	//������� ������� ����� ������ (��� ����� '\0')
	cout << a.length() << endl;	// 13

	//������� ������� ������� ������
	cout << a[0] << endl; // 'H'

	//��������� ������ b ������ a
	string b = a;

	//������� ������ b
	cout << b << endl; // "Hello, world!"

	//��� ������������ �������� ����������:
	b[0] = 'h';
	cout << a << endl; // "Hello, world!"
	cout << b << endl; // "hello, world!"

	//��� ���������� ���������:
	//cout << a == b << endl;
	//cout << a > b << endl;

	return 0;
}