#include <iostream>
using namespace std;

int addArray(int h[], int size) {
	int i;
	double sum = 0;
	for (i = 0; i < size; i++)
		sum += h[i];
	return sum;
}


int main() {
	int a=0, b=0, c=0, d=0, e=0;

	cout << "정수 5개 입력>>";
	cin >> a >> b >> c >> d >> e;

	int n[] = { a,b,c,d,e };

	double sum = addArray(n, 5);
	double num = sum / 5;
	cout << "평균 " << num;
}
