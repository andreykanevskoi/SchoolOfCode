#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int n = 5;
	double mas[n][n];
	double p = 0.1234;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mas[i][j] = i * j / p;
			cout << setw(7)			//задать ширину вывода
				<< setprecision(5)	//задать точность
				<< setfill('0')		//задать заполнитель
				<< mas[i][j] << ' ';
		}
		cout << endl;
	}	
	return 0;
}
