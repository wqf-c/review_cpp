#include"iostream"
using namespace std;

class Test {
public:
	static int a;
	Test() {
		a = 10;
		cout << "构造函数" << endl;
	}
	 void testConst() const {
		this->a = 20;
		cout << this->a << endl;
	}
	~Test() {
		cout << "析构函数" << endl;
	}
};
//为静态变量初始化
int Test::a = 10;

//分配对象new delete
//相同 和 不同的地方 new能执行类型构造函数   delete操作符 能执行类的析构函数
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