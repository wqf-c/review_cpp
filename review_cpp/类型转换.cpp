#include<iostream>
using namespace std;

class A123 {
public:
	virtual void doSomething();
};

class B456 : public A123 {
	virtual void doSomethiing() {
		cout << "doSomething" << endl;
	}
};

class C789 : public A123 {
	virtual void doSomethiing() {
		cout << "doSomething" << endl;
	}
};

void display(A123 *base) {
	//执行共有的方法

	//字符类多态类型转换
	B456 *b = dynamic_cast<B456 *>(base);
	b->doSomething();
	if (b != NULL) {
		//执行b特有方法
	}
	C789 *c = dynamic_cast<C789 *>(base);
	if (c != NULL) {
		//...
	}
}

void printBuf(const char * buf) {
	//去掉只读属性
	//需要确保内存空间确实可改
	char *p = const_cast<char *>(buf);
}
void mai0258n() {
	double dpi = 3.1415926;
	int num1 = (int)dpi;
	//隐式类型转换，会检查类型
	int num2 = static_cast<int>(dpi);

	//char * ==> int *
	char p[] = "hello ....";
	int *p2 = NULL;
	//强制类型转换,重新类型解释
	p2 = reinterpret_cast<int *>(p);
	cout << p << endl; //%s
	cout << p2 << endl; //%p


}