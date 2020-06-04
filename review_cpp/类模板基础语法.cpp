#include<iostream>
using namespace std;

template <typename T>
class A {
public:
	A(T a = 0) {
		this->a = a;
	}

	void printA() {
		cout << this->a << endl;
	}

protected:
	T a;
};

class B : public A<int>
{
public:
	B(int a, int b):A(a) {
		this->b = b;
	}
	~B() {

	}

	void printB() {
		cout << a << "  " << b << endl;
	}

private:
	int b;
};

template <typename T>
class C : public A<T> {
public:
	C(int c, int a) : A(a) {
		this->c = c;
	}

private:
	T c;
};

void m33445ain() {
	A<int> a(11);
	a.printA();
}