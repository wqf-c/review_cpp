#include"iostream"
using namespace std;

class C {
public:
	int a;
	int b;
	int c;

	C(int a, int b) {
		this->a = a;
		this->b = b;
		//这里只是创建了一个匿名对象，但是马上就销毁（没有其它对象接），和this没有关系
		C(a, b, 100);
	}

	C(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
};

int maiaan() {
	C c(10, 20);
	cout << c.c << endl;
	return EXIT_SUCCESS;
}