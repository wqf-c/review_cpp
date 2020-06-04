#include<iostream>
using namespace std;

//virtual关键字的真正应用场景
class P1 {
public:
	virtual void print() {
		cout << "父类print" << endl;
	}
};

class C1 : public P1{
public:
	void print() {
		cout << "子类print" << endl;
	}
};

void display(P1 *p) {
	//cout << p << endl;
	p->print();
}

int mainw() {
	C1* c = new C1;
	//cout << &c << endl;
	//c->print();
	display(c);
	delete c;
	return EXIT_SUCCESS;
}