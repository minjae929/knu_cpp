#include <iostream>
#include <string>
using namespace std;

template <class T>
T biggest(T x[], int y) {
	T biggest = x[0];
	for (int i = 0;i < y;i++) {
		if (biggest < x[i])
			biggest = x[i];
	}
	return biggest;
}

int main() {
	int a[] = { 1, 10, 100, 5, 4 };
    char b[] = { 'a', 'x', 't', 'u', 'o'};
	cout << biggest(a, 5) << endl;
    cout << biggest(b, 5) << endl;
}
