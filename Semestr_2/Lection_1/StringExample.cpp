#include <iostream>
#include <string>

using namespace std;

//функция сравнения длин строк
int nIsStrLonger(string firstString, string secondString)
{
	int nResult = 0; //если строки равны по длине

	if (firstString.length() > secondString.length())
		nResult = 1; //если первая строка длиннее

	if (firstString.length() < secondString.length())
		nResult = -1;//если вторая строка длиннее

	return nResult;
}

int main()
{
	//присвоить строковую константу
	string a = "Hello, world!";

	//вывести текущую длину строки (без учета '\0')
	cout << a.length() << endl;	// 13

	//вывести нулевой элемент строки
	cout << a[0] << endl; // 'H'

	//присвоить строке b строку a
	string b = a;

	//вывести строку b
	cout << b << endl; // "Hello, world!"

	//при присваивании значение копируется:
	b[0] = 'h';
	cout << a << endl; // "Hello, world!"
	cout << b << endl; // "hello, world!"

	//нет операторов сравнения:
	//cout << a == b << endl;
	//cout << a > b << endl;

	return 0;
}