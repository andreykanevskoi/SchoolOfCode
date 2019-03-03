#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string to_str(int a) {
	string res;
	while (a > 0) {
		int t = a % 10;
		char c = t + 48;
		res.push_back(c);
		a /= 10;
	}
	reverse(res.begin(), res.end());
	return res;
}

string to_str(bool a) {
	string res;
	if (a)
		res = "true";
	else
		res = "false";
	return res;
}

string to_str(vector<int> a) {
	string res;
	for (int i = 0; i < a.size() - 1; i++) {
		res.append(to_str(a[i]));
		res.push_back(' ');
	}
	res.append(to_str(a[a.size() - 1]));
	return res;
}

int main() {
	int a = 43;
	vector<int> b = { 1, 2, 3, 4, 5 };
	cout << to_str(a) << endl << to_str(b);
	return 0;
}
