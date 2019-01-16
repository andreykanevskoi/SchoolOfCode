#include <iostream>

using namespace std;

int main()
{
	int k,		//степень
		count,	//число
		checker;//число в степени
	k = 0;
	checker = 1;
	cin >> count;
	while (checker < 1000 && checker != count)
	{
		k++;
		checker *= 4;
	}
	if (checker < 1000)
		cout << k;
	else
		cout << "NO";
	return 0;
}