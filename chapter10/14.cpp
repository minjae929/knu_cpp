#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int choice;
	string name, pass;
	map <string, string> dic;
	cout << "***** 암호 관리프로그램  WHO를 시작합니다. *****" << endl;
	while (true) {
		cout << "삽입: 1, 검사: 2, 종료: 3 >> ";
		cin >> choice;
		if (choice == 1) {
			cout << "이름 암호>> ";
			cin >> name >> pass;
			dic[name] = pass;
		}
		else if (choice == 2) {
			string passward;
			cout << "이름? ";
			cin >> name;
			if (dic.find(name) == dic.end())
				cout << "이름을 찾을 수 없습니다.";
			while (true) {
				cout << "암호? ";
				cin >> passward;
				if (dic[name] == passward) {
					cout << "통과!!" << endl;
					break;
				}
				else
					cout << "실패~~" << endl;
			}
		}
		else if (choice == 3)
			break;
	}
	cout << "프로그램을 종료합니다...";
	return 0;
}
