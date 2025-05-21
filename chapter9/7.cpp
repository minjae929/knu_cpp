#include <iostream>
using namespace std;
#define PI 3.14;

class Shape
{
protected:
	string name;
	int width, height;
public:
	Shape(string n = " ", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() { return 0; }
	string getName() { return name; }
};

class Oval : public Shape
{
protected:
	string name;
	int width, height;
public:
	Oval(string n = " ", int w = 0, int h = 0) : Shape(n, w, h) { name = n; width = w; height = h; }
	double getArea() { return width * height * PI; }
	string getName() { return name; }
};

class Rect : public Shape
{
protected:
	string name;
	int width, height;
public:
	Rect(string n = " ", int w = 0, int h = 0) : Shape(n, w, h) { name = n; width = w; height = h; }
	double getArea() { return width * height; }
	string getName() { return name; }
};

class Triangular : public Shape
{
protected:
	string name;
	int width, height;
public:
	Triangular(string n = " ", int w = 0, int h = 0) : Shape(n, w, h) { name = n; width = w; height = h; }
	double getArea() { return width * height / 2; }
	string getName() { return name; }
};

int main() 
{
	Shape* p[3];
	p[0] = new Oval("빈대떡", 10, 20);
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangular("토스트", 30, 40);
	for (int i = 0; i < 3; i++)
		cout << p[i]->getName() << "넓이는 " << p[i]->getArea() << endl;
	for (int i = 0; i < 3; i++)
		delete p[i];
}
