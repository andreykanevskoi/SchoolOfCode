#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	//объявляем вектор int:
	vector<int> nArrayOfInt;

	//значения вектора можно задать так:
	nArrayOfInt = { 1, 2, 3, -4, 0 }; // 1 2 3 -4 0

	//можно добавить в конец еще элемент:
	nArrayOfInt.push_back(2); // 1 2 3 -4 0 2

	//получим третий элемент:
	cout << nArrayOfInt[2] << endl; // 3

	//узнаем текущий размер:
	cout << nArrayOfInt.size() << endl; // 6

	//аналогично string работает копирование:
	vector<int> nNewIntArray = nArrayOfInt;
	cout << nNewIntArray[2] << endl; // 3
	cout << nNewIntArray.size() << endl; //6
	
	//есть некоторые "хитрости":
	//создаем вектор сразу на 5 элементов
	vector<int> nTheNewestIntArray(5);

	//изначально они равны нулю:
	cout << nTheNewestIntArray[0] << endl; // 0

	//начальное значение всех элементов можно изменить:
	vector<int> nAnotherIntArray(5, 7);
	cout << nAnotherIntArray[2] << endl; // 7

	//вместо int может стоять любой тип, класс, контейнер и т.д.
	vector<string> sText = { "Hello.", "My name is Andrey.", 
							"I like the vector of strings!" };

	//можно вывести элемент:
	cout << sText[0] << endl; // "Hello."

	//можно узнать его длину, например
	cout << sText[0].length() << endl; // 6

	//можно пройти по элементам:
	for (int i = 0; i < sText[0].length(); i++)
		cout << sText[0][i] << ' ';	// "H e l l o ."
	cout << endl;

	return 0;
}