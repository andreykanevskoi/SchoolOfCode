/*

	Код из слайдов лекции №4

		Каневской Андрей

		  Школа  Кода

			2019 г.

*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// СЛАЙД 3

void toSquare(int& a) {
	a *= a;
	return;
}

// СЛАЙД 4

void deleteSpaces(string& inString) {
	string temp;
	for (auto sym : inString) 
		if (sym != ' ')
			temp.push_back(sym);
	inString = temp;
	return;
}

// СЛАЙД 6

void incVectorOfInts(vector<int>& inputVector) {
	for (size_t i = 0; i < inputVector.size(); i++) 
		inputVector[i]++;
	return;
}

int main() {

	// СЛАЙД 3

	int nDigit = 5;

	toSquare(nDigit);
	
	cout << nDigit << endl;	// 5

	// СЛАЙД 4

	string strIn = "  I LOVE PROGRAMMING!!! ";

	deleteSpaces(strIn);

	cout << strIn << endl;	// ILOVEPROGRAMMING!!!

	// СЛАЙД 6

	vector<int> nvecA = { 3, 4, 6, 7 };

	incVectorOfInts(nvecA);

	for (auto i : nvecA)
		cout << i << ' ';	// 4 5 7 8

	cout << endl;

	return 0;
}
