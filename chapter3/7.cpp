#include <iostream>
#include <cstdlib>
#include <ctime>
#define RAND_MAX 32767 
using namespace std;

class SelectableRandom {
public:
	SelectableRandom();
	int nextOdd();
	int nextEven();
	int nextOddInRange(int low, int high);
	int nextEvenInRange(int low, int high);
};

SelectableRandom::SelectableRandom() {
	srand((unsigned int)time(NULL));
}

int SelectableRandom::nextOdd() {
	while (true) {
		int x = rand();
		if (x % 2 == 1) {
			return x;
			break;
		}
	}
}

int SelectableRandom::nextEven() {
	while (true) {
		int x = rand();
		if (x % 2 == 0) {
			return x;
			break;
		}
	}
}

int SelectableRandom::nextOddInRange(int low, int high) {
	while (true) {
		int y = (rand() % (high - low + 1)) + low;
		if (y % 2 == 1) {
			return y;
			break;
		}
	}
}

int SelectableRandom::nextEvenInRange(int low, int high) {
	while (true) {
		int y = (rand() % (high - low + 1)) + low;
		if (y % 2 == 0) {
			return y;
			break;
		}
	}
}

int main() {
	SelectableRandom sr;
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = sr.nextEven();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "9 까지의 홀수 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = sr.nextOddInRange(2, 9);
		cout << n << ' ';
	}
}
