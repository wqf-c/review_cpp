#include<iostream>
using namespace std;

class A
{
private:
	int a;
public:
	A(int a) {
		this->a = a;
	}
	~A() {

	}
	int getA() {
		return this->a;
	}
private:

};

class B {
private:
	int b1;
	int b2;
	A a1;
	A a2;

public:
	B(int b1, int b2) :a1(10), a2(20) {
		this->b1 = b1;
		this->b2 = b2;
	}

	~B() {

	}

	A getA1() {
		return this->a1;
	}
};

//先调用 a1,a2构造函数（顺序与声明顺序相同），再调用B本身构造函数
int maiasn() {
	B b(10, 20);
	cout << b.getA1().getA() << endl;
	return EXIT_SUCCESS;
}