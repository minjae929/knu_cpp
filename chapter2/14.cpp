#include <iostream>
#include <string>
using namespace std;

int main() {
	string order;
	int num, money = 0;
	cout << "에스프레소 2000원, 아케리카노 2300원, 카푸치노 2500원입니다.\n";

	while (money <= 20000) {

		cout << "주문>> ";
		cin >> order >> num;
		int price;
		if (order == "에스프레소") {
			price = 2000 * num;
		}
		else if (order == "아메리카노") {
			price = 2300 * num;
		}
		else if (order == "카푸치노") {
			price = 2500 * num;
		}
		money += price;
		cout << price << "원입니다. 맛있게 드세요\n";
	}
	cout << "오늘 " << money << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
}
