#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "이름은?";
	string name;
	getline(cin, name, '\n');

	cout << "주소는?";
	string address;
	getline(cin, address, '\n');

	cout << "나이는?";
	string age;
	getline(cin, age, '\n');

	cout << name << ", " << address << ", " << age << "세"; 
}
