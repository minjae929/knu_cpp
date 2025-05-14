#include <iostream>
using namespace std;

class BaseArray
{
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100)
	{
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[]mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyStack : protected BaseArray
{
	int size, index = 0;
public:
	MyStack(int size) : BaseArray(size)
	{
		this->size = size;

	}
	void push(int n)
	{
		put(index, n);
		index++;
	}
	int capacity()
	{
		return getCapacity();
	}
	int length()
	{
		return index;
	}
	int pop()
	{
		int i = get(index-1);
		put(index-1, 0);
		index--;
		return i;
	}

};

int main()
{	
	MyStack mStack(100);
	int n;
	cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		mStack.push(n);
	}
	cout << "스택용량: " << mStack.capacity() << ", 스택크기: " << mStack.length() << endl;
	cout << "스택의 모든 원소를 팝하여 출력한다>> ";
	while (mStack.length() != 0)
	{
		cout << mStack.pop() << ' ';
	}
	cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
}
