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
		//����ֻ�Ǵ�����һ���������󣬵������Ͼ����٣�û����������ӣ�����thisû�й�ϵ
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