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
	//����=�����ǳ�Ա����
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

	//���ǵ�Name[i] = 'A'(����ֵ)���������ã�����ֵ����ֵ��ֻ�������ã�
	char& operator[](int i) {
		return p[i];
	}

	//��������
	int operator()(int a) {
		return a * a;
	}
};


