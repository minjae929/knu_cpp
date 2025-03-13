//1-3//
#include <iostream>
int main() {
	int i, a, b, sum = 0;
	a = 1;
	b = 10;
	for(i = a; i <= b; i++) {
		sum += i;
	}
	std::cout << a << "에서 " << b << "더한 결과는 " << sum << "입니다.";
}
