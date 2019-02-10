/*
Задание:
string: с клавиатуры вводится строка. Затем, вводится вторая строка.
Определить, входит ли вторая строка хотя бы один раз в первую.
Вторая строка непустая, проверку выполнять вручную;

Выполнил:
Каневской Андрей

Школа Кода
2019г.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sMain;
	string sSub;
	cin >> sMain;
	cin >> sSub;
	bool flag = false;
	for (int i = 0; !flag && i <= sMain.length() - sSub.length(); i++)
	{
		int nCtrl = 0;
		while (nCtrl < sSub.length() && sMain[i + nCtrl] == sSub[nCtrl])
			nCtrl++;
		if (nCtrl == sSub.length())
			flag = true;
	}
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
