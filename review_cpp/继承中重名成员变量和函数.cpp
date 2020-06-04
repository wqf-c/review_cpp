#include<iostream>
using namespace std;

class Base {
public:
	int a;
	static int i;
	void print() {
		cout << "父类的print" << endl;
	}
};

int Base::i = 10; //告诉编译器给i分配内存
class Bc : public Base {
public:
	int a;

	void print() {
		cout << i << endl;
		cout << "子类的print" << endl;
	}
};

int ain() {
	Bc b;
	b.a = 10;
	b.Base::a = 20;
	cout << b.a << endl;
	b.print();
	b.Base::print();
	cout << Base::i;
	return EXIT_SUCCESS;
}