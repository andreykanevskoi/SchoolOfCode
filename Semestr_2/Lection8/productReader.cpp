#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int numRequest = 1;

struct record {
	int id;
	string name;
};

void writeRecordToConsole(const record& rec) {
	cout << rec.id << ' '
		<< rec.name << '\n';
	return;
}

bool WRITE(const string& fileName) {
	fstream fileIn;
	fileIn.open(fileName, ios::in);
	if (!fileIn.is_open())
		return false;
	int t;
	fileIn >> t;
	record tRec;
	cout << t << '\n';
	for (int i = 0; i < t; i++) {
		fileIn >> tRec.id >> tRec.name;
		writeRecordToConsole(tRec);
	}
	fileIn.close();
	return true;
}

bool NEW_LIST(const string& fileSourceName, 
				const string& fileDestName) {
	fstream fileS, fileD;
	fileS.open(fileSourceName, ios::in);
	fileD.open(fileDestName, ios::out);
	if (!(fileS.is_open() && fileD.is_open()))
		return false;
	int t;
	record tRec;
	fileS >> t;
	fileD << t << '\n';
	for (int i = 0; i < t; i++) {
		fileS >> tRec.id >> tRec.name;
		fileD << tRec.id << ' ' << tRec.name << '\n';
	}
	fileS.close();
	fileD.close();
	return true;
}

bool FIND(const string& fileName, const string& fieldName) {
	fstream fileIn;
	fileIn.open(fileName, ios::in);
	fstream fileOut;
	string curFileName = "Request" + to_string(numRequest++) + ".txt";
	fileOut.open(curFileName, ios::out);
	int t;
	fileIn >> t;
	record tRec;
	vector<record> res;
	for (int i = 0; i < t; i++) {
		fileIn >> tRec.id >> tRec.name;
		if (tRec.name == fieldName)
			res.push_back(tRec);
	}
	fileIn.close();
	fileOut << res.size() << endl;
	for (auto i : res)
		fileOut << i.id << ' ' << i.name << endl;
	res.clear();
	fileOut.close();
	WRITE(curFileName);
	return true;
}

int main() {
	string pathToFile, field;
	cin >> pathToFile >> field;
	FIND(pathToFile, field);
	
	return 0;
}
