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
	//ִ�й��еķ���

	//�ַ����̬����ת��
	B456 *b = dynamic_cast<B456 *>(base);
	b->doSomething();
	if (b != NULL) {
		//ִ��b���з���
	}
	C789 *c = dynamic_cast<C789 *>(base);
	if (c != NULL) {
		//...
	}
}

void printBuf(const char * buf) {
	//ȥ��ֻ������
	//��Ҫȷ���ڴ�ռ�ȷʵ�ɸ�
	char *p = const_cast<char *>(buf);
}
void mai0258n() {
	double dpi = 3.1415926;
	int num1 = (int)dpi;
	//��ʽ����ת������������
	int num2 = static_cast<int>(dpi);

	//char * ==> int *
	char p[] = "hello ....";
	int *p2 = NULL;
	//ǿ������ת��,�������ͽ���
	p2 = reinterpret_cast<int *>(p);
	cout << p << endl; //%s
	cout << p2 << endl; //%p


}