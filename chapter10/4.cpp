#include <iostream>
#include <string>
using namespace std;

template <class T>
bool search(T x, T y[], int z) {
	for (int i = 0;i < z;i++) 
		if (y[i] == x) return true;
	return false;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	if (search(100, x, 5)) cout << "100이 배열 x에 포함되어 있다";
	else cout << "100이 배열 x에 포함되어 있지 않다";
}
