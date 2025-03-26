#include <iostream>
#include <string>
using namespace std;

class Date {
	int year, month, day;
public:
	Date(int x, int y, int z) : year(x), month(y), day(z) {}

	Date(string s) {
		size_t pos = s.find('/');
		year = stoi(s.substr(0, pos));
		s = s.substr(pos + 1);

		pos = s.find('/');
		month = stoi(s.substr(0, pos));
		day = stoi(s.substr(pos + 1));
	}

	void show() {
		cout << year << "년" << month << "월" << day << "일\n";
	}

	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
};

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
