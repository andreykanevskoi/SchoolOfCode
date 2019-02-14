/*
  Выполнил:
  Каневской Андрей
  
  Школа Кода
  2019г.
*/

#include <iostream>
#include <vector> 
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	//task for map
	int K;
	cin >> K;
	map<int, int> resultMap;
	while (K > 0){
		resultMap[K%10]++;
		K /= 10;
	}
	for (int i = 0; i < 10; i++){
		cout << i << ':' << resultMap[i] << endl;
	}
	//task for vector
	vector<int> pVector;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++){
		int t;
		cin >> t;
		pVector.push_back(t);
	}
	sort(pVector.begin(), pVector.end());
	for (int i : pVector){
		cout << i << ' ';
	}
	cout << endl;
	sort(pVector.rbegin(), pVector.rend());
	for (int i : pVector){
		cout << i << ' ';
	}
	return 0;
}
