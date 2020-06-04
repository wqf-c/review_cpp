#include"iostream"
using namespace std;

class complex {
private:
	int a;
	int b;

	friend complex operator+(complex &a, complex &b);
	//前置++
	friend complex& operator++(complex &a);
	//后置++
	friend complex operator++(complex &a, int);

	friend ostream& operator<<(ostream& out, complex& c);

public:
	complex(int a, int b) {
		this->a = a;
		this->b = b;
	}

	complex operator-(complex &a) {
		return complex(this->a - a.a, this->b - b);
	}
	//前置--
	complex operator--() {
		this->a--;
		this->b--;
		return *this;
	}

	//后置--
	complex operator--(int) {
		complex tmp = *this;
		this->a--;
		this->b--;
		return tmp;
	}



	void print() {
		cout << this->a << "  " << this->b << endl;
	}
};

complex operator+(complex &a, complex &b) {
	complex tem(a.a + b.a, a.b + b.b);
	return tem;
}

complex& operator++(complex &a) {
	a.a++;
	a.b++;
	return a;
}

complex operator++(complex &a, int) {
	complex tmp = a;
	a.a++;
	a.b++;
	return tmp;
}

ostream& operator<<(ostream& out, complex& c) {
	out << c.a << "  " << c.b << endl;
	return out;
}

int mai() {
	complex c1(10, 10);
	complex c2(20, 20);
	complex c3 = c1 + c2;
	//c3.print();
	complex c4 = ++c3;
	//c4.print();
	cout << &c3 << "  " << &c4 << endl;
	c4++;
	cout << c4 << c3;
	return EXIT_SUCCESS;
}