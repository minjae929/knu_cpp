//2-6//
#include <iostream>
#include <string>
using namespace std;

int main() {
	string elvis;
	string singer;
	cout <<  "새 암호를 입력하세요 "; 
	getline(cin, elvis); 

	cout << "새 암호를 다시 한번 입력하세요 ";  

	getline(cin, singer); 
	if (singer == elvis)  
		cout << "같습니다.";
	else
		cout << "같지 않습니다. ";
}
