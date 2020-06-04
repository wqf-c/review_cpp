#include<iostream>
using namespace std;

class B {
public:
	int b;

	~B() {
		cout << "Îö¹¹º¯Êý" << endl;
	}
};

class B1 : virtual public B {
public:
	int b1;
};

class B2 : virtual public B {
public:
	int b2;
};

class C : public B1, public B2 {
public:
	int c;
};

int m7in() {
	C c;
	c.b1 = 10;
	c.b = 30;
	return EXIT_SUCCESS;
}