#include<iostream>
using namespace std;

class A {
private:
	int a;
	friend void frinedFunc(A *pA, int _a);
	friend class B;//B类 是 A的好朋友 ，在B中可以访问A类的私有成员 私有函数

public:
	A(int a) {
		this->a = a;
	}
	void printA() {
		cout << this->a << endl;
	}
};

class B
{
public:
	void Set(int a)
	{
		Aobject.a = a;
	}
	void printB()
	{
		cout << Aobject.a << endl;
	}
private:
	A Aobject;
};

void frinedFunc(A *pA, int _a) {
	pA->a = _a;
}

int maain() {
	A *pA = new A(10);
	frinedFunc(pA, 20);
	pA->printA();
	delete pA;
	//B b1;
	//b1.Set(300);
	//b1.printB();
	return EXIT_SUCCESS;
}