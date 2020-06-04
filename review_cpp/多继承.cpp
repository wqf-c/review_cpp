#include<iostream>
using namespace std;

class Base1 {
private:
	int b1;

public:
	Base1(int b) {
		b1 = b;
	}
};

class Base2 {
private:
	int b2;

public:
	Base2(int b) {
		b2 = b;
	}
};

class B : public Base1, public Base2{
private:
	int b3;

public:
	B(int b1, int b2, int b3) : Base1(b1), Base2(b2) {
		this->b3 = b3;
	}

	void print() {
		cout << b3;
	}
};

int man() {
	B b(10, 20, 30);
	b.print();
	return EXIT_SUCCESS;
}