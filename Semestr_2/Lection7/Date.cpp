#include <iostream>
#include <string>

using namespace std;

//DD.MM.YYYY -> YYYY.MM.DD
//сравнить даты
int compareDates(const string& firstDate, const string& secondDate) {
	string newFirstDate, newSecondDate;
	newFirstDate.append(firstDate.substr(6, 4));
	newSecondDate.append(secondDate.substr(6, 4));
	newFirstDate.append(firstDate.substr(3, 2));
	newSecondDate.append(secondDate.substr(3, 2));
	newFirstDate.append(firstDate.substr(0, 2));
	newSecondDate.append(secondDate.substr(0, 2));
	if (newFirstDate > newSecondDate)
		return 1;
	if (newSecondDate > newFirstDate)
		return -1;
	return 0;
}

void addNumberToDate(string& date, int number) {
	int daysInMonthes[] = { 0, 31,28,31,30,31,30,31, 31, 30, 31, 30, 31 };
  //переводим из строки в числа
	int day = stoi(date.substr(0, 2));
	int month = stoi(date.substr(3, 2));
	int year = stoi(date.substr(6, 4));
  //высчитываем дни
	day += number;
	if (year % 4 == 0)
		daysInMonthes[2] = 29;
	while (day > daysInMonthes[month]) {
		if (year % 4 == 0)
			daysInMonthes[2] = 29;
		else
			daysInMonthes[2] = 28;
		if (day > daysInMonthes[month]) 
			day -= daysInMonthes[month++];
		if (month > 12) {
			month = 1;
			year++;
		}
	}
  //записываем обратно в строковый формат
	string tempStr;
	if (day < 10)
		tempStr.push_back('0');
	tempStr.append(to_string(day));
	tempStr.push_back('.');
	if (month < 10)
		tempStr.push_back('0');
	tempStr.append(to_string(month));
	tempStr.push_back('.');
	tempStr.append(to_string(year));
	date = tempStr;
	return;
}

int main() {
	string a;
	int d;
	cin >> a >> d;
	addNumberToDate(a, d);
	cout << a << endl;
	return 0;
}
