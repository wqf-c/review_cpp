#include<iostream>
using namespace std;

class vir {
public:
	virtual void print() = 0;
};

class sxian : public vir {
public:
	void print() {
		cout << "�麯��ʵ��" << endl;
	}
};

int main4521() {
	sxian x;
	x.print();
	return 0;
}