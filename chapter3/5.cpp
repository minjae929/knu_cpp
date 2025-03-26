#include <iostream> 
#include <cstdlib>
#include <ctime>
#define RAND_MAX 32767
using namespace std;

class Random {
public:
	Random();
	int next();
	int nextInRange(int low, int high);
};

Random::Random() {
	srand((unsigned int)time(NULL));
}

int Random::next() {
	return rand();
}

int Random::nextInRange(int low, int high) {
	return (rand() % (high - low + 1)) + low; 
}

int main() {
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); 
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
	}
}
