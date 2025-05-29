#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
protected:
	string name;
	int year;
	string writer;
public:
	Book(int year, string name, string writer)
	{
		this->year = year;
		this->name = name;
		this->writer = writer;
	}
	string getName()
	{
		return name;
	}
	string getWriter()
	{
		return writer;
	}
	int getYear()
	{
		return year;
	}
};

int main() {
	vector<Book> bv;
	string name;
	string writer;
	int year;
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다. " << endl;
	while (true)
	{
		cout << "년도>>";
		cin >> year;
		if (year == -1) {
			cout << "총 입고된 책은 " << size(bv) << "권입니다. " << endl;
			break;
		}
		cin.ignore();
		cout << "책이름>>";
		getline(cin, name);

		cout << "저자>>";
		getline(cin, writer);

		Book book(year, name, writer);
		bv.push_back(book);
	}
	cin.ignore();
	cout << "검색하고자 하는 저자 이름을 입력하세요>>";
	getline(cin, writer);
	for (int i = 0; i < size(bv); i++)
	{
		if (bv[i].getWriter() == writer)
			cout << bv[i].getYear() << "년도, " << bv[i].getName() << ", " << bv[i].getWriter() << endl;
	}
	cout << "검색하고자 하는 년도를 입력하세요>>";
	cin >> year;
	for (int i = 0; i < size(bv); i++)
	{
		if (bv[i].getYear() == year)
			cout << bv[i].getYear() << "년도, " << bv[i].getName() << ", " << bv[i].getWriter() << endl;
	}
}
