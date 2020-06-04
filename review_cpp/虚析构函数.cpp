#include<iostream>
using namespace std;

//通过父类指针，释放所有的子类资源
class Aq {
public:
	char *p1;
	Aq() {
		p1 = new char[10];
	}

	virtual ~Aq() {
		cout << "析构函数1" << endl;
		delete[] p1;
	}
};

class Ap : public Aq {
public:
	char *p2;
	Ap() {
		p2 = new char[10];
	}

	~Ap() {
		cout << "析构函数2" << endl;
		delete[] p2;
	}
};

void dele(Aq *q) {
	delete q;
}

int ma0256in() {
	Ap* p = new Ap;
	dele(p);
	return EXIT_SUCCESS;
}