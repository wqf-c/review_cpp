#include<iostream>
using namespace std;

//virtual�ؼ��ֵ�����Ӧ�ó���
class P1 {
public:
	virtual void print() {
		cout << "����print" << endl;
	}
};

class C1 : public P1{
public:
	void print() {
		cout << "����print" << endl;
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