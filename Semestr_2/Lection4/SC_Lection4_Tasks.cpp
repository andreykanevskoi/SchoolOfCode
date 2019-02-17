/*
	Решение первых четырёх задач лекции 4

	Выполнил:
	Каневской Андрей

	Школа Кода
	2019 г.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void toFact(__int64& a) {
	if (a > 19) {
		cout << "Too big value!\n";
		return;
	}
	__int64 result = 1;
	for (int i = 1; i <= a; i++)
		result *= i;
	a = result;
	return;
}

void toReduce(int& a, int& b) {
	int ta = a, tb = b;
	if (a == b) {
		a = b = 1;
	}
	while (a != b) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	a = ta / a;
	b = tb / b;
}

void toCorrectTweet(string& tweet) {
	int k = 0;
	while (tweet[k] == ' ') k++;
	tweet = tweet.substr(k, tweet.length() - k);	//удалили пробелы сначала
	int r = tweet.length() - 1;
	while (tweet[r] == ' ') r--;
	tweet = tweet.substr(0, r+1);
	if (tweet.length() > 140) {
		tweet = tweet.substr(0, 140);
		tweet.append("...");
	}
	return;
}

void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
	return;
}

int main() {
	
	return 0;
}
