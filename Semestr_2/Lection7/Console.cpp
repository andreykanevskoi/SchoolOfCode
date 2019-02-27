#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool CHECK(const string& path) {
	fstream file;
	file.open(path, ios::in);
	bool b = file.is_open();	//файл открыт?
	file.close();
	return b;
}

string READ(const string& path) {
	fstream file;
	file.open(path, ios::in);
	if (!file.is_open())
		return "";
	string buffer;
	string mainBuffer;
	while (getline(file, buffer))	//пока считывается из файла
		mainBuffer.append(buffer);	//добавлять в строку
	file.close();
	return mainBuffer;
}

void WRITE(const string& path, const string& data) {
	fstream file;
	file.open(path, ios::out);
	if (!file.is_open())
		return;
	string temp;
	file << data;	//запись в файл
	file.close();
}

int main() {
	bool flag = true;
	string command;
	while (flag) {
		cin >> command;
		if (command == "EXIT")
			flag = false;
		if (command == "CHECK") {
			string path;
			cin >> path;
			cout << CHECK(path) << endl;
		}
		if (command == "READ") {
			string path;
			cin >> path;
			cout << READ(path) << endl;
		}
		if (command == "WRITE") {
			string path;
			cin >> path;
			string data;
			getline(cin, data);
			WRITE(path, data);
		}
	}
	return 0;
}
