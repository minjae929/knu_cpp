#include <iostream>
#include <string>
using namespace std;

class Integer {
	int num;
public:
	Integer(int x) { num = x; }
	Integer(string y) { num = stoi(y); }
	int get() { return num; }
	void set(int z) { num = z; }
	bool isEven() { return num % 2 == 0; }
};

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}
