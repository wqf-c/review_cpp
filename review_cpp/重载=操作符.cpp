#define  _CRT_SECURE_NO_WARNINGS
#include"iostream"
using namespace std;

class Name {
private:
	char *p;
	int len;

public:
	Name(int len){
		this->len = len;
		p = new char[len];
	}

	~Name(){
		if (p != NULL) {
			delete[] p;
		}
	}
	//重载=必须是成员函数
	Name operator=(Name &p) {
		if (this->p != NULL) {
			delete[] this->p;
			this->len = 0;
		}
		this->len = p.len;
		this->p = new char[p.len];
		strcpy(this->p, p.p);
		return *this;
	}

	//考虑到Name[i] = 'A'(做左值)，返回引用（返回值做左值，只能是引用）
	char& operator[](int i) {
		return p[i];
	}

	//重载括号
	int operator()(int a) {
		return a * a;
	}
};


