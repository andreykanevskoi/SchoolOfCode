/*
Алгоритм определения "Является ли число простым?"
(Метод перебора)
Каневской Андрей
01.12.2018
*/
#include<iostream>
using namespace std;
int main()
{
	int nInputNumber = 0; 
	cin >> nInputNumber;
	bool IsPrimeNumber = true;	//является ли число простым
	if (nInputNumber < 2)
		IsPrimeNumber = false;
	for (int i = 2; i < sqrt(nInputNumber) && IsPrimeNumber; i++)
		if (nInputNumber % i == 0)
			IsPrimeNumber = false;
	if (IsPrimeNumber)
		cout << "This number is prime!" << endl;
	else
		cout << "This number isn't prime!" << endl;
	return 0;
}
