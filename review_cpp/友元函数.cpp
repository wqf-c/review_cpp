#include<iostream>
using namespace std;

class A {
private:
	int a;
	friend void frinedFunc(A *pA, int _a);
	friend class B;//B�� �� A�ĺ����� ����B�п��Է���A���˽�г�Ա ˽�к���

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