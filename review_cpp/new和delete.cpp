#include"iostream"
using namespace std;

class Test {
public:
	static int a;
	Test() {
		a = 10;
		cout << "���캯��" << endl;
	}
	 void testConst() const {
		this->a = 20;
		cout << this->a << endl;
	}
	~Test() {
		cout << "��������" << endl;
	}
};
//Ϊ��̬������ʼ��
int Test::a = 10;

//�������new delete
//��ͬ �� ��ͬ�ĵط� new��ִ�����͹��캯��   delete������ ��ִ�������������
int maian() {
//	int *p1 = new int;
//	free(p1);
//	int *p2 = new int[20];
	//delete[]p2;
	//int *p3 = new int;
	//delete p3;
//	Test *t1 = (Test *)malloc(sizeof(Test));
	//delete t1;
//	Test *t2 = new Test();
//	delete t2;
	Test *t2 = new Test();
	t2->testConst();
	delete t2;
	return EXIT_SUCCESS;
}