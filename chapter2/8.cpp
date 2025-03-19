#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	int max = 0;
	string longname;

	cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n>>";
	for (int i = 0; i < 5; i++) {

		getline(cin, name, ';');
		cout << (i + 1) << " : ";
		cout << name << "\n";

		if (name.length() > max) {  
			longname = name;
			max = name.length();
		}
	}
	
	cout << "가장 긴 이름은 " << longname;
	return 0;
}
