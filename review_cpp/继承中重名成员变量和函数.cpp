#include<iostream>
using namespace std;

class Base {
public:
	int a;
	static int i;
	void print() {
		cout << "�����print" << endl;
	}
};

int Base::i = 10; //���߱�������i�����ڴ�
class Bc : public Base {
public:
	int a;

	void print() {
		cout << i << endl;
		cout << "�����print" << endl;
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