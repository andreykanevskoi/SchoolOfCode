/*
Algorithm of building of Eratosthene's sieve
Kanevskoi Andrey
01.12.2018
*/
#include<iostream>
using namespace std;
int main()
{
	const int N = 10001; // [0, 10000]
	bool PrimeNumbers[N];
	for (int i = 0; i < N; i++)
		PrimeNumbers[i] = true;
	PrimeNumbers[0] = PrimeNumbers[1] = false;
	for (int i = 2; i < N; i++)
		if (PrimeNumbers[i])	//if true
			for (int j = 2*i; j < N; j += i)
				PrimeNumbers[j] = false;	//make false with step i
	for (int i = 0; i < N - 1; i++)	//list of all prime numbers from 0 to N-1
		if (PrimeNumbers[i])
			cout << i << endl;
	return 0;
}