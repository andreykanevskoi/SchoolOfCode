#include <iostream>
using namespace std;

int main() {
	int a, b;
	int d[10];
	cin >> a >> b;
	for (int k = b; k >= a; k--)
	{
		bool nechet = true;
		// проверка нечетности цифр
		int t = k;
		while (t > 0 && nechet)
		{
			if ((t % 10) % 2 == 0)
				nechet = false;
			t /= 10;
		}
		if (nechet)
		{
			bool uniq = true;
			// считаем повторы цифр в числе
			for (int j = 0; j < 10; j++)
				d[j] = 0;
			t = k;
			while (t > 0)
			{
				d[t % 10]++;
				t /= 10;
			}
			for (int j = 0; j < 10 && uniq; j++)
				if (d[j] > 1)
					uniq = false;
			if (uniq)
			{
        // проверяем, простое ли число
				t = k;
				bool simple = true;
				if (t < 2)
					simple = false;
				for (int j = 2; j <= sqrt(t) && simple; j++)
					if (t % j == 0)
						simple = false;
				if (simple)
				{
					cout << k << endl;
					return 0;
				}
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}
