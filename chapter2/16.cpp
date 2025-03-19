#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다. \n";
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다. \n";

	int count, total = 0;
	char input[10000];

	cin.getline(input, 10000, ';');

	for (int i = 0; i <= strlen(input); i++) {
		if (isalpha(input[i]) != 0) {
			input[i] = tolower(input[i]);
			total++;
		}
	}
	cout << "총 알파벳 수 " << total << "\n\n";

	for (char c = 'a'; c <= 'z'; c++) {
		count = 0;
		for (int j = 0; j <= strlen(input); j++) {
			if (input[j] == c) {
				count++;
			}
		}
		cout << c << " (" << count << ")\t: ";
		for (int k = 0; k < count; k++) {
			cout << "*";
		}
		cout << endl;
	}
}
