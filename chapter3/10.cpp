//(1)//
#include <iostream>
using namespace std;

class Add {
	int a, b;
public:
	void setValue(int x, int y) { a = x, b = y; }
	int calculate() { return a + b; }
};

class Sub {
	int a, b;
public:
	void setValue(int x, int y) { a = x, b = y; }
	int calculate() { return a - b; }
};

class Mul {
	int a, b;
public:
	void setValue(int x, int y) { a = x, b = y; }
	int calculate() { return a * b; }
};

class Div {
	int a, b;
public:
	void setValue(int x, int y) { a = x, b = y; }
	int calculate() { return a / b; }
};


int main(){
	Add a;
	Sub s;
	Mul m;
	Div d;
	int p, q;
	string way;
	while (true) {
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> p >> q >> way;
		if (way == "+") {
			a.setValue(p, q);
			cout << a.calculate() << endl;
		}
		else if (way == "-") {
			s.setValue(p, q);
			cout << s.calculate() << endl;
		}
		else if (way == "*") {
			m.setValue(p, q);
			cout << m.calculate() << endl;
		}
		else if (way == "/") {
			d.setValue(p, q);
			cout << d.calculate() << endl;
		}
	} 
}

//(2)//

//(Calculator.h)//
#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <string>
using namespace std;

class Add {
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};

class Sub {
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};

class Mul {
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};

class Div {
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};

#endif

//(Calculator.cpp)//
#include "Calculator.h"

void Add::setValue(int x, int y) { a = x; b = y; }
int Add::calculate() { return a + b; }

void Sub::setValue(int x, int y) { a = x; b = y; }
int Sub::calculate() { return a - b; }

void Mul::setValue(int x, int y) { a = x; b = y; }
int Mul::calculate() { return a * b; }

void Div::setValue(int x, int y) { a = x; b = y; }
int Div::calculate() {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

//(main.cpp)//
#include "Calculator.h"

int main() {
    Add a;
    Sub s;
    Mul m;
    Div d;
    int p, q;
    string way;

    while (true) {
        cout << "두 정수와 연산자를 입력하세요>> ";
        cin >> p >> q >> way;

        if (way == "+") {
            a.setValue(p, q);
            cout << a.calculate() << endl;
        }
        else if (way == "-") {
            s.setValue(p, q);
            cout << s.calculate() << endl;
        }
        else if (way == "*") {
            m.setValue(p, q);
            cout << m.calculate() << endl;
        }
        else if (way == "/") {
            d.setValue(p, q);
            cout << d.calculate() << endl;
        }
        else {
            cout << "잘못된 연산자입니다. (+, -, *, / 중 선택)" << endl;
        }
    }
}
