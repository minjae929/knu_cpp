#include <iostream>
using namespace std;

int main() {
	cout << "문자들을 입력하라(100개 미만).\n";

	char letter[100];
	cin.getline(letter, 100, '\n');

	int i, sum = 0;

	for (i = 1; i < 100; i++) {
		if (letter[i] == 'x') sum += 1;
	}
	cout << "x의 개수는 " << sum;
}
