#include <iostream>
using namespace std;

class Printer
{
protected:
	string model;
	string manufacturer;
	int printedCount;
	int avaliableCount;
public:
	virtual void print(int pages) = 0;
	virtual void show() = 0;
};

class InkjetPrinter : public Printer
{
protected:
	int ink{ 10 };
public:
	InkjetPrinter() {
		model = "Officejet V40";
		manufacturer = "HP";
		avaliableCount = 5;
		show();
	}
	int avaliableInk()
	{
		return ink;
	}
	void print(int pages)
	{
		if (avaliableCount < pages || ink < pages)
		{
			cout << "용지가 부족하여 출력할 수 없습니다." << endl;
		}
		else
		{
			avaliableCount -= pages;
			ink -= pages;
			cout << "프린트하였습니다." << endl;
		}
	}
	void show()
	{
		cout << "잉크젯 : " << model << ", " << manufacturer << ", 남은 종이 " << avaliableCount << ", 남은 잉크 " << avaliableInk() << endl;
	}
};

class LaserPrinter : public Printer
{
protected:
	int toner{ 20 };
public:
	LaserPrinter() {
		model = "SCX-6x45";
		manufacturer = "삼성전자";
		avaliableCount = 3;
		show();
	}
	int avaliableToner()
	{
		return toner;
	}
	void print(int pages)
	{
		if (avaliableCount < pages || toner < pages)
		{
			cout << "용지가 부족하여 출력할 수 없습니다." << endl;
		}
		else
		{
			avaliableCount -= pages;
			toner -= pages;
			cout << "프린트하였습니다." << endl;
		}
	}
	void show()
	{
		cout << "잉크젯 : " << model << ", " << manufacturer << ", 남은 종이 " << avaliableCount << ", 남은 토너 " << avaliableToner() << endl;
	}
};

int main()
{
	cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;
	InkjetPrinter inkjet;
	LaserPrinter laser;
	int choice, count;
	char yORn;
	while (true)
	{
		reInput:
		cout << "\n프린터 (1: 잉크젯, 2: 레이저)와 매수 입력 >> ";
		cin >> choice >> count;
		if (choice == 1)
		{
			inkjet.print(count);
		}
		else if (choice == 2)
		{
			laser.print(count);
		}
		else
		{
			cout << "입력이 잘못되었습니다. 다시 입력해주세요. " << endl;
			goto reInput;
		}
		inkjet.show();
		laser.show();
		reyORn:
		cout << "계속 프린트 하시겠습니까? ( y / n ) >> ";
		cin >> yORn;
		if (yORn == 'y')
			continue;
		else if (yORn == 'n')
		{
			break;
		}
		else
		{
			cout << "입력이 잘못되었습니다. 다시 입력해주세요. " << endl;
			goto reyORn;
		}
			
	}
	return 0;
}
