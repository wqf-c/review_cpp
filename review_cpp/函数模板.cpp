#include<iostream>
using namespace std;

template<class T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

void mySwap(int a, int b) {
	cout << "普通函数" << endl;
}

int maioin() {
	int a = 0;
	int b = 10;
	char c = 'A';
	mySwap(a, b);
	//显示指定类型
	mySwap<int>(a, b);
	//函数模板不支持隐式类型转换
	//mySwap(a, c);
	cout << a << b << endl;
	//有函数重载，优先调用普通函数
	mySwap(10, 20);
	//强制调用模板函数
	mySwap<>(a, b);
	return 0;
}