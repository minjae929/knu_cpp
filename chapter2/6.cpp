#include <iostream>
#include <string>
using namespace std;

int main() {
	string password;
	string againword;
	cout <<  "새 암호를 입력하세요>>"; 
	getline(cin, password); 

	cout << "새 암호를 다시 한번 입력하세요>>";  

	getline(cin, againword); 
	if (againword == password)  
		cout << "같습니다.";
	else
		cout << "같지 않습니다. ";
}
