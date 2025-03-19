#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "두 정수를 입력하세요 >>"; 
	cin >> a >> b; 
	if (a > b) cout << "큰 수 = " << a;
	else if (a < b) cout << "큰 수 = " << b;
}
