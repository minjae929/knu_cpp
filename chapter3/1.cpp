#include <iostream>
using namespace std;

class Tower {
public:
	int height;
	double getArea();
};
double Tower::getArea() {
	return height;
}

int main() {
	Tower myTower;
	myTower.height = 1; 
	double area = myTower.getArea(); 
	cout << "높이는 " << area << "미터" << endl;
	Tower seoulTower;
	seoulTower.height = 100; 
	area = seoulTower.getArea(); 
	cout << "높이는 " << area << "미터" << endl;
}
