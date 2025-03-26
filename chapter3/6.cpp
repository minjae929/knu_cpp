#include <iostream> 
#include <cstdlib>
#include <ctime>
#define RAND_MAX 32767
using namespace std;

class EvenRandom {
public:
	EvenRandom();
	int next();
	int nextInRange(int low, int high);
};

EvenRandom::EvenRandom() {
	srand((unsigned int)time(NULL));
}

int EvenRandom::next() {
	while (true) {
		int x = rand();
		if (x % 2 == 0) {
			return x;
			break;
		}
	}
}

int EvenRandom::nextInRange(int low, int high) {
	while (true) {
		int y = (rand() % (high - low + 1)) + low;
		if (y % 2 == 0) {
			return y;
			break;
		}
	}
}



int main() {
	EvenRandom er;
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = er.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10 까지의 짝수 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = er.nextInRange(2, 10);
		cout << n << ' ';
	}
}
