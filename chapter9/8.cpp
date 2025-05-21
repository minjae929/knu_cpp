#include<iostream>
#include<string>

using namespace std;

class Shape
{
protected:
	string name;
	int w, h;
public:
	Shape(string n = "", int w = 0, int h = 0)
	{
		this->name = n;
		this->w = w;
		this->h = h;
	}
	virtual double getArea() = 0; 
	string getName() { return name; }
};

class Oval : public Shape
{
public:
	Oval(string name, int w, int h) : Shape()
	{
		this->name = name;
		this->w = w;
		this->h = h;
	}

	virtual double getArea()
	{
		return 3.14 * w * h;
	}
};

class Rect : public Shape
{
public:
	Rect(string name, int w, int h) : Shape()
	{
		this->name = name;
		this->w = w;
		this->h = h;
	}

	virtual double getArea()
	{
		return w * h;
	}
};

class Triangular : public Shape
{
public:
	Triangular(string name, int w, int h) : Shape()
	{
		this->name = name;
		this->w = w;
		this->h = h;
	}

	virtual double getArea()
	{
		return (w * h) / 2;
	}
};

int main()
{
	Shape* p[3];

	p[0] = new Oval("빈대떡", 10, 20);
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangular("토스트", 30, 40);

	for (int i = 0; i < 3; i++)
	{
		cout << p[i]->getName() << " 넓이는 " << p[i]->getArea() << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		delete p[i];
	}
}
